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

    Student student1("Ismet Erdogan", "040200522");
    Student student2("Ahmet Citak", "040200523");
    Student student3("Mahmut Enes Oztopal", "040200524");

    Course course1("Object-Oriented Programming" ,"EOOP", 3);
    Course course2("Electronics", "EELE", 4);
    Course course3("Signals, Systems and Modulations","ESISM", 4);
    Course course4("Culture & Tradition" ,"ECULT", 2);

    Lecturer lecturer1("Roman Podraza", "Docent", "Computer Science");
    Lecturer lecturer2("Hakan Temeltas", "Professor", "Robotics");

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
