// Course.cpp

#include <iostream>

#include "Course.h"
#include "Lecturer.h"
#include "Student.h"

using namespace std;

Course::Course(const string& name, const string& code, int numberOfCredits)
    : name(name), code(code), numberOfCredits(numberOfCredits),
    courseLecturer(nullptr), courseStatus(false),
    headOfStudentsTakingCourse(nullptr), numberOfStudentsTakingCourse(0)
{
    if (!(numberOfCredits >= 1 && numberOfCredits <= 4)) {
        numberOfCredits = 1;
        cout << "[WARNING]: The number of credits entered is invalid (Valid range is 1-4)." << endl;
        cout << "[WARNING]: The number of credits is set as 1!." << endl;
    }
}

Course::~Course()
{
    studentElement* studentPtr = headOfStudentsTakingCourse;
    while (studentPtr)
    {
        studentElement* temp = studentPtr;
        studentPtr = studentPtr->next;
        delete temp;
    }
}

bool Course::assignLecturer(Lecturer &lecturer)
{
//    Check if the course is offered by the school
    if (!getCourseStatus()) {
        cout << "[WARNING]: Course is not active!" << endl;
        return false;
    }

//    Check if the course currently has not a courseLecturer
    if (isThereACourseLecturer()) {
        cout << "[WARNING]: Course has a courseLecturer currently!" << endl;
        return false;
    }

//    Check whether the Lecturer to be assigned to the course is employed by the school
    if (!lecturer.getJobStatus()) {
        cout << "[WARNING]: Lecturer is not hired!" << endl;
        return false;
    }

//    Check the course capacity of the teacher to be assigned to the course
    if (lecturer.isGivenCourseCapacityFull()) {
        cout << "[WARNING]: Lecturer has reached the maximum lecture capacity!" << endl;
        return false;
    }

//    lecturer.becomeLecturerOfCourse();
    courseLecturer = &lecturer;
    return true;
}

bool Course::updateLecturer(Lecturer &lecturer)
{
//    Check if the course is offered by the school
    if (!getCourseStatus()) {
        cout << "[WARNING]: Course is not active!" << endl;
        return false;
    }

//    Check if the course currently has a courseLecturer
    if (!isThereACourseLecturer()) {
        cout << "[WARNING]: Course has not a courseLecturer currently!" << endl;
        return false;
    }

//    Check whether the Lecturer to be assigned to the course is employed by the school
    if (!lecturer.getJobStatus()) {
        cout << "[WARNING]: Lecturer is not hired!" << endl;
        return false;
    }

//    Check the course capacity of the Lecturer to be assigned to the course
    if (lecturer.isGivenCourseCapacityFull()) {
        cout << "[WARNING]: Lecturer has reached the maximum lecture capacity!" << endl;
        return false;
    }

//    lecturer.quitTeachingTheCourse(*this);
    courseLecturer = &lecturer;
    return true;
}

bool Course::fireLecturerFromCourse()
{
//    Check if the course is offered by the school
    if (!getCourseStatus()) {
        cout << "[WARNING]: Course is not active!" << endl;
        return false;
    }

//    Check if the course currently has a courseLecturer
    if (!isThereACourseLecturer()) {
        cout << "[WARNING]: Course has not a courseLecturer currently!" << endl;
        return false;
    }

//    remove all students from the list of Students who takes this course
    while (headOfStudentsTakingCourse != nullptr) {
        Student* student = headOfStudentsTakingCourse->data;
        removeStudentFromStudentsTakingCourseList(*student);
        student->removeCourseFromEnrolledCourseList(*this);
    }

// Clear the courseLecturer pointer
    courseLecturer = nullptr;
    return true;
}

bool Course::addStudent(Student &student)
{
//    Check if the student is registered in the school
    if (!student.getCurrentActivityStatus()) {
        cout << "[WARNING]: The student is not registered in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!courseStatus) {
        cout << "[WARNING]: The course is not active!" << endl;
        return false;
    }

//    Check if the course's student capacity has reached its maximum
    if (isCourseCapacityFull()) {
        cout << "[WARNING]: The course is at capacity (max 10 students)!" << endl;
        return false;
    }

//    Check if the student is already enrolled in the course.
    studentElement *currentStudent, *previousStudent;
    if (findStudent(student, currentStudent, previousStudent)) {
        cout << "[WARNING]: The student is already enrolled in the course!" << endl;
        return false;
    }

    if (student.addCourseToEnrolledCourseList(*this)) {
        if (addStudentToStudentsTakingCourseList(student))
            return true;
        else
            return false;
    }
    else
        return false;
}

bool Course::removeStudent(Student &student)
{
//    Check if the student is registered in the school
    if (!student.getCurrentActivityStatus()) {
        cout << "[WARNING]: The student is not registered in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!courseStatus) {
        cout << "[WARNING]: The course is not active!" << endl;
        return false;
    }

//    Check if the student is not enrolled in the course.
    studentElement *currentStudent, *previousStudent;
    if (!findStudent(student, currentStudent, previousStudent)) {
        cout << "[WARNING]: The student is not enrolled in the course!" << endl;
        return false;
    }

    if (removeStudentFromStudentsTakingCourseList(student)) {
        if (student.removeCourseFromEnrolledCourseList(*this))
            return true;
        else
            return false;
    }
    else
        return false;
}

