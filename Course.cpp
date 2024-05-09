// Course.cpp

#include <iostream>

#include "Course.h"
#include "Lecturer.h"
#include "Student.h"

using namespace std;

Course::Course(const string& name, const string& code, int numberOfCredits)
    : name(name),code(code), numberOfCredits(numberOfCredits),
    courseLecturer(nullptr), courseStatus(false),
    headOfStudentsTakingCourse(nullptr), numberOfStudentsTakingCourse(0)
{}

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
    courseLecturer = &lecturer;
}

bool Course::addStudent(Student &student)
{
    studentElement* newStudent = new studentElement;
    newStudent->data = &student;
    newStudent->next = headOfStudentsTakingCourse;
    headOfStudentsTakingCourse = newStudent;
    numberOfStudentsTakingCourse++;
}

string Course::getName() const
{
    return name;
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
