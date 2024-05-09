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
    lecturerElement* lecturerPtr = headOfLecturers;
    while (lecturerPtr)
    {
        lecturerElement* temp = lecturerPtr;
        lecturerPtr = lecturerPtr->next;
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
    lecturerElement* newLecturer = new lecturerElement;
    newLecturer->data = &lecturer;
    newLecturer->next = headOfLecturers;
    headOfLecturers = newLecturer;
    numberOfLecturers++;
}

bool School::addCourse(Course& course, Lecturer& courseLecturer)
{
    course.assignLecturer(courseLecturer);
    courseLecturer.becomeLecturerOfCourse(course);

    courseElement* newCourse = new courseElement;
    newCourse->data = &course;
    newCourse->next = headOfCourses;
    headOfCourses = newCourse;
    numberOfCourses++;
}

bool School::registerStudent(Student &student)
{
    studentElement* newStudent = new studentElement;
    newStudent->data = &student;
    newStudent->next = headOfStudents;
    headOfStudents = newStudent;
    numberOfStudents++;
}

bool School::addStudentToCourse(Student &student, Course &course)
{
    student.enrollCourse(course);
    course.addStudent(student);
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
        output << "-> " <<lecturerPtr->data->getName() << endl;
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
