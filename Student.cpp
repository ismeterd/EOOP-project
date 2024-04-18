// Student.cpp

#include <iostream>

#include "Student.h"
#include "Course.h"

using namespace std;

Student::Student(const string &name)
    : name(name), headOfCoursesTakenByStudent(nullptr), numberOfCoursesTakenByStudent(0)
{}

Student::~Student()
{
    courseElement* coursePtr = headOfCoursesTakenByStudent;
    while (coursePtr)
    {
        courseElement* temp = coursePtr;
        coursePtr = coursePtr->next;
        delete temp;
    }
}

void Student::addCourse(Course &course)
{
    courseElement* newCourse = new courseElement;
    newCourse->data = &course;
    newCourse->next = headOfCoursesTakenByStudent;
    headOfCoursesTakenByStudent = newCourse;
    numberOfCoursesTakenByStudent++;
}

string Student::getName() const
{
    return name;
}

ostream& operator<<(ostream& output, Student& student)
{
    output << "Student: " << student.name << endl;
    for (int i = 0; i < student.name.size() + 10; ++i) {
        output << "-";
    }
    output << endl;

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
