// Lecturer.cpp

#include <iostream>

#include "Lecturer.h"
#include "Course.h"

using namespace std;

Lecturer::Lecturer(const string &name, const string &title, const string &branch)
    : name(name), jobStatus(false),
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
    courseElement* newCourse = new courseElement;
    newCourse->data = &course;
    newCourse->next = headOfCoursesGivenByLecturer;
    headOfCoursesGivenByLecturer = newCourse;
    numberOfCoursesGivenByLecturer++;
}

string Lecturer::getName() const
{
    return name;
}

ostream& operator<<(ostream& output, Lecturer& lecturer)
{
    output << "Lecturer: " << lecturer.name << endl;
    for (int i = 0; i < lecturer.name.size() + 10; ++i) {
        output << "-";
    }
    output << endl;

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
