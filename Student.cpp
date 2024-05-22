// Student.cpp (Student Class Implementation)

#include <iostream>

#include "School.h"
#include "Student.h"
#include "Course.h"

using namespace std;

Student::Student(const string &name, const string &studentNumber)
    : name(name), studentNumber(studentNumber),
    headOfCoursesTakenByStudent(nullptr), numberOfCoursesTakenByStudent(0),
    totalCreditsOfCoursesTaken(0), activeStudent(false), registeredSchool(nullptr)
{}

Student::~Student()
{
//    remove all elements of the list of Courses Taken by the Student
    courseElement* coursePtr = headOfCoursesTakenByStudent;
    while (coursePtr)
    {
        courseElement* temp = coursePtr;
        coursePtr = coursePtr->next;
        delete temp;
    }
}

bool Student::registerToSchool(School &school)
{
    if (school.registerStudent(*this))
        return true;
    else
        return false;
}

bool Student::unregisterFromSchool()
{
//    check if the student is already registered
    if (registeredSchool == nullptr) {
        cout << "[WARNING]: Student \"" << getName() <<  "\" (to be unregistered) is not registered!" << endl;
        return false;
    }

    if (registeredSchool->unregisterStudent(*this))
        return true;
    else
        return false;
}

bool Student::enrollCourse(Course &course)
{
//    Check if the student is registered in the school
    if (!getCurrentActivityStatus()) {
        cout << "[WARNING]: The student \"" << getName() <<  "\" is not registered in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: The course \"" << course.getCode() <<  "\" is not active!" << endl;
        return false;
    }

//    Check if the course's student capacity has reached its maximum
    if (course.isCourseCapacityFull()) {
        cout << "[WARNING]: The course \"" << course.getCode() <<  "\" is at capacity (max 10 students)!" << endl;
        return false;
    }

//    Check if the course is already taken by the student.
    courseElement *currentCourse, *previousCourse;
    if (findCourse(course, currentCourse, previousCourse)) {
        cout << "[WARNING]: The course \"" << course.getCode() <<  "\" is already taken by the student \""
            << getName() << "\" !" << endl;
        return false;
    }

//    establish connection between Student and Course
    if (addCourseToEnrolledCourseList(course)) {
        if (course.addStudentToStudentsTakingCourseList(*this))
            return true;
        else
            return false;
    }
    else
        return false;
}

bool Student::unEnrollCourse(Course &course)
{
//    Check if the student is registered in the school
    if (!getCurrentActivityStatus()) {
        cout << "[WARNING]: The student \"" << getName() << "\" is not registered in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: The course \"" << course.getCode() << "\" is not active!" << endl;
        return false;
    }

//    Check if the course is taken by the student
    courseElement *currentCourse, *previousCourse;
    if (!findCourse(course, currentCourse, previousCourse)) {
        cout << "[WARNING]: The course \"" << course.getCode() << "\" is not taken by the student \""
            << getName() << "\" !" << endl;
        return false;
    }

//    Break connection between Stodent and Course
    if (removeCourseFromEnrolledCourseList(course)) {
        if (course.removeStudentFromStudentsTakingCourseList(*this))
            return true;
        else
            return false;
    }
    else
        return false;
}

bool Student::addCourseToEnrolledCourseList(Course& course)
{
//    Check if the student is registered in the school
    if (!getCurrentActivityStatus()) {
        cout << "[WARNING]: The student is not enrolled in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: The course is not active!" << endl;
        return false;
    }

//    Check if the course's student capacity has reached its maximum
    if (course.isCourseCapacityFull()) {
        cout << "[WARNING]: The course is at capacity (max 10 students)!" << endl;
        cout << "[WARNING]: from student!" << endl;
        return false;
    }

//    Check if the course is already taken by the student.
    courseElement *currentCourse, *previousCourse;
    if (findCourse(course, currentCourse, previousCourse)) {
        cout << "[WARNING]: The course is already taken by the student!" << endl;
        return false;
    }

//    add new course to the list
    courseElement* newCourse = new courseElement;
    newCourse->data = &course;
    newCourse->next = headOfCoursesTakenByStudent;
    headOfCoursesTakenByStudent = newCourse;
    numberOfCoursesTakenByStudent++;

    return true;
}

bool Student::removeCourseFromEnrolledCourseList(Course &course)
{
//    Check if the student is registered in the school
    if (!getCurrentActivityStatus()) {
        cout << "[WARNING]: The student \"" << getName() << "\" is not registered in school!" << endl;
        return false;
    }

//    Check if the course is offered by the school (is the course active)
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: The course \"" << course.getCode() << "\" is not active!" << endl;
        return false;
    }

//    Check if the course is taken by the student
    courseElement *currentCourse, *previousCourse;
    if (!findCourse(course, currentCourse, previousCourse)) {
        cout << "[WARNING]: The course \"" << course.getCode() << "\" is not taken by the student \""
            << getName() << "\" !" << endl;
        return false;
    }

//    If the course is found, remove the course from the student's list of taken courses
    if (currentCourse == headOfCoursesTakenByStudent) {
        headOfCoursesTakenByStudent = currentCourse->next;
    } else {
        previousCourse->next = currentCourse->next;
    }

    delete currentCourse;
    numberOfCoursesTakenByStudent--;

    return true;
}

bool Student::setRegisteredSchool(School* addressOfSchool)
{
    registeredSchool = addressOfSchool;
    return true;
}

bool Student::activateStudentStatus()
{
    activeStudent = true;
    return true;
}

bool Student::deactivateStudentStatus()
{
//   UnEnroll from all Enrolled Courses
    while (headOfCoursesTakenByStudent != nullptr) {
        Course* course = headOfCoursesTakenByStudent->data;
        unEnrollCourse(*course);
    }

    activeStudent = false;
    return true;
}

void Student::printCourses() const
{
    cout << "#Courses Taken by the " << getName() << endl;

    Student::courseElement* coursePtr = headOfCoursesTakenByStudent;
    while (coursePtr)
    {
        cout << "-> " << coursePtr->data->getName() << endl;
        coursePtr = coursePtr->next;
    }
}

string Student::getName() const
{
    return name;
}

string Student::getStudentNumber() const
{
    return studentNumber;
}

int Student::getTotalCreditsOfCoursesTaken()
{
    int dummyVar = 0;

    Student::courseElement* coursePtr = headOfCoursesTakenByStudent;
    while (coursePtr)
    {
        dummyVar += coursePtr->data->getNumberOfCredits();
    }
    totalCreditsOfCoursesTaken = dummyVar;
    return dummyVar;
}

bool Student::getCurrentActivityStatus() const
{
    return activeStudent;
}

ostream& operator<<(ostream& output, Student& student)
{
    output << "Student: " << student.name << endl;
    for (int i = 0; i < student.name.size() + 10; ++i) {
        output << "-";
    }
    output << endl;
    output << "Student Number: " << student.getStudentNumber() << endl;

    output << "#Courses Taken by the " << student.name << endl;

    Student::courseElement* coursePtr = student.headOfCoursesTakenByStudent;
    while (coursePtr)
    {
        output << "-> " << coursePtr->data->getName() << endl;
        coursePtr = coursePtr->next;
    }

    output << endl;

    return output;
}

bool
Student::findCourse(const Course &course, Student::courseElement *&current, Student::courseElement *&previous) const
{
    previous = nullptr;
    current = headOfCoursesTakenByStudent;
    while (current != nullptr)
    {
        if (current->data == &course)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}
