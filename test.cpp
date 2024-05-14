// test.cpp (all test scenarios)

#include <iostream>

#include "School.h"
#include "Lecturer.h"
#include "Course.h"
#include "Student.h"

using namespace std;

int main()
{
////    ###############################################################
////    Case 1: Hiring a New Lecturer
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//
//    bool test1 = school.hireLecturer(lecturer);
////    test1 -> true (expected)
//    if (test1)
////        printLecturers() is called to see if Lecturer is hired
//        school.printLecturers();
//
////    Expected Result: hireLecturer performs the hire operation and
////    returns true.  Afterward, the condition required to enter the
////    if block is met and Lecturer is printed on the screen.
//////    ###############################################################

////    ###############################################################
////    Case 2: Hiring a New Lecturer (already existing)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//
//    school.hireLecturer(lecturer);
//
//    bool test2 = school.hireLecturer(lecturer);
////    test2 -> false (expected)
//    if (!test2)
////        printLecturers() is called to see if second same Lecturer
////        is not hired
//        school.printLecturers();
//
////    Expected Result: The hireLecturer() method prints an error
////    message and returns false. As a result, a single Lecturer
////    appears in the output.
////    ###############################################################

////    ###############################################################
////    Case 3: Firing the Lecturer
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//
//    school.hireLecturer(lecturer);
////        printLecturers() is called to see if Lecturer is hired
//    school.printLecturers();
//
//    bool test3 = school.fireLecturer(lecturer);
////    test3 -> true (expected)
//    if (test3)
////        printLecturers() is called to see if Lecturer is fired
//        school.printLecturers();
//
////    Expected Result: The fireLecturer method performs the fire
////    operation and returns true. As a result, Lecturer does not
////    appear in the printLecturers method in the if block.
////    ###############################################################

////    ###############################################################
////    Case 4: Firing the Lecturer (non-existing)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//
//    bool test4 = school.fireLecturer(lecturer);
////    test4 -> false (expected)
//    if (!test4)
////        printLecturers() is called to see nothing
//        school.printLecturers();
//
////    Expected Result: The fireLecturer method cannot perform the
////    fire operation because the Lecturer has not been hired
////    before. It returns false as a result. And when the hired
////    teachers are printed on the screen, nothing appears.
////    ###############################################################

////    ###############################################################
////    Case 5: Adding a New Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//
//    bool test5 = school.addCourse(course, lecturer);
////    test5 -> true (expected)
//    if (test5)
////        printCourses() is called to see if Course is added
//        school.printCourses();
//
////    Expected Result: The addCourse method performs the function of
////    opening a course and returns true. The course is then printed
////    on the screen.
////    ###############################################################

////    ###############################################################
////    Case 6: Adding a New Course (with same code or same name)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//    Course course2("Advanced Topics in Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test6 = school.addCourse(course2, lecturer);
////    test6 -> false (expected)
//    if (!test6)
////        printCourses() is called to see if course2 is not added
//        school.printCourses();
//
////    Expected Result: The addCourse method cannot function and
////    will return false because the code of course2 is the same
////    as the course code added before. (It would be like this even
////    if the name was the same.)
////    ###############################################################

////    ###############################################################
////    Case 7: Removing the Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test7 = school.removeCourse(course);
////    test7 -> true (expected)
//    if (test7)
////        printCourses() is called to see if Course is removed
//        school.printCourses();
//
////    Expected Result: The removeCourse method performs its function
////    and removes the course from School. It also returns true.
////    ###############################################################

////    ###############################################################
////    Case 8: Removing the Course (non-existing)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    bool test8 = school.removeCourse(course);
////    test8 -> false (expected)
//    if (!test8)
////        printCourses() is called to see nothing
//        school.printCourses();
//
////    Expected Result: The removeCourse method cannot perform its
////    function because the course is not opened by the school and
////    returns false.
////    ###############################################################

////    ###############################################################
////    Case 9: Removing the Course by the Course Code
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test9 = school.removeCourseByCode("IBIM");
////    test9 -> true (expected)
//    if (test9)
////        printCourses() is called to see nothing
//        school.printCourses();
//
////    Expected Result: The removeCourseByCode method performs its
////    function (searches the added courses for the entered code
////    and removes it if found) and returns true.
////    ###############################################################

////    ###############################################################
////    Case 10: Removing the Course by the Course Code (non-existing)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    bool test10 = school.removeCourseByCode("ECULT");
////    test10 -> false (expected)
//    if (!test10)
////        printCourses() is called to see nothing
//        school.printCourses();
//
////    Expected Result: The removeCourseByCode method cannot perform
////    its function because it cannot find the Add Course
////    corresponding to the entered code and returns false.
////    ###############################################################

////    ###############################################################
////    Case 11: Registering a New Student
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
//
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    bool test11 =school.registerStudent(student);
////    test11 -> true (expected)
//    if (test11)
////        printStudents() is called to see if student is registered
//        school.printStudents();
//
////    Expected Result: The registerStudent method performs its
////    function and registers the student. returns true.
////    ###############################################################

////    ###############################################################
////    Case 12: Registering a New Student (with same student number)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
//
////    create new Student object
//    Student student("Peter Parker", "040237508");
//    Student student2("Jack Sparrow", "040237508");
//
//    school.registerStudent(student);
//
//    bool test12 =school.registerStudent(student2);
////    test12 -> false (expected)
//    if (!test12)
////        printStudents() is called to see if student2 is not
////        registered
//        school.printStudents();
//
////    Expected Result: The registerStudent method cannot fulfill its
////    function because another student is registered to the school
////    with the same student number. and returns false. That's why
////    only student is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 13: Unregistering the Student
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
//
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.registerStudent(student);
//
//    bool test13 =school.unregisterStudent(student);
////    test13 -> true (expected)
//    if (test13)
////        printStudents() is called to see nothing
//        school.printStudents();
//
////    Expected Result: The unregisterStudent method performs its
////    function and unregisters the student from the school,
////    returning true. As a result, no students are printed on the
////    screen.
////    ###############################################################

////    ###############################################################
////    Case 14: Unregistering the Student (non-existing)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
//
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    bool test14 =school.unregisterStudent(student);
////    test14 -> false (expected)
//    if (!test14)
////        printStudents() is called to see nothing
//        school.printStudents();
//
////    Expected Result: The unregisterStudent method cannot perform
////    its function because the student is not registered at the
////    school and returns false. As a result, no students are printed
////    on the screen.
////    ###############################################################

////    ###############################################################
////    Case 15: Unregistering the Student by the Student Number
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
//
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.registerStudent(student);
//
//    bool test15 = school.unregisterStudentByStudentNumber("040237508");
////    test15 -> true (expected)
//    if (test15)
////        printStudents() is called to see nothing
//        school.printStudents();
//
////    Expected Result: The unregisterStudentByStudentNumber method
////    performs its function by finding the student corresponding
////    to the entered student number and deleting his/her
////    registration. Returns true. Additionally, since the student
////    record is deleted, no student will be displayed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 16: Unregistering the Student by the Student Number
////    (non-existing)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
//
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.registerStudent(student);
//
//    bool test16 = school.unregisterStudentByStudentNumber("040200871");
////    test16 -> false (expected)
//    if (!test16)
////        printStudents() is called to see student
//        school.printStudents();
//
////    Expected Result: The unregisterStudentByStudentNumber method
////    cannot perform its function because it cannot find a
////    registered student corresponding to the entered number.
////    As a result, it returns false and prints the previously
////    registered student on the screen.
////    ###############################################################

////    ###############################################################
////    Case 17: Updating the Lecturer of the Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//
//    bool test17 = course.updateLecturer(lecturer2);
////    test17 -> true (expected)
//    if (test17)
////        getNameOfTheCourseLecturer() returns name of the Lecturer
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The updateLecturer method performs its
////    function and changes the Lecturer of the course. It returns
////    true and prints the Course Lecturer name on the screen.
////    ###############################################################

////    ###############################################################
////    Case 18: Updating the Lecturer of the Course (there is no
////    currently course lecturer)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//    course.fireLecturerFromCourse();
//
//    bool test18 = course.updateLecturer(lecturer2);
////    test18 -> false (expected)
//    if (!test18)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The updateLecturer method cannot function
////    because updating is only possible if there is an existing
////    Lecturer. The value false is returned and no name is written
////    to the screen.
////    ###############################################################

////    ###############################################################
////    Case 19: Updating the Lecturer of the Course (maximum course
////    capacity)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//    Course course2("Advanced Topics in Building Iron Man", "ABIM", 4);
//    Course course3("Introduction to Arc Reactor", "IAC", 3);
//    Course course4("Introduction to Propulsion", "IPRO", 3);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer2);
//    school.addCourse(course2, lecturer);
//    school.addCourse(course3, lecturer);
//    school.addCourse(course4, lecturer);
//
//    bool test19 = course.updateLecturer(lecturer);
////    test19 -> false (expected)
//    if (!test19)
////        getNameOfTheCourseLecturer() returns name of the lecturer
////        ("Tolga Ozuygur")
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The updateLecturer method cannot fulfill its
////    function because lecturer2 has reached its capacity by giving
////    3 lectures in total and cannot give the 4th lecture. The
////    value false is returned and "Tolga Ozuygur" is printed on
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 20: Updating the Lecturer of the Course (the lecturer is
////    not employed by school)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test20 = course.updateLecturer(lecturer2);
////    test20 -> false (expected)
//    if (!test20)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The updateLecturer method cannot perform its
////    function because the lecturer2 does not work at the school.
////    The value false is returned and "Tony Stark" is printed
////    on the screen.
////    ###############################################################

////    ###############################################################
////    Case 21: Updating the Lecturer of the Course
////    (course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//
//    bool test21 = course.updateLecturer(lecturer2);
////    test21 -> false (expected)
//    if (!test21)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The updateLecturer function cannot perform
////    its function because the course has not been added by the
////    school, that is, it is not an active course, and as a result,
////    it returns false. Nothing is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 22: Firing the Lecturer from the Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test22 = course.fireLecturerFromCourse();
////    test22 -> true (expected)
//    if (test22)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: fireLecturerFromCourse method executes and
////    terminates the lecturer's course task, returning true. Nothing
////    is printed on the screen because there is no lecturer for the
////    course anymore.
////    ###############################################################

////    ###############################################################
////    Case 23: Firing the Lecturer from the Course
////    (there is no currently course lecturer)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//    course.fireLecturerFromCourse();
//
//    bool test23 = course.fireLecturerFromCourse();
////    test23 -> false (expected)
//    if (!test23)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: fireLecturerFromCourse cannot perform the
////    function because the course does not currently have a
////    lecturer. It returns false and nothing is printed to the
////    screen.
////    ###############################################################

////    ###############################################################
////    Case 24: Firing the Lecturer from the Course
////    (course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//    school.removeCourse(course);
//
//    bool test24 = course.fireLecturerFromCourse();
////    test24 -> false (expected)
//    if (!test24)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: fireLecturerFromCourse cannot perform its
////    function because the course is not currently offered by
////    the school. It returns false and does not print anything
////    to the screen.
////    ###############################################################

////    ###############################################################
////    Case 26: Assigning a Lecturer to the Course
////    (the lecturer is not employed by school)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//    course.fireLecturerFromCourse();
//
//    bool test26 = course.assignLecturer(lecturer2);
////    test26 -> false (expected)
//    if (!test26)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The assignLecturer method cannot fulfill its
////    function because the lecturer to be assigned does not work at
////    the school. It returns false and does not print anything to
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 27: Assigning a Lecturer to the Course
////    (maximum course capacity)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//    Course course2("Advanced Topics in Building Iron Man", "ABIM", 4);
//    Course course3("Introduction to Arc Reactor", "IAC", 3);
//    Course course4("Introduction to Propulsion", "IPRO", 3);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer2);
//    school.addCourse(course2, lecturer);
//    school.addCourse(course3, lecturer);
//    school.addCourse(course4, lecturer);
//
//    bool test27 = course.assignLecturer(lecturer2);
////    test27 -> false (expected)
//    if (!test27)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The assignLecturer method cannot fulfill
////    its function because the lecturer to be assigned gives
////    the maximum number of lectures. It returns false and does
////    not print anything to
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 28: Assigning a Lecturer to the Course
////    (course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//    school.removeCourse(course);
//
//    bool test28 = course.assignLecturer(lecturer2);
////    test28 -> false (expected)
//    if (!test28)
////        getNameOfTheCourseLecturer() returns empty string
//        cout << course.getNameOfTheCourseLecturer();
//
////    Expected Result: The assignLecturer method cannot function
////    because the course is not offered by the school, meaning it is
////    not active. It returns false and does not print anything to
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 29: Quitting Teaching the Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test29 = lecturer.quitTeachingTheCourse(course);
////    test29 -> true (expected)
//    if (test29)
////        printCourses print course(s) given by lecturer
//        lecturer.printCourses();
//
////    Expected Result: The quitTeachingTheCourse method executes its
////    function and terminates the Lecturer's task in the course. It
////    functions the same as the fireLecturerFromCourse function of
////    the Course class. It returns true and does not print anything
////    to the screen.
////    ###############################################################

////    ###############################################################
////    Case 30: Quitting Teaching the Course
////    (the lecturer is not employed by school)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//    school.fireLecturer(lecturer);
//
//    bool test30 = lecturer.quitTeachingTheCourse(course);
////    test30 -> false (expected)
//    if (!test30)
////        printCourses print course(s) given by lecturer
//        lecturer.printCourses();
//
////    Expected Result: The quitTeachingTheCourse method cannot
////    perform its function because the lecturer is not actively
////    working at the school. It returns false and does not print
////    anything to the screen because, in this scenario, the course
////    instructor has left the school.
////    ###############################################################

////    ###############################################################
////    Case 31: Quitting Teaching the Course
////    (the lecturer of the course is not (this) lecturer)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//
//    bool test31 = lecturer2.quitTeachingTheCourse(course);
////    test31 -> false (expected)
//    if (!test31)
////        printCourses print course(s) given by lecturer
//        lecturer.printCourses();
//
////    Expected Result: The quitTeachingTheCourse method cannot
////    function because lecturer2 is not the lecturer of the course.
////    It returns false and prints the course
////    ("Introduction to Building Iron Man") given by the lecturer
////    ("Tony Stark") on the screen.
////    ###############################################################

////    ###############################################################
////    Case 32: Quitting Teaching the Course
////    (course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//    school.removeCourse(course);
//
//    bool test32 = lecturer.quitTeachingTheCourse(course);
////    test32 -> false (expected)
//    if (!test32)
////        printCourses print course(s) given by lecturer
//        lecturer.printCourses();
//
////    Expected Result: The quitTeachingTheCourse method cannot
////    fulfill its function because the course is no longer offered
////    by the school, so the lecturer cannot be the lecturer of the
////    inactive course. It returns false and in this scenario,
////    nothing is printed because the lecturer does not offer another
////    course.
////    ###############################################################

////    ###############################################################
////    Case 33: Becoming Lecturer of the Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//    lecturer.quitTeachingTheCourse(course);
//
//    bool test33 = lecturer2.becomeLecturerOfCourse(course);
////    test33 -> true (expected)
//    if (test33)
////        printCourses print course(s) given by lecturer2
//        lecturer2.printCourses();
//
////    Expected Result: The becomeLecturerOfCourse method performs
////    its function and lecturer2 becomes the lecturer of the course
////    that does not have a lecturer. It returns true and this course
////    started by lecturer2 is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 34: Becoming Lecturer of the Course
////    (the lecturer is not employed by school)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//    lecturer.quitTeachingTheCourse(course);
//
//    bool test34 = lecturer2.becomeLecturerOfCourse(course);
////    test34 -> false (expected)
//    if (!test34)
////        printCourses print course(s) given by lecturer2
//        lecturer2.printCourses();
//
////    Expected Result: The becomeLecturerOfCourse method is executed
////    and lecturer2 is not currently employed at the school (he may
////    have never been hired or may have been fired). It returns
////    false and in this scenario nothing is printed to the screen
////    because lecturer2 cannot work at the school.
////    ###############################################################

////    ###############################################################
////    Case 35: Becoming Lecturer of the Course
////    (maximum course capacity)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//    Course course2("Advanced Topics in Building Iron Man", "ABIM", 4);
//    Course course3("Introduction to Arc Reactor", "IAC", 3);
//    Course course4("Introduction to Propulsion", "IPRO", 3);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//    school.addCourse(course2, lecturer);
//    school.addCourse(course3, lecturer);
//    school.addCourse(course4, lecturer2);
//    lecturer2.quitTeachingTheCourse(course4);
//
//    bool test35 = lecturer.becomeLecturerOfCourse(course4);
////    test35 -> false (expected)
//    if (!test35)
////        printCourses print course(s) given by lecturer
//        lecturer.printCourses();
//
////    Expected Result: The becomeLecturerOfCourse method cannot
////    function because the lecturer has reached the maximum number
////    of courses he can teach. It returns false and course, course2
////    and course3 are printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 36: Becoming Lecturer of the Course
////    (the course may already have a lecturer)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//
//    bool test36 = lecturer2.becomeLecturerOfCourse(course);
////    test36 -> false (expected)
//    if (!test36)
////        printCourses print course(s) given by lecturer2
//        lecturer2.printCourses();
//
////    Expected Result: The becomeLecturerOfCourse method cannot
////    perform because the course already has a lecturer.
////    It returns false and nothing is printed to the screen in
////    this scenario.
////    ###############################################################

////    ###############################################################
////    Case 37: Becoming Lecturer of the Course
////    (course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    Lecturer lecturer2("Tolga Ozuygur", "Research Assistant",
//                       "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    school.hireLecturer(lecturer);
//    school.hireLecturer(lecturer2);
//    school.addCourse(course, lecturer);
//    school.removeCourse(course);
//
//    bool test37 = lecturer2.becomeLecturerOfCourse(course);
////    test37 -> false (expected)
//    if (!test37)
////        printCourses print course(s) given by lecturer2
//        lecturer2.printCourses();
//
////    Expected Result: The becomeLecturerOfCourse method cannot
////    function because the course is no longer offered by the
////    school (it may never have been offered). It returns false and
////    nothing is printed to the screen in this scenario.
////    ###############################################################

////    ###############################################################
////    Case 38: Adding a Student to the Course by the School
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//
//    bool test38 = school.addStudentToCourse(student, course);
////    test38 -> true (expected)
//    if (test38)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The addStudentToCourse method enrolls the
////    student in the course. It establishes the connections between
////    the students and the student becomes a student of that course.
////    Returns true and the course taken by the student is printed on
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 39: Adding a Student to the Course by the School
////    (the student is not registered)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test39 = school.addStudentToCourse(student, course);
////    test39 -> false (expected)
//    if (!test39)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: addStudentToCourse cannot perform its
////    function because the student to be enrolled in the course
////    is not registered at the school. It returns false and the
////    course cannot be printed to the screen in this scenario.
////    ###############################################################

////    ###############################################################
////    Case 40: Adding a Student to the Course by the School
////    (the course at full capacity)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237550");
//    Student student1("Emily Johnson", "040237501");
//    Student student2("Michael Brown", "040237502");
//    Student student3("Emma Williams", "040237503");
//    Student student4("Daniel Jones", "040237504");
//    Student student5("Sophia Davis", "040237505");
//    Student student6("Matthew Wilson", "040237506");
//    Student student7("Olivia Taylor", "040237507");
//    Student student8("James Martinez", "040237508");
//    Student student9("Isabella Lopez", "040237509");
//    Student student10("William Anderson", "040237510");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.registerStudent(student1);
//    school.registerStudent(student2);
//    school.registerStudent(student3);
//    school.registerStudent(student4);
//    school.registerStudent(student5);
//    school.registerStudent(student6);
//    school.registerStudent(student7);
//    school.registerStudent(student8);
//    school.registerStudent(student9);
//    school.registerStudent(student10);
//    school.addCourse(course, lecturer);
//    school.addStudentToCourse(student1, course);
//    school.addStudentToCourse(student2, course);
//    school.addStudentToCourse(student3, course);
//    school.addStudentToCourse(student4, course);
//    school.addStudentToCourse(student5, course);
//    school.addStudentToCourse(student6, course);
//    school.addStudentToCourse(student7, course);
//    school.addStudentToCourse(student8, course);
//    school.addStudentToCourse(student9, course);
//    school.addStudentToCourse(student10, course);
//
//    bool test40 = school.addStudentToCourse(student, course);
////    test40 -> false (expected)
//    if (!test40)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: addStudentToCourse cannot function because
////    10 students are currently enrolled in the course, indicating
////    that the course has reached maximum capacity. As a result,
////    student("Peter Parker") cannot register for the course. It
////    returns false and the course cannot be printed to the screen
////    in this scenario.
////    ###############################################################

////    ###############################################################
////    Case 41: Adding a Student to the Course by the School
////    (the student is already enrolled the course)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    school.addStudentToCourse(student, course);
//
//    bool test41 = school.addStudentToCourse(student, course);
////    test41 -> false (expected)
//    if (!test41)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: addStudentToCourse cannot perform its
////    function because the student to be enrolled in the course
////    is already registered in the course. It returns false and
////    in this scenario, the course taken by the student is printed
////    on the screen.
////    ###############################################################

////    ###############################################################
////    Case 42: Adding a Student to the Course by the School
////    (course is not active))
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    school.removeCourse(course);
//
//    bool test42 = school.addStudentToCourse(student, course);
////    test42 -> false (expected)
//    if (!test42)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: addStudentToCourse cannot perform its
////    function because the relevant course may not have been
////    opened by the school, may have been closed, or may not
////    have a Lecturer. It returns false and nothing is printed to
////    this screen.
////    ###############################################################

////    ###############################################################
////    Case 43: Removing the Student from the Course by the School
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    school.addStudentToCourse(student, course);
//
//    bool test43 = school.removeStudentFromCourse(student, course);
////    test43 -> true (expected)
//    if (test43)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The removeStudentFromCourse method performs
////    its function and deletes the student who has previously
////    registered for the course from the course. It returns true
////    and no courses are printed because the student is no longer
////    enrolled in any courses in this scenario.
////    ###############################################################

////    ###############################################################
////    Case 44: Removing the Student from the Course by the School
////    (the student is not registered)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    school.addStudentToCourse(student, course);
//    school.unregisterStudent(student);
//
//    bool test44 = school.removeStudentFromCourse(student, course);
////    test44 -> false (expected)
//    if (!test44)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: It cannot perform the removeStudentFromCourse
////    function because the student whose registration is requested
////    to be deleted from the course is not currently registered at
////    the school, or may have never been registered. It returns
////    False and no courses are printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 45: Removing the Student from the Course by the School
////    (the student is already unEnrolled the course)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    school.addStudentToCourse(student, course);
//    school.removeStudentFromCourse(student, course);
//
//    bool test45 = school.removeStudentFromCourse(student, course);
////    test45 -> false (expected)
//    if (!test45)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: It cannot perform the removeStudentFromCourse
////    function because the student whose enrollment is requested to
////    be deleted from the course has already been enEnrolled from
////    the course or may not have been enrolled in the course at all.
////    It returns False and no courses are printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 46: Removing the Student from the Course by the School
////    (the course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    school.addStudentToCourse(student, course);
//    school.removeCourse(course);
//
//    bool test46 = school.removeStudentFromCourse(student, course);
////    test46 -> false (expected)
//    if (!test46)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: t cannot perform the removeStudentFromCourse
////    function because the course for which the student's
////    enrollment is requested has been closed by the school or
////    may not have been opened at all. It returns false and no
////    courses are written to the screen in this scenario.
////    ###############################################################

////    ###############################################################
////    Case 47: Adding a Student to the Course by the Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//
//    bool test47 = course.addStudent(student);
////    test47 -> true (expected)
//    if (test47)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The addStudent method performs its function
////    and the student is added to the course. It returns true and
////    the course taken by the student is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 48: Adding a Student to the Course by the Course
////    (the student is not registered)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test48 = course.addStudent(student);
////    test48 -> false (expected)
//    if (!test48)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The addStudent method cannot fulfill its
////    function because the student to be added to the course is
////    not registered to the school. It returns false and nothing
////    is printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 49: Adding a Student to the Course by the Course (the course at full capacity)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237550");
//    Student student1("Emily Johnson", "040237501");
//    Student student2("Michael Brown", "040237502");
//    Student student3("Emma Williams", "040237503");
//    Student student4("Daniel Jones", "040237504");
//    Student student5("Sophia Davis", "040237505");
//    Student student6("Matthew Wilson", "040237506");
//    Student student7("Olivia Taylor", "040237507");
//    Student student8("James Martinez", "040237508");
//    Student student9("Isabella Lopez", "040237509");
//    Student student10("William Anderson", "040237510");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.registerStudent(student1);
//    school.registerStudent(student2);
//    school.registerStudent(student3);
//    school.registerStudent(student4);
//    school.registerStudent(student5);
//    school.registerStudent(student6);
//    school.registerStudent(student7);
//    school.registerStudent(student8);
//    school.registerStudent(student9);
//    school.registerStudent(student10);
//    school.addCourse(course, lecturer);
//    course.addStudent(student1);
//    course.addStudent(student2);
//    course.addStudent(student3);
//    course.addStudent(student4);
//    course.addStudent(student5);
//    course.addStudent(student6);
//    course.addStudent(student7);
//    course.addStudent(student8);
//    course.addStudent(student9);
//    course.addStudent(student10);
//
//    bool test49 = course.addStudent(student);
////    test49 -> false (expected)
//    if (!test49)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The addStudent method cannot function
////    because the course has reached maximum capacity and a new
////    student cannot enroll in the course. It returns false and
////    nothing is printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 50: Adding a Student to the Course by the Course
////    (the student is already enrolled the course)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    course.addStudent(student);
//
//    bool test50 = course.addStudent(student);
////    test50 -> false (expected)
//    if (!test50)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The addStudent method cannot perform its
////    function because the student to be registered is already
////    registered in the course. It returns false and the course
////    it has already taken is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 51: Adding a Student to the Course by the Course
////    (course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    school.removeCourse(course);
//
//    bool test51 = course.addStudent(student);
////    test51 -> false (expected)
//    if (!test51)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The addStudent method cannot function
////    because the course has been closed by the school (maybe
////    it was never opened). It returns false and nothing is printed
////    to the screen.
////    ###############################################################

////    ###############################################################
////    Case 52: Removing the Student from the Course by the Course
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    course.addStudent(student);
//
//    bool test52 = course.removeStudent(student);
////    test52 -> true (expected)
//    if (test52)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The removeStudent method performs its
////    function and removes the student previously added to the
////    course from the course. It returns true and nothing is
////    printed because the student has been removed from the course.
////    ###############################################################

////    ###############################################################
////    Case 53: Removing the Student from the Course by the Course
////    (the student is not registered)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    course.addStudent(student);
//    school.unregisterStudent(student);
//
//    bool test53 = course.removeStudent(student);
////    test53 -> false (expected)
//    if (!test53)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The removeStudent method cannot function
////    because the student to be removed from the course is not
////    already enrolled in the school (or has been de-enrolled),
////    as a result, the student is no longer an active student.
////    It returns false and nothing is printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 54: Removing the Student from the Course by the Course
////    (the student is already unEnrolled the course)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    course.addStudent(student);
//    course.removeStudent(student);
//
//    bool test54 = course.removeStudent(student);
////    test54 -> false (expected)
//    if (!test54)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The removeStudent method cannot fulfill its
////    function because the student to be removed from the course
////    has already left the course or has been removed (via methods
////    of other objects). It returns false and nothing is printed to
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 55: Removing the Student from the Course by the Course
////    (the course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    course.addStudent(student);
//    school.removeCourse(course);
//
//    bool test55 = course.removeStudent(student);
////    test55 -> false (expected)
//    if (!test55)
////        printCourses print course(s) taken by the student
//        student.printCourses();
//
////    Expected Result: The removeStudent method cannot perform its
////    function because the course has been removed by the school,
////    that is, it is not active (it may not have been opened by the
////    school at all). It returns false and nothing is printed to
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 56: Changing Number of Credits the Course
////    ---------------------------------------------------------------
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    bool test56 = course.changeNumberOfCredits(3);
////    test56 -> true (expected)
//    if (test56)
////        getNumberOfCredits() returns number of credits of the
////        (this) course
//        cout << course.getNumberOfCredits();
//
////    Expected Result: The changeNumberOfCredits method performs
////    its function and updates the number of credits with the number
////    entered as an argument. Since the number is within the
////    appropriate range, the transaction has been completed
////    successfully. It returns true and the number of credits for
////    the course is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 57: Changing Number of Credits the Course
////    (invalid input)
////    ---------------------------------------------------------------
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
//
//    bool test57 = course.changeNumberOfCredits(-3);
////    test57 -> false (expected)
//    if (!test57)
////        getNumberOfCredits() returns number of credits of the
////        (this) course
//        cout << course.getNumberOfCredits();
//
////    Expected Result: The changeNumberOfCredits method cannot
////    function because a suitable number of credits has not been
////    entered (-3), and it would not have been able to do so without
////    the appropriate range (it could be between 1 and 4). It
////    returns false and the old (unchanged) credit number of the
////    course is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 58: Registering to the School by Student Object
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    bool test58 = student.registerToSchool(school);
////    test58 -> true (expected)
//    if (test58)
////        printStudents print student(s) registered in school
//        school.printStudents();
//
////    Expected Result: The registerToSchool method performs its
////    function and the student is registered to the school entered
////    as an argument. It functions the same as the registerStudent
////    method of the School class. The method returns true and the
////    registered student is printed on the screen.
////    ###############################################################


////    ###############################################################
////    Case 59: Registering to the School by Student Object
////    (currently registered)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    student.registerToSchool(school);
//
//    bool test59 = student.registerToSchool(school);
////    test59 -> false (expected)
//    if (!test59)
////        printStudents print student(s) registered in school
//        school.printStudents();
//
////    Expected Result: The registerToSchool method cannot perform
////    its function because the student is already enrolled in the
////    school. The method returns false and the student who is
////    already enrolled in the school is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 60: Registering to the School by Student Object
////    (there is a student with same student number)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Student object
//    Student student("Peter Parker", "040237508");
//    Student student2("Jack Sparrow", "040237508");
//
//    student.registerToSchool(school);
//
//    bool test60 = student2.registerToSchool(school);
////    test60 -> false (expected)
//    if (!test60)
////        printStudents print student(s) registered in school
//        school.printStudents();
//
////    Expected Result: The registerToSchool method cannot fulfill
////    its function because another student with the same number as
////    the student who wants to register to the school is registered
////    to the school. As a result, he cannot be enrolled in school.
////    The method returns false and the student who is already
////    enrolled in the school is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 61: Unregistering from the School by Student Object
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    student.registerToSchool(school);
//
//    bool test61 = student.unregisterFromSchool();
////    test61 -> true (expected)
//    if (test61)
////        printStudents print student(s) registered in school
//        school.printStudents();
//
////    Expected Result: The unregisterFromSchool method performs its
////    function and deletes the registered student's school record.
////    The function returns true because it fulfills its main task,
////    but no student is printed on the screen because the registered
////    student's record has been deleted.
////    ###############################################################

////    ###############################################################
////    Case 62: Unregistering from the School by Student Object
////    (currently unregistered)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    student.registerToSchool(school);
//    student.unregisterFromSchool();
//
//    bool test62 = student.unregisterFromSchool();
////    test62 -> false (expected)
//    if (!test62)
////        printStudents print student(s) registered in school
//        school.printStudents();
//
////    Expected Result: The unregisterFromSchool method cannot
////    function because the student's registration has already been
////    deleted (or the student may not have been enrolled at all).
////    It returns false and no students are printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 63: Enrolling to the Course by Student Object
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//
//    bool test63 = student.enrollCourse(course);
////    test63 -> true (expected)
//    if (test63)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The enrollCourse method performs its function
////    and the student enrolls in the course (it performs the same
////    function as the addStudentToCourse() method of the School
////    class or the addStudent() method of the Course class.). It
////    returns true and the student registered for the course is
////    printed.
////    ###############################################################

////    ###############################################################
////    Case 64: Enrolling to the Course by Student Object
////    (the student is not registered in school)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.addCourse(course, lecturer);
//
//    bool test64 = student.enrollCourse(course);
////    test64 -> false (expected)
//    if (!test64)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The enrollCourse method cannot function
////    because the student to be enrolled in the course is not
////    registered at the school. Returns false, no students are
////    printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 65: Enrolling to the Course by Student Object
////    (the student is already enrolled the Course)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    student.enrollCourse(course);
//
//    bool test65 = student.enrollCourse(course);
////    test64 -> false (expected)
//    if (!test65)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The enrollCourse method cannot function
////    because the student to be enrolled in the course is already
////    registered in the course. Returns false, the student who is
////    already enrolled in the course is printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 66: Enrolling to the Course by Student Object
////    (the course at full capacity)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237550");
//    Student student1("Emily Johnson", "040237501");
//    Student student2("Michael Brown", "040237502");
//    Student student3("Emma Williams", "040237503");
//    Student student4("Daniel Jones", "040237504");
//    Student student5("Sophia Davis", "040237505");
//    Student student6("Matthew Wilson", "040237506");
//    Student student7("Olivia Taylor", "040237507");
//    Student student8("James Martinez", "040237508");
//    Student student9("Isabella Lopez", "040237509");
//    Student student10("William Anderson", "040237510");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.registerStudent(student1);
//    school.registerStudent(student2);
//    school.registerStudent(student3);
//    school.registerStudent(student4);
//    school.registerStudent(student5);
//    school.registerStudent(student6);
//    school.registerStudent(student7);
//    school.registerStudent(student8);
//    school.registerStudent(student9);
//    school.registerStudent(student10);
//    school.addCourse(course, lecturer);
//    student1.enrollCourse(course);
//    student2.enrollCourse(course);
//    student3.enrollCourse(course);
//    student4.enrollCourse(course);
//    student5.enrollCourse(course);
//    student6.enrollCourse(course);
//    student7.enrollCourse(course);
//    student8.enrollCourse(course);
//    student9.enrollCourse(course);
//    student10.enrollCourse(course);
//
//    bool test66 = student.enrollCourse(course);
////    test66 -> false (expected)
//    if (!test66)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The enrollCourse method cannot function
////    because the course capacity has reached its maximum (10
////    students) and the student (Peter Parker) could not be
////    registered in this case. Returns false, 10 students
////    registered for the course are printed on the screen.
////    ###############################################################

////    ###############################################################
////    Case 67: Enrolling to the Course by Student Object
////    (the course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    student.enrollCourse(course);
//    school.removeCourse(course);
//
//    bool test67 = student.unEnrollCourse(course);
////    test67 -> false (expected)
//    if (!test67)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The enrollCourse method cannot function;
////    the course to be registered for has been removed by the
////    school (it may not have been opened at all), meaning it is
////    not active. Returns false, no students are printed on the
////    screen.
////    ###############################################################

////    ###############################################################
////    Case 68: UnEnrolling to the Course by Student Object
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    student.enrollCourse(course);
//
//    bool test68 = student.unEnrollCourse(course);
////    test68 -> true (expected)
//    if (test68)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The unEnrollCourse method performs its
////    function and deletes the student's registration from the
////    course in which he was previously enrolled (it performs
////    the same function as the removeStudentFromCourse() method
////    of the School class and the removeStudent() method of the
////    Course class). It returns true and the student is not
////    displayed on the screen because the student has been
////    unregistered from the course.
////    ###############################################################

////    ###############################################################
////    Case 69: UnEnrolling to the Course by Student Object
////    (the student is not registered in school)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    student.enrollCourse(course);
//    student.unregisterFromSchool();
//
//    bool test69 = student.unEnrollCourse(course);
////    test69 -> false (expected)
//    if (!test69)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The unEnrollCourse method cannot function
////    because the student who wants to unEnroll from the course is
////    not registered at the school (maybe deleted or never
////    registered). It returns false and no students are printed to
////    the screen.
////    ###############################################################

////    ###############################################################
////    Case 70: UnEnrolling to the Course by Student Object
////    (the student is not already enrolled the Course)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//
//    bool test70 = student.unEnrollCourse(course);
////    test70 -> false (expected)
//    if (!test70)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The unEnrollCourse method cannot fulfill its
////    function because the student who wants to unEnroll from the
////    course is not already enrolled in the course. It returns
////    false and no students are printed to the screen.
////    ###############################################################

////    ###############################################################
////    Case 71: UnEnrolling to the Course by Student Object
////    (the course is not active)
////    ---------------------------------------------------------------
////    create new School object
//    School school("Warsaw University of Technology");
////    create new Lecturer object
//    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
////    create new Course object
//    Course course("Introduction to Building Iron Man", "IBIM", 4);
////    create new Student object
//    Student student("Peter Parker", "040237508");
//
//    school.hireLecturer(lecturer);
//    school.registerStudent(student);
//    school.addCourse(course, lecturer);
//    student.enrollCourse(course);
//    school.removeCourse(course);
//
//    bool test71 = student.unEnrollCourse(course);
////    test71 -> true (expected)
//    if (!test71)
////        printStudents() print student(s) enrolled in course.
//        course.printStudents();
//
////    Expected Result: The unEnrollCourse method cannot fulfill its
////    function because the relevant course has been removed by the
////    school (it may not have been opened at all), that is, it is
////    not active. It is not possible to enroll or cancel
////    registration for an inactive course. It returns false and no
////    students are printed to the screen.
////    ###############################################################
}