bool Course::addStudentToStudentsTakingCourseList(Student &student)
{
//    Check if the student is registered in the school
    if (!student.getCurrentActivityStatus()) {
        cout << "[WARNING]: The student is not registered in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!courseStatus) {
        cout << "[WARNING]: The course is not active!" << endl;
        return false;
    }

//    Check if the course's student capacity has reached its maximum
    if (isCourseCapacityFull()) {
        cout << "[WARNING]: The course is at capacity (max 10 students)!" << endl;
        cout << "[WARNING]: from course!" << endl;
        return false;
    }

//    Check if the student is already enrolled in the course.
    studentElement *currentStudent, *previousStudent;
    if (findStudent(student, currentStudent, previousStudent)) {
        cout << "[WARNING]: The student is already enrolled in the course!" << endl;
        return false;
    }

    studentElement* newStudent = new studentElement;
    newStudent->data = &student;
    newStudent->next = headOfStudentsTakingCourse;
    headOfStudentsTakingCourse = newStudent;
    numberOfStudentsTakingCourse++;
    return true;

}

bool Course::removeStudentFromStudentsTakingCourseList(Student &student)
{
//    Check if the student is registered in the school
    if (!student.getCurrentActivityStatus()) {
        cout << "[WARNING]: The student is not registered in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!courseStatus) {
        cout << "[WARNING]: The course is not active!" << endl;
        return false;
    }

//    Check if the student is not enrolled in the course.
    studentElement *currentStudent, *previousStudent;
    if (!findStudent(student, currentStudent, previousStudent)) {
        cout << "[WARNING]: The student is not enrolled in the course!" << endl;
        cout << "[WARNING]: Problem!" << endl;
        return false;
    }

//    If the student is found, remove the student from the course
    if (currentStudent == headOfStudentsTakingCourse) {
        headOfStudentsTakingCourse = currentStudent->next;
    } else {
        previousStudent->next = currentStudent->next;
    }

    delete currentStudent;
    numberOfStudentsTakingCourse--;

    return true;
}

bool Course::activateCourseStatus()
{
    courseStatus = true;
    return true;
}

bool Course::deactivateCourseStatus()
{
//    Remove all students from the course
    while (headOfStudentsTakingCourse != nullptr) {
        Student* student = headOfStudentsTakingCourse->data;
        removeStudentFromStudentsTakingCourseList(*student);
        student->removeCourseFromEnrolledCourseList(*this);
    }

    courseStatus = false;
    return true;
}

bool Course::changeNumberOfCredits(int newNumberOfCredits)
{
    if (!(newNumberOfCredits >= 1 && newNumberOfCredits <= 4)) {
        cout << "[WARNING]: The number of credits entered is invalid (Valid range is 1-4)." << endl;
        return false;
    }

    numberOfCredits = newNumberOfCredits;
    return true;
}

bool Course::isThereACourseLecturer() const
{
    if (courseLecturer == nullptr)
    {
        return false;
    }
    return true;
}

bool Course::isCourseCapacityFull() const
{
    if (getNumberOfStudentsTakingCourse() == MAX_STUDENT_CAPACITY)
        return true;
    else
        return false;
}

void Course::printStudents() const
{
    cout << "#Students Taking This Course" << endl;
    Course::studentElement* studentPtr = headOfStudentsTakingCourse;
    while (studentPtr)
    {
        cout << "-> " << studentPtr->data->getName() << endl;
        studentPtr = studentPtr->next;
    }
}

string Course::getName() const
{
    return name;
}

string Course::getCode() const
{
    return code;
}

string Course::getNameOfTheCourseLecturer() const
{
    if (courseLecturer == nullptr) {
        return "";
    }
    return courseLecturer->getName();
}

Lecturer *Course::getCourseLecturer() const
{
    return courseLecturer;
}

int Course::getNumberOfStudentsTakingCourse() const
{
    return numberOfStudentsTakingCourse;
}

int Course::getNumberOfCredits() const
{
    return numberOfCredits;
}

bool Course::getCourseStatus() const
{
    return courseStatus;
}

ostream& operator<<(ostream& output, Course& course)
{
    output << "Course: " << course.name << endl;
    for (int i = 0; i < course.name.size() + 10; ++i) {
        output << "-";
    }
    output << endl;

    output << "#Courses Lecturer " << endl;
    output << "-> " << (course.courseLecturer)->getName() << endl;

    output << endl;

    output << "#Students Taking This Course" << endl;
    Course::studentElement* studentPtr = course.headOfStudentsTakingCourse;
    while (studentPtr)
    {
        output << "-> " << studentPtr->data->getName() << endl;
        studentPtr = studentPtr->next;
    }

    output << endl;

    return output;
}

bool
Course::findStudent(const Student &student, Course::studentElement *&current, Course::studentElement *&previous) const
{
    previous = nullptr;
    current = headOfStudentsTakingCourse;
    while (current != nullptr)
    {
        if (current->data == &student)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}
