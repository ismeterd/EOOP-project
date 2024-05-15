// School.cpp

#include <iostream>

#include "Lecturer.h"
#include "School.h"
#include "Course.h"
#include "Student.h"

using namespace std;

School::School(const string &name)
    : name(name), headOfLecturers(nullptr), numberOfLecturers(0),
    headOfCourses(nullptr), numberOfCourses(0),
    headOfStudents(nullptr), numberOfStudents(0)
{
}

School::~School()
{
    lecturerElement* currentLecturer = headOfLecturers;
    while (currentLecturer)
    {
        lecturerElement* temp = currentLecturer;
        currentLecturer = currentLecturer->next;
        delete temp;
    }

    courseElement* coursePtr = headOfCourses;
    while (coursePtr)
    {
        courseElement* temp = coursePtr;
        coursePtr = coursePtr->next;
        delete temp;
    }

    studentElement* studentPtr = headOfStudents;
    while (studentPtr)
    {
        studentElement* temp = studentPtr;
        studentPtr = studentPtr->next;
        delete temp;
    }
}

bool School::hireLecturer(Lecturer &lecturer)
{
    // check if the lecturer is already hired
    lecturerElement *current, *previous;
    if (findLecturer(lecturer, current, previous))
    {
        cout << "[WARNING]: Lecturer \"" << lecturer.getName() << "\" is already hired!" << endl;
        return false;
    }

//    add new lecturer
    lecturerElement* newLecturer = new lecturerElement;
    newLecturer->data = &lecturer;
    newLecturer->next = headOfLecturers;
    headOfLecturers = newLecturer;
    numberOfLecturers++;

//    make Lecturer's jobStatus true
    lecturer.activateJobStatus();

    return true;
}

bool School::fireLecturer(Lecturer &lecturer)
{
// check if the lecturer is already hired
    lecturerElement *current, *previous;
    if (!findLecturer(lecturer, current, previous))
    {
        cout << "[WARNING]: Lecturer \"" << lecturer.getName() << "\" (to be deleted) is not hired!" << endl;
        return false;
    }

// remove the lecturer from the list of hired lecturers
    if (current == headOfLecturers)
        headOfLecturers = current->next;
    else
        previous->next = current->next;
    delete current;
    numberOfLecturers--;

//    make Lecturer's jobStatus false
    lecturer.deactivateJobStatus();

//    Update the course to remove the lecturer as its course instructor
//    for all course, course.fireLecturerFromCourse();
//    complete
    courseElement *coursePtr = headOfCourses;
    while (coursePtr != nullptr) {
        if (coursePtr->data->getCourseLecturer() == &lecturer) {
            if (!(coursePtr->data->fireLecturerFromCourse()))
                return false;
        }
        coursePtr = coursePtr->next;
    }
    return true;
}

bool School::fireLecturerByName(const string &lecturerName)
{
// check if the lecturer is already hired
    lecturerElement *current, *previous;
    if (!findLecturerByName(lecturerName, current, previous))
    {
        cout << "[WARNING]: Lecturer named " << lecturerName << " (to be deleted) is not hired!" << endl;
        return false;
    }

//    make Lecturer's jobStatus false
    current->data->deactivateJobStatus();

    // remove the lecturer from the list of hired lecturers
    if (current == headOfLecturers)
        headOfLecturers = current->next;
    else
        previous->next = current->next;
    delete current;
    numberOfLecturers--;

    return true;
}

bool School::addCourse(Course& course, Lecturer& courseLecturer)
{
//    check if the lecturer is hired
    lecturerElement *currentLecturer, *previousLecturer;
    if (!findLecturer(courseLecturer, currentLecturer, previousLecturer))
    {
        cout << "[WARNING]: Lecturer \"" << courseLecturer.getName()
            << "\" (to be Course Lecturer) is not hired!" << endl;
        return false;
    }

//    check if the course already exists
    courseElement *currentCourse, *previousCourse;
    if (findCourse(course, currentCourse, previousCourse))
    {
        cout << "[WARNING]: Course \"" << course.getCode() << "\" is already exist!" << endl;
        return false;
    }

//    check if there is a course with the same code
    courseElement *currentCourseWithSameCode, *previousCourseWithSameCode;
    if (findCourseByCode(course.getCode(), currentCourseWithSameCode, previousCourseWithSameCode)) {
        cout << "[WARNING]: A course with the same code \"" << course.getCode() << "\" already exists!" << endl;
        return false;
    }

    courseElement* newCourse = new courseElement;
    newCourse->data = &course;
    newCourse->next = headOfCourses;
    headOfCourses = newCourse;
    numberOfCourses++;

//    make Course's courseStatus true
    course.activateCourseStatus();
//    establish a connection between Lecturer and Course
    courseLecturer.becomeLecturerOfCourse(course);

    return true;
}

