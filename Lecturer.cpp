// Lecturer.cpp

#include <iostream>

#include "Lecturer.h"
#include "Course.h"

using namespace std;

Lecturer::Lecturer(const string &name, const string &title, const string &branch)
    : name(name), title(title), branch(branch), jobStatus(false),
      headOfCoursesGivenByLecturer(nullptr), numberOfCoursesGivenByLecturer(0)
{
}

Lecturer::~Lecturer()
{
    courseElement* coursePtr = headOfCoursesGivenByLecturer;
    while (coursePtr)
    {
        courseElement* temp = coursePtr;
        coursePtr = coursePtr->next;
        delete temp;
    }
}

bool Lecturer::becomeLecturerOfCourse(Course &course)
{
//    Check whether the Lecturer is employed by the school
    if (!jobStatus) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" is not employed by the school!" << endl;
        return false;
    }

//    Check the course capacity of the Lecturer to be assigned to the course
    if (isGivenCourseCapacityFull()) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" has reached the maximum number of courses!" << endl;
        return false;
    }

// Check if the course currently has a courseLecturer
    if (course.isThereACourseLecturer()) {
        cout << "[WARNING]: Course \"" << course.getCode() << "\" already has a courseLecturer!" << endl;
        return false;
    }

//    Check if the course is offered by the school
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: Course \"" << course.getCode() << "\" is not active!" << endl;
        return false;
    }

//    establish connection between course and lecturer
    course.assignLecturer(*this);

    return true;
}

bool Lecturer::quitTeachingTheCourse(Course &course) {
//    Check whether the Lecturer to be assigned to the course is employed by the school
    if (!jobStatus) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" is not employed by the school!" << endl;
        return false;
    }

//    Check if the course is offered by the school
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: Course \"" << course.getCode() << "\" is not offered by the school!" << endl;
        return false;
    }

// Check if the lecturer is currently teaching this course
    courseElement *currentCourse, *previousCourse;
    if (!findCourse(course, currentCourse, previousCourse)) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" is not currently teaching this course \""
            << course.getCode() << "\" !" << endl;
        return false;
    }

//    Remove the course from the list of courses given by the lecturer
    if (previousCourse) {
        previousCourse->next = currentCourse->next;
    } else {
        headOfCoursesGivenByLecturer = currentCourse->next;
    }
    delete currentCourse;
    numberOfCoursesGivenByLecturer--;

//    Update the course to remove the lecturer as its course instructor
    course.removeAllStudents();
    course.setCourseLecturerAsNull();

    return true;
}

bool Lecturer::addCourseToCoursesGivenByLecturer(Course &course)
{
//    Check whether the Lecturer is employed by the school
    if (!jobStatus) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" is not employed by the school!" << endl;
        return false;
    }

//    Check the course capacity of the Lecturer to be assigned to the course
    if (isGivenCourseCapacityFull()) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" has reached the maximum number of courses!" << endl;
        return false;
    }

//    Check if the course is offered by the school
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: Course \"" << course.getCode() << "\" is not active!" << endl;
        return false;
    }

//    Add the course to the list of courses given by the lecturer
    courseElement* newCourse = new courseElement;
    newCourse->data = &course;
    newCourse->next = headOfCoursesGivenByLecturer;
    headOfCoursesGivenByLecturer = newCourse;
    numberOfCoursesGivenByLecturer++;

    return true;
}

bool Lecturer::removeCourseFromCoursesGivenByLecturer(Course &course)
{
//    Check whether the Lecturer to be assigned to the course is employed by the school
    if (!jobStatus) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" is not employed by the school!" << endl;
        return false;
    }

//    Check if the course is offered by the school
    if (!course.getCourseStatus()) {
        cout << "[WARNING]: Course \"" << course.getCode() << "\" is not offered by the school!" << endl;
        return false;
    }

// Check if the lecturer is currently teaching this course
    courseElement *currentCourse, *previousCourse;
    if (!findCourse(course, currentCourse, previousCourse)) {
        cout << "[WARNING]: Lecturer \"" << getName() << "\" is not currently teaching this course \""
             << course.getCode() << "\" !" << endl;
        return false;
    }

//    Remove the course from the list of courses given by the lecturer
    if (previousCourse) {
        previousCourse->next = currentCourse->next;
    } else {
        headOfCoursesGivenByLecturer = currentCourse->next;
    }

    delete currentCourse;
    numberOfCoursesGivenByLecturer--;

    return true;
}

bool Lecturer::activateJobStatus()
{
    jobStatus = true;
    return true;
}

bool Lecturer::deactivateJobStatus()
{
//    Withdraw (quit) from all courses he/she teaches.
    courseElement* currentCourse = headOfCoursesGivenByLecturer;
    while (currentCourse) {
        Course* temp = currentCourse->data;
        currentCourse = currentCourse->next;
//        remove the lecturer from the course
        temp->fireLecturerFromCourse();
    }

//    Delete all courses in the list that consists courses given by lecturer
    courseElement* coursePtr = headOfCoursesGivenByLecturer;
    while (coursePtr)
    {
        courseElement* temp = coursePtr;
        coursePtr = coursePtr->next;
        delete temp;
    }

//    Update the number of courses given by the lecturer
    numberOfCoursesGivenByLecturer = 0;
//    Clear the headOfCoursesGivenByLecturer pointer
    headOfCoursesGivenByLecturer = nullptr;

    jobStatus = false;
    return true;
}

bool Lecturer::isGivenCourseCapacityFull() const
{
    if (numberOfCoursesGivenByLecturer == MAX_NUMBER_OF_LECTURES)
        return true;
    else
        return false;
}

void Lecturer::printCourses() const
{
    cout << "#Courses Given by " << getTitle() << " " << getName() << endl;

    Lecturer::courseElement* coursePtr = headOfCoursesGivenByLecturer;
    while (coursePtr)
    {
        cout << "-> " << coursePtr->data->getName() << endl;
        coursePtr = coursePtr->next;
    }
}

string Lecturer::getName() const
{
    return name;
}

std::string Lecturer::getTitle() const
{
    return title;
}

std::string Lecturer::getBranch() const
{
    return branch;
}

int Lecturer::getNumberOfCoursesGivenByLecturer() const
{
    return numberOfCoursesGivenByLecturer;
}

bool Lecturer::getJobStatus() const
{
    return jobStatus;
}

ostream& operator<<(ostream& output, Lecturer& lecturer)
{
    output << "Lecturer: " << lecturer.getTitle() << " " << lecturer.getName() << endl;
    for (int i = 0; i < lecturer.name.size() + 10; ++i) {
        output << "-";
    }
    output << endl;
    output << "Branch: " << lecturer.getBranch() << endl;

    output << "#Courses Given by " << lecturer.name << endl;

    Lecturer::courseElement* coursePtr = lecturer.headOfCoursesGivenByLecturer;
    while (coursePtr)
    {
        output << "-> " << coursePtr->data->getName() << endl;
        coursePtr = coursePtr->next;
    }

    output << endl;

    return output;
}

bool Lecturer::findCourse(const Course &course, Lecturer::courseElement *&current,
                          Lecturer::courseElement *&previous) const
{
    previous = nullptr;
    current = headOfCoursesGivenByLecturer;
    while (current != nullptr)
    {
        if (current->data == &course)
            return true;
        previous = current;
        current = current->next;
    }
    return false;
}
