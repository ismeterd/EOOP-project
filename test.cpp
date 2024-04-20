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

//    ###############################################################
//    Case 10: Removing the Course by the Course Code (non-existing)
//    ---------------------------------------------------------------
//    create new School object
    School school("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course("Introduction to Building Iron Man", "IBIM", 4);

    bool test10 = school.removeCourseByCode("ECULT");
//    test10 -> false (expected)
    if (!test10)
//        printCourses() is called to see nothing
        school.printCourses();

//    Expected Result: The removeCourseByCode method cannot perform
//    its function because it cannot find the Add Course
//    corresponding to the entered code and returns false.
//    ###############################################################
}