bool School::removeCourse(Course &course)
{
//    check if the course exists
    courseElement *currentCourse, *previousCourse;
    if(!findCourse(course, currentCourse, previousCourse)) {
        cout << "[WARNING]: Course \"" << course.getCode()
            << "\" can not be removed. The course is not added by the school!" << endl;
        return false;
    }

//    Remove the course from the list offered courses
    if (currentCourse == headOfCourses)
        headOfCourses = currentCourse->next;
    else
        previousCourse->next = currentCourse->next;
    delete currentCourse;
    numberOfCourses--;

//    break the connection between Lecturer and Course
    course.fireLecturerFromCourse();
//    make Course's courseStatus false
    course.deactivateCourseStatus();

    return true;
}

bool School::removeCourseByCode(const string &code)
{
//    check if the course exists
    courseElement *currentCourse, *previousCourse;
    if(!findCourseByCode(code, currentCourse, previousCourse)) {
        cout << "[WARNING]: Course \"" << code
            << "\" can not be removed. The course is not added by the school!" << endl;
        return false;
    }

//    break the connection between Lecturer and Course
    currentCourse->data->fireLecturerFromCourse();
//    make Course's courseStatus false
    currentCourse->data->deactivateCourseStatus();

//    Remove the course from the list offered courses
    if (currentCourse == headOfCourses)
        headOfCourses = currentCourse->next;
    else
        previousCourse->next = currentCourse->next;
    delete currentCourse;
    numberOfCourses--;

    return true;
}

bool School::registerStudent(Student &student)
{
// check if the student is already registered
    studentElement *currentStudent, *previousStudent;
    if (findStudent(student, currentStudent, previousStudent))
    {
        cout << "[WARNING]: Student \"" << student.getName() << "\" is already registered!" << endl;
        return false;
    }

//    Check whether the student number of the student to be registered is the same as the student number of an already
//    registered student.
    studentElement *currentStudentWithSameNumber, *previousStudentWithSameNumber;
    if (findStudentByStudentNumber(student.getStudentNumber(), currentStudentWithSameNumber,
                                   previousStudentWithSameNumber)) {
        cout << "[WARNING]: A student with the same student number ("
            << student.getStudentNumber() << ") already exists!" << std::endl;
        return false;
    }

// Add the new student to the list of registered students
    studentElement* newStudent = new studentElement;
    newStudent->data = &student;
    newStudent->next = headOfStudents;
    headOfStudents = newStudent;
    numberOfStudents++;

//    set student's school as this school
    student.setRegisteredSchool(this);
//    activate the student status
    student.activateStudentStatus();

    return true;
}

bool School::unregisterStudent(Student &student)
{
//    check if the student is already registered
    studentElement *currentStudent, *previousStudent;
    if ((!findStudent(student, currentStudent, previousStudent))) {
        cout << "[WARNING]: Student \"" << student.getName() <<  "\" (to be unregistered) is not registered!" << endl;
        return false;
    }

//    remove the student from the list of registered students
    if (currentStudent == headOfStudents)
        headOfStudents = currentStudent->next;
    else
        previousStudent->next = currentStudent->next;
    delete currentStudent;
    numberOfStudents--;

//    set student's school as null
    student.setRegisteredSchool(nullptr);
//    deactivate the student status
    student.deactivateStudentStatus();

    return true;
}

bool School::unregisterStudentByStudentNumber(const string &studentNumber)
{
//    check if the student is already registered
    studentElement *currentStudent, *previousStudent;
    if (!findStudentByStudentNumber(studentNumber, currentStudent, previousStudent)) {
        cout << "[WARNING]: Student ("<< studentNumber << ") (to be unregistered) is not registered!" << endl;
        return false;
    }

//    set student's school as null
    currentStudent->data->setRegisteredSchool(nullptr);
//    deactivate the student status
    currentStudent->data->deactivateStudentStatus();

//    remove the student from the list of registered students
    if (currentStudent == headOfStudents)
        headOfStudents = currentStudent->next;
    else
        previousStudent->next = currentStudent->next;
    delete currentStudent;
    numberOfStudents--;
    return true;
}

