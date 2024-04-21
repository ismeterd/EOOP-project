// main.cpp

#include <iostream>

#include "School.h"
#include "Lecturer.h"
#include "Course.h"
#include "Student.h"

using namespace std;

int main()
{
    School school("Warsaw University of Technology");

    Student student1("Ismet Erdogan");
    Student student2("Ahmet Citak");
    Student student3("Mahmut Enes Oztopal");

    Course course1("EOOP");
    Course course2("EELE");
    Course course3("ESISM");
    Course course4("ECULT");

    Lecturer lecturer1("Roman Podraza");
    Lecturer lecturer2("Hakan Temeltas");

    school.registerStudent(student1);
    school.registerStudent(student2);
    school.registerStudent(student3);

    school.hireLecturer(lecturer1);
    school.hireLecturer(lecturer2);

    school.addCourse(course1, lecturer1);
    school.addCourse(course2, lecturer1);
    school.addCourse(course3, lecturer1);
    school.addCourse(course4, lecturer2);

    school.addStudentToCourse(student1, course1);
    school.addStudentToCourse(student1, course2);
    school.addStudentToCourse(student2, course2);
    school.addStudentToCourse(student2, course3);
    school.addStudentToCourse(student3, course4);

    cout << school;

    cout << lecturer1;
    cout << lecturer2;

    cout << course1;
    cout << course2;
    cout << course3;
    cout << course4;

    cout << student1;
    cout << student2;
    cout << student3;

    cout << "\n[INFO]: End of Program" << endl;
    return 0;
}