bool School::addStudentToCourse(Student &student, Course &course)
{
    if (course.addStudent(student))
        return true;
    else
        return false;
}

bool School::removeStudentFromCourse(Student &student, Course &course)
{
    if (course.removeStudent(student))
        return true;
    else
        return false;
}

void School::printLecturers() const
{
    cout << "#Lecturers in " << getName() << endl;

    School::lecturerElement* lecturerPtr = headOfLecturers;
    while (lecturerPtr)
    {
        cout << "-> " << lecturerPtr->data->getTitle() << " " << lecturerPtr->data->getName() << endl;
        lecturerPtr = lecturerPtr->next;
    }
}

void School::printCourses() const
{
    cout << "#Given Courses in " << getName() << endl;

    School::courseElement* coursePtr = headOfCourses;
    while (coursePtr)
    {
        cout << "-> " <<coursePtr->data->getName() << endl;
        coursePtr = coursePtr->next;
    }
}

void School::printStudents() const
{
    cout << "#Registered Students in " << getName() << endl;

    School::studentElement* studentPtr = headOfStudents;
    while (studentPtr)
    {
        cout << "-> " <<studentPtr->data->getName() << " - "  << studentPtr->data->getStudentNumber() << endl;
        studentPtr = studentPtr->next;
    }
}

string School::getName() const
{
    return name;
}

int School::getNumberOfLecturers() const
{
    return numberOfLecturers;
}

int School::getNumberOfCourses() const
{
    return numberOfCourses;
}

int School::getNumberOfStudents() const
{
    return numberOfStudents;
}

ostream& operator<<(ostream& output, School& school)
{
    output << school.name << endl;
    for (int i = 0; i < school.name.size(); ++i) {
        output << "=";
    }
    output << endl;

    output << "#Lecturers" << endl;

    School::lecturerElement* lecturerPtr = school.headOfLecturers;
    while (lecturerPtr)
    {
        output << "-> " << lecturerPtr->data->getTitle() << " " << lecturerPtr->data->getName() << endl;
        lecturerPtr = lecturerPtr->next;
    }

    output << "\n#Courses" << endl;

    School::courseElement* coursePtr = school.headOfCourses;
    while (coursePtr)
    {
        output << "-> " <<coursePtr->data->getName() << endl;
        coursePtr = coursePtr->next;
    }

    output << "\n#Students" << endl;

    School::studentElement* studentPtr = school.headOfStudents;
    while (studentPtr)
    {
        output << "-> " <<studentPtr->data->getName() << endl;
        studentPtr = studentPtr->next;
    }

    output << endl;

    for (int i = 0; i < school.name.size(); ++i) {
        output << "#";
    }
    output << endl << endl;

    return output;
}

bool School::findLecturer(const Lecturer& lecturer, lecturerElement*& current,
                  lecturerElement*& previous) const
{
    previous = nullptr;
    current = headOfLecturers;
    while (current != nullptr) {
        if (current->data == &lecturer)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}

bool School::findLecturerByName(const string &lecturerName, School::lecturerElement *&current,
                                School::lecturerElement *&previous) const
{
    previous = nullptr;
    current = headOfLecturers;
    while (current != nullptr) {
        if (current->data->getName() == lecturerName)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}

bool School::findCourse(const Course &course, School::courseElement *&current, School::courseElement *&previous) const
{
    previous = nullptr;
    current = headOfCourses;
    while (current != nullptr)
    {
        if (current->data == &course)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}

bool School::findCourseByCode(const std::string &code, School::courseElement *&current,
                              School::courseElement *&previous) const
{
    previous = nullptr;
    current = headOfCourses;
    while (current != nullptr)
    {
        if (current->data->getCode() == code)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}

bool
School::findStudent(const Student &student, School::studentElement *&current, School::studentElement *&previous) const
{
    previous = nullptr;
    current = headOfStudents;
    while (current != nullptr)
    {
        if (current->data == &student)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}

bool School::findStudentByStudentNumber(const string &studentNumber, School::studentElement *&current,
                                        School::studentElement *&previous) const
{
    previous = nullptr;
    current = headOfStudents;
    while (current != nullptr)
    {
        if (current->data->getStudentNumber() == studentNumber)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}
