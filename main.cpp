// main.cpp (all test scenarios)

#include <iostream>

#include "School.h"
#include "Lecturer.h"
#include "Course.h"
#include "Student.h"

using namespace std;

int main()
{
//    ###############################################################
//    Case 1: Hiring a New Lecturer
//    ---------------------------------------------------------------
    cout << "Test1: Hiring a New Lecturer\n" << endl;

//    create new School object
    School school_1("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_1("Tony Stark", "Docent", "Electronics");

    school_1.printLecturers();

    bool test1 = school_1.hireLecturer(lecturer_1);
//    test1 -> true (expected)
    if (test1)
//        printLecturers() is called to see if Lecturer is hired
        school_1.printLecturers();

    cout << "--------------------------------------------" << endl;

//    Expected Result: hireLecturer performs the hire operation and
//    returns true.  Afterward, the condition required to enter the
//    if block is met and Lecturer is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 2: Hiring a New Lecturer (already existing)
//    ---------------------------------------------------------------
    cout << "Test2:\n" << endl;

//    create new School object
    School school_2("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_2("Tony Stark", "Docent", "Electronics");

    school_2.hireLecturer(lecturer_2);
    school_2.printLecturers();

    bool test2 = school_2.hireLecturer(lecturer_2);
//    test2 -> false (expected)
    if (!test2)
//        printLecturers() is called to see if second same Lecturer
//        is not hired
        school_2.printLecturers();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The hireLecturer() method prints an error
//    message and returns false. As a result, a single Lecturer
//    appears in the output.
//    ###############################################################

//    ###############################################################
//    Case 3: Firing the Lecturer
//    ---------------------------------------------------------------
    cout << "Test3: Firing the Lecturer\n" << endl;

//    create new School object
    School school_3("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_3("Tony Stark", "Docent", "Electronics");

    school_3.hireLecturer(lecturer_3);
//        printLecturers() is called to see if Lecturer is hired
    school_3.printLecturers();

    bool test3 = school_3.fireLecturer(lecturer_3);
//    test3 -> true (expected)
    if (test3)
//        printLecturers() is called to see if Lecturer is fired
        school_3.printLecturers();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The fireLecturer method performs the fire
//    operation and returns true. As a result, Lecturer does not
//    appear in the printLecturers method in the if block.
//    ###############################################################

//    ###############################################################
//    Case 4: Firing the Lecturer (non-existing)
//    ---------------------------------------------------------------
    cout << "Test4:\n" << endl;

//    create new School object
    School school_4("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_4("Tony Stark", "Docent", "Electronics");

    school_4.printLecturers();

    bool test4 = school_4.fireLecturer(lecturer_4);
//    test4 -> false (expected)
    if (!test4)
//        printLecturers() is called to see nothing
        school_4.printLecturers();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The fireLecturer method cannot perform the
//    fire operation because the Lecturer has not been hired
//    before. It returns false as a result. And when the hired
//    teachers are printed on the screen, nothing appears.
//    ###############################################################

//    ###############################################################
//    Case 5: Adding a New Course
//    ---------------------------------------------------------------
    cout << "Test5: Adding a New Course\n" << endl;

//    create new School object
    School school_5("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_5("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_5("Introduction to Building Iron Man", "IBIM", 4);

    school_5.hireLecturer(lecturer_5);

    bool test5 = school_5.addCourse(course_5, lecturer_5);
//    test5 -> true (expected)
    if (test5)
//        printCourses() is called to see if Course is added
        school_5.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addCourse method performs the function of
//    opening a course and returns true. The course is then printed
//    on the screen.
//    ###############################################################

//    ###############################################################
//    Case 6: Adding a New Course (with same code or same name)
//    ---------------------------------------------------------------
    cout << "Test6:\n" << endl;

//    create new School object
    School school_6("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_6("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_6("Introduction to Building Iron Man", "IBIM", 4);
    Course course2_6("Advanced Topics in Building Iron Man", "IBIM", 4);

    school_6.hireLecturer(lecturer_6);
    school_6.addCourse(course_6, lecturer_6);
    school_6.printCourses();

    bool test6 = school_6.addCourse(course2_6, lecturer_6);
//    test6 -> false (expected)
    if (!test6)
//        printCourses() is called to see if course2 is not added
        school_6.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addCourse method cannot function and
//    will return false because the code of course2 is the same
//    as the course code added before. (It would be like this even
//    if the name was the same.)
//    ###############################################################

//    ###############################################################
//    Case 7: Removing the Course
//    ---------------------------------------------------------------
    cout << "Test7: Removing the Course\n" << endl;

//    create new School object
    School school_7("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_7("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_7("Introduction to Building Iron Man", "IBIM", 4);

    school_7.hireLecturer(lecturer_7);
    school_7.addCourse(course_7, lecturer_7);
    school_7.printCourses();

    bool test7 = school_7.removeCourse(course_7);
//    test7 -> true (expected)
    if (test7)
//        printCourses() is called to see if Course is removed
        school_7.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeCourse method performs its function
//    and removes the course from School. It also returns true.
//    ###############################################################

//    ###############################################################
//    Case 8: Removing the Course (non-existing)
//    ---------------------------------------------------------------
    cout << "Test8:\n" << endl;

//    create new School object
    School school_8("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_8("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_8("Introduction to Building Iron Man", "IBIM", 4);

    bool test8 = school_8.removeCourse(course_8);
//    test8 -> false (expected)
    if (!test8)
//        printCourses() is called to see nothing
        school_8.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeCourse method cannot perform its
//    function because the course is not opened by the school and
//    returns false.
//    ###############################################################

//    ###############################################################
//    Case 9: Removing the Course by the Course Code
//    ---------------------------------------------------------------
    cout << "Test9: Removing the Course by the Course Code\n" << endl;

//    create new School object
    School school_9("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_9("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_9("Introduction to Building Iron Man", "IBIM", 4);

    school_9.hireLecturer(lecturer_9);
    school_9.addCourse(course_9, lecturer_9);
    school_9.printCourses();

    bool test9 = school_9.removeCourseByCode("IBIM");
//    test9 -> true (expected)
    if (test9)
//        printCourses() is called to see nothing
        school_9.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeCourseByCode method performs its
//    function (searches the added courses for the entered code
//    and removes it if found) and returns true.
//    ###############################################################

//    ###############################################################
//    Case 10: Removing the Course by the Course Code (non-existing)
//    ---------------------------------------------------------------
    cout << "Test10:\n" << endl;

//    create new School object
    School school_10("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_10("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_10("Introduction to Building Iron Man", "IBIM", 4);

    bool test10 = school_10.removeCourseByCode("ECULT");
//    test10 -> false (expected)
    if (!test10)
//        printCourses() is called to see nothing
        school_10.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeCourseByCode method cannot perform
//    its function because it cannot find the Add Course
//    corresponding to the entered code and returns false.
//    ###############################################################

//    ###############################################################
//    Case 11: Registering a New Student
//    ---------------------------------------------------------------
    cout << "Test11: Registering a New Student\n" << endl;

//    create new School object
    School school_11("Warsaw University of Technology");

//    create new Student object
    Student student_11("Peter Parker", "040237508");

    bool test11 =school_11.registerStudent(student_11);
//    test11 -> true (expected)
    if (test11)
//        printStudents() is called to see if student is registered
        school_11.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The registerStudent method performs its
//    function and registers the student. returns true.
//    ###############################################################

//    ###############################################################
//    Case 12: Registering a New Student (with same student number)
//    ---------------------------------------------------------------
    cout << "Test12:\n" << endl;

//    create new School object
    School school_12("Warsaw University of Technology");

//    create new Student object
    Student student_12("Peter Parker", "040237508");
    Student student2_12("Jack Sparrow", "040237508");

    school_12.registerStudent(student_12);
    school_12.printStudents();

    bool test12 =school_12.registerStudent(student2_12);
//    test12 -> false (expected)
    if (!test12)
//        printStudents() is called to see if student2 is not
//        registered
        school_12.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The registerStudent method cannot fulfill its
//    function because another student is registered to the school
//    with the same student number. and returns false. That's why
//    only student is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 13: Unregistering the Student
//    ---------------------------------------------------------------
    cout << "Test13: Unregistering the Student\n" << endl;

//    create new School object
    School school_13("Warsaw University of Technology");

//    create new Student object
    Student student_13("Peter Parker", "040237508");

    school_13.registerStudent(student_13);
    school_13.printStudents();

    bool test13 =school_13.unregisterStudent(student_13);
//    test13 -> true (expected)
    if (test13)
//        printStudents() is called to see nothing
        school_13.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unregisterStudent method performs its
//    function and unregisters the student from the school,
//    returning true. As a result, no students are printed on the
//    screen.
//    ###############################################################

//    ###############################################################
//    Case 14: Unregistering the Student (non-existing)
//    ---------------------------------------------------------------
    cout << "Test14:\n" << endl;

//    create new School object
    School school_14("Warsaw University of Technology");

//    create new Student object
    Student student_14("Peter Parker", "040237508");

    bool test14 =school_14.unregisterStudent(student_14);
//    test14 -> false (expected)
    if (!test14)
//        printStudents() is called to see nothing
        school_14.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unregisterStudent method cannot perform
//    its function because the student is not registered at the
//    school and returns false. As a result, no students are printed
//    on the screen.
//    ###############################################################

//    ###############################################################
//    Case 15: Unregistering the Student by the Student Number
//    ---------------------------------------------------------------
    cout << "Test15: Unregistering the Student by the Student Number\n" << endl;

//    create new School object
    School school_15("Warsaw University of Technology");

//    create new Student object
    Student student_15("Peter Parker", "040237508");

    school_15.registerStudent(student_15);
    school_15.printStudents();

    bool test15 = school_15.unregisterStudentByStudentNumber("040237508");
//    test15 -> true (expected)
    if (test15)
//        printStudents() is called to see nothing
        school_15.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unregisterStudentByStudentNumber method
//    performs its function by finding the student corresponding
//    to the entered student number and deleting his/her
//    registration. Returns true. Additionally, since the student
//    record is deleted, no student will be displayed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 16: Unregistering the Student by the Student Number
//    (non-existing)
//    ---------------------------------------------------------------
    cout << "Test16:\n" << endl;

//    create new School object
    School school_16("Warsaw University of Technology");

//    create new Student object
    Student student_16("Peter Parker", "040237508");

    school_16.registerStudent(student_16);
    school_16.printStudents();

    bool test16 = school_16.unregisterStudentByStudentNumber("040200871");
//    test16 -> false (expected)
    if (!test16)
//        printStudents() is called to see student
        school_16.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unregisterStudentByStudentNumber method
//    cannot perform its function because it cannot find a
//    registered student corresponding to the entered number.
//    As a result, it returns false and prints the previously
//    registered student on the screen.
//    ###############################################################

//    ###############################################################
//    Case 17: Updating the Lecturer of the Course
//    ---------------------------------------------------------------
    cout << "Test17: Updating the Lecturer of the Course\n" << endl;

//    create new School object
    School school_17("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_17("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_17("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_17("Introduction to Building Iron Man", "IBIM", 4);

    school_17.hireLecturer(lecturer_17);
    school_17.hireLecturer(lecturer2_17);
    school_17.addCourse(course_17, lecturer_17);
    cout << course_17.getNameOfTheCourseLecturer() << "\n";

    bool test17 = course_17.updateLecturer(lecturer2_17);
//    test17 -> true (expected)
    if (test17)
//        getNameOfTheCourseLecturer() returns name of the Lecturer
        cout << course_17.getNameOfTheCourseLecturer() << "\n";

    cout << "--------------------------------------------" << endl;
//    Expected Result: The updateLecturer method performs its
//    function and changes the Lecturer of the course. It returns
//    true and prints the Course Lecturer name on the screen.
//    ###############################################################

//    ###############################################################
//    Case 18: Updating the Lecturer of the Course (there is no
//    currently course lecturer)
//    ---------------------------------------------------------------
    cout << "Test18:\n" << endl;

//    create new School object
    School school_18("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_18("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_18("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_18("Introduction to Building Iron Man", "IBIM", 4);

    school_18.hireLecturer(lecturer_18);
    school_18.hireLecturer(lecturer2_18);
    school_18.addCourse(course_18, lecturer_18);
    course_18.fireLecturerFromCourse();

    bool test18 = course_18.updateLecturer(lecturer2_18);
//    test18 -> false (expected)
    if (!test18)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_18.getNameOfTheCourseLecturer() << "\n";

    cout << "--------------------------------------------" << endl;
//    Expected Result: The updateLecturer method cannot function
//    because updating is only possible if there is an existing
//    Lecturer. The value false is returned and no name is written
//    to the screen.
//    ###############################################################

//    ###############################################################
//    Case 19: Updating the Lecturer of the Course (maximum course
//    capacity)
//    ---------------------------------------------------------------
    cout << "Test19:\n" << endl;

//    create new School object
    School school_19("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_19("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_19("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_19("Introduction to Building Iron Man", "IBIM", 4);
    Course course2_19("Advanced Topics in Building Iron Man", "ABIM", 4);
    Course course3_19("Introduction to Arc Reactor", "IAC", 3);
    Course course4_19("Introduction to Propulsion", "IPRO", 3);

    school_19.hireLecturer(lecturer_19);
    school_19.hireLecturer(lecturer2_19);
    school_19.addCourse(course_19, lecturer2_19);
    cout << course_19.getNameOfTheCourseLecturer() << "\n";
    school_19.addCourse(course2_19, lecturer_19);
    school_19.addCourse(course3_19, lecturer_19);
    school_19.addCourse(course4_19, lecturer_19);

    lecturer_19.printCourses();
    lecturer2_19.printCourses();

    bool test19 = course_19.updateLecturer(lecturer_19);
//    test19 -> false (expected)
    if (!test19)
//        getNameOfTheCourseLecturer() returns name of the lecturer
//        ("Tolga Ozuygur")
        cout << course_19.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The updateLecturer method cannot fulfill its
//    function because lecturer2 has reached its capacity by giving
//    3 lectures in total and cannot give the 4th lecture. The
//    value false is returned and "Tolga Ozuygur" is printed on
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 20: Updating the Lecturer of the Course (the lecturer is
//    not employed by school)
//    ---------------------------------------------------------------
    cout << "Test20:\n" << endl;

//    create new School object
    School school_20("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_20("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_20("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_20("Introduction to Building Iron Man", "IBIM", 4);

    school_20.hireLecturer(lecturer_20);
    school_20.addCourse(course_20, lecturer_20);

    bool test20 = course_20.updateLecturer(lecturer2_20);
//    test20 -> false (expected)
    if (!test20)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_20.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The updateLecturer method cannot perform its
//    function because the lecturer2 does not work at the school.
//    The value false is returned and "Tony Stark" is printed
//    on the screen.
//    ###############################################################

//    ###############################################################
//    Case 21: Updating the Lecturer of the Course
//    (course is not active)
//    ---------------------------------------------------------------
    cout << "Test21:\n" << endl;

//    create new School object
    School school_21("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_21("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_21("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_21("Introduction to Building Iron Man", "IBIM", 4);

    school_21.hireLecturer(lecturer_21);
    school_21.hireLecturer(lecturer2_21);

    bool test21 = course_21.updateLecturer(lecturer2_21);
//    test21 -> false (expected)
    if (!test21)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_21.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The updateLecturer function cannot perform
//    its function because the course has not been added by the
//    school, that is, it is not an active course, and as a result,
//    it returns false. Nothing is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 22: Firing the Lecturer from the Course
//    ---------------------------------------------------------------
    cout << "Test22: Firing the Lecturer from the Course\n" << endl;

//    create new School object
    School school_22("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_22("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_22("Introduction to Building Iron Man", "IBIM", 4);

    school_22.hireLecturer(lecturer_22);
    school_22.addCourse(course_22, lecturer_22);
    cout << course_22.getNameOfTheCourseLecturer() << endl;

    bool test22 = course_22.fireLecturerFromCourse();
//    test22 -> true (expected)
    if (test22)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_22.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: fireLecturerFromCourse method executes and
//    terminates the lecturer's course task, returning true. Nothing
//    is printed on the screen because there is no lecturer for the
//    course anymore.
//    ###############################################################

//    ###############################################################
//    Case 23: Firing the Lecturer from the Course
//    (there is no currently course lecturer)
//    ---------------------------------------------------------------
    cout << "Test23:\n" << endl;

//    create new School object
    School school_23("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_23("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_23("Introduction to Building Iron Man", "IBIM", 4);

    school_23.hireLecturer(lecturer_23);
    school_23.addCourse(course_23, lecturer_23);
    cout << course_23.getNameOfTheCourseLecturer() << endl;
    course_23.fireLecturerFromCourse();
    cout << course_23.getNameOfTheCourseLecturer() << endl;

    bool test23 = course_23.fireLecturerFromCourse();
//    test23 -> false (expected)
    if (!test23)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_23.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: fireLecturerFromCourse cannot perform the
//    function because the course does not currently have a
//    lecturer. It returns false and nothing is printed to the
//    screen.
//    ###############################################################

//    ###############################################################
//    Case 24: Firing the Lecturer from the Course
//    (course is not active)
//    ---------------------------------------------------------------
    cout << "Test24:\n" << endl;

//    create new School object
    School school_24("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_24("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_24("Introduction to Building Iron Man", "IBIM", 4);

    school_24.hireLecturer(lecturer_24);
    school_24.addCourse(course_24, lecturer_24);
    school_24.removeCourse(course_24);

    bool test24 = course_24.fireLecturerFromCourse();
//    test24 -> false (expected)
    if (!test24)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_24.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: fireLecturerFromCourse cannot perform its
//    function because the course is not currently offered by
//    the school. It returns false and does not print anything
//    to the screen.
//    ###############################################################

//    ###############################################################
//    Case 25: Assigning a Lecturer to the Course
//    ---------------------------------------------------------------
    cout << "Test25:  Assigning a Lecturer to the Course\n" << endl;

//    create new School object
    School school_25("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_25("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_25("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_25("Introduction to Building Iron Man", "IBIM", 4);

    school_25.hireLecturer(lecturer_25);
    school_25.hireLecturer(lecturer2_25);
    school_25.addCourse(course_25, lecturer_25);
    cout << course_25.getNameOfTheCourseLecturer() << endl;
    course_25.fireLecturerFromCourse();
    cout << course_25.getNameOfTheCourseLecturer() << endl;

    bool test25 = course_25.assignLecturer(lecturer2_25);
//    test25 -> true (expected)
    if (test25)
//        getNameOfTheCourseLecturer() returns name of the lecturer2
        cout << course_25.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The assignLecturer method performs its
//    function and assigns a lecturer to a course offered by the
//    ###############################################################

//    ###############################################################
//    Case 26: Assigning a Lecturer to the Course
//    (the lecturer is not employed by school)
//    ---------------------------------------------------------------
    cout << "Test26:\n" << endl;

//    create new School object
    School school_26("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_26("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_26("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_26("Introduction to Building Iron Man", "IBIM", 4);

    school_26.hireLecturer(lecturer_26);
    school_26.addCourse(course_26, lecturer_26);
    course_26.fireLecturerFromCourse();

    bool test26 = course_26.assignLecturer(lecturer2_26);
//    test26 -> false (expected)
    if (!test26)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_26.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The assignLecturer method cannot fulfill its
//    function because the lecturer to be assigned does not work at
//    the school. It returns false and does not print anything to
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 27: Assigning a Lecturer to the Course
//    (maximum course capacity)
//    ---------------------------------------------------------------
    cout << "Test27:\n" << endl;

//    create new School object
    School school_27("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_27("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_27("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_27("Introduction to Building Iron Man", "IBIM", 4);
    Course course2_27("Advanced Topics in Building Iron Man", "ABIM", 4);
    Course course3_27("Introduction to Arc Reactor", "IAC", 3);
    Course course4_27("Introduction to Propulsion", "IPRO", 3);

    school_27.hireLecturer(lecturer_27);
    school_27.hireLecturer(lecturer2_27);
    school_27.addCourse(course_27, lecturer2_27);
    cout << course_27.getNameOfTheCourseLecturer() << endl;
    course_27.fireLecturerFromCourse();
    cout << course_27.getNameOfTheCourseLecturer() << endl;
    school_27.addCourse(course2_27, lecturer_27);
    school_27.addCourse(course3_27, lecturer_27);
    school_27.addCourse(course4_27, lecturer_27);

    bool test27 = course_27.assignLecturer(lecturer_27);
//    test27 -> false (expected)
    if (!test27)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_27.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The assignLecturer method cannot fulfill
//    its function because the lecturer to be assigned gives
//    the maximum number of lectures. It returns false and does
//    not print anything to
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 28: Assigning a Lecturer to the Course
//    (course is not active)
//    ---------------------------------------------------------------
    cout << "Test28:\n" << endl;

//    create new School object
    School school_28("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_28("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_28("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_28("Introduction to Building Iron Man", "IBIM", 4);

    school_28.hireLecturer(lecturer_28);
    school_28.hireLecturer(lecturer2_28);
    school_28.addCourse(course_28, lecturer_28);
    school_28.removeCourse(course_28);

    bool test28 = course_28.assignLecturer(lecturer2_28);
//    test28 -> false (expected)
    if (!test28)
//        getNameOfTheCourseLecturer() returns empty string
        cout << course_28.getNameOfTheCourseLecturer() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The assignLecturer method cannot function
//    because the course is not offered by the school, meaning it is
//    not active. It returns false and does not print anything to
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 29: Quitting Teaching the Course
//    ---------------------------------------------------------------
    cout << "Test29: Quitting Teaching the Course\n" << endl;

//    create new School object
    School school_29("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_29("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_29("Introduction to Building Iron Man", "IBIM", 4);

    school_29.hireLecturer(lecturer_29);
    school_29.addCourse(course_29, lecturer_29);
    lecturer_29.printCourses();

    bool test29 = lecturer_29.quitTeachingTheCourse(course_29);
//    test29 -> true (expected)
    if (test29)
//        printCourses print course(s) given by lecturer
        lecturer_29.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The quitTeachingTheCourse method executes its
//    function and terminates the Lecturer's task in the course. It
//    functions the same as the fireLecturerFromCourse function of
//    the Course class. It returns true and does not print anything
//    to the screen.
//    ###############################################################

//    ###############################################################
//    Case 30: Quitting Teaching the Course
//    (the lecturer is not employed by school)
//    ---------------------------------------------------------------
    cout << "Test30:\n" << endl;

//    create new School object
    School school_30("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_30("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_30("Introduction to Building Iron Man", "IBIM", 4);

    school_30.hireLecturer(lecturer_30);
    school_30.addCourse(course_30, lecturer_30);
    lecturer_30.printCourses();
    school_30.fireLecturer(lecturer_30);
    lecturer_30.printCourses();

    bool test30 = lecturer_30.quitTeachingTheCourse(course_30);
//    test30 -> false (expected)
    if (!test30)
//        printCourses print course(s) given by lecturer
        lecturer_30.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The quitTeachingTheCourse method cannot
//    perform its function because the lecturer is not actively
//    working at the school. It returns false and does not print
//    anything to the screen because, in this scenario, the course
//    instructor has left the school.
//    ###############################################################

//    ###############################################################
//    Case 31: Quitting Teaching the Course
//    (the lecturer of the course is not (this) lecturer)
//    ---------------------------------------------------------------
    cout << "Test31:\n" << endl;

//    create new School object
    School school_31("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_31("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Lecturer lecturer2_31("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
    Course course_31("Introduction to Building Iron Man", "IBIM", 4);

    school_31.hireLecturer(lecturer_31);
    school_31.hireLecturer(lecturer2_31);
    school_31.addCourse(course_31, lecturer_31);

    bool test31 = lecturer2_31.quitTeachingTheCourse(course_31);
//    test31 -> false (expected)
    if (!test31)
//        printCourses print course(s) given by lecturer
        lecturer_31.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The quitTeachingTheCourse method cannot
//    function because lecturer2 is not the lecturer of the course.
//    It returns false and prints the course
//    ("Introduction to Building Iron Man") given by the lecturer
//    ("Tony Stark") on the screen.
//    ###############################################################

//    ###############################################################
//    Case 32: Quitting Teaching the Course
//    (course is not active)
//    ---------------------------------------------------------------
    cout << "Test32:\n" << endl;

//    create new School object
    School school_32("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_32("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_32("Introduction to Building Iron Man", "IBIM", 4);

    school_32.hireLecturer(lecturer_32);
    school_32.addCourse(course_32, lecturer_32);
    lecturer_32.printCourses();
    school_32.removeCourse(course_32);

    bool test32 = lecturer_32.quitTeachingTheCourse(course_32);
//    test32 -> false (expected)
    if (!test32)
//        printCourses print course(s) given by lecturer
        lecturer_32.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The quitTeachingTheCourse method cannot
//    fulfill its function because the course is no longer offered
//    by the school, so the lecturer cannot be the lecturer of the
//    inactive course. It returns false and in this scenario,
//    nothing is printed because the lecturer does not offer another
//    course.
//    ###############################################################

//    ###############################################################
//    Case 33: Becoming Lecturer of the Course
//    ---------------------------------------------------------------
    cout << "Test33: Becoming Lecturer of the Course\n" << endl;

//    create new School object
    School school_33("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_33("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_33("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_33("Introduction to Building Iron Man", "IBIM", 4);

    school_33.hireLecturer(lecturer_33);
    school_33.hireLecturer(lecturer2_33);
    school_33.addCourse(course_33, lecturer_33);
    lecturer_33.printCourses();
    lecturer_33.quitTeachingTheCourse(course_33);
    lecturer_33.printCourses();

    bool test33 = lecturer2_33.becomeLecturerOfCourse(course_33);
//    test33 -> true (expected)
    if (test33)
//        printCourses print course(s) given by lecturer2
        lecturer2_33.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The becomeLecturerOfCourse method performs
//    its function and lecturer2 becomes the lecturer of the course
//    that does not have a lecturer. It returns true and this course
//    started by lecturer2 is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 34: Becoming Lecturer of the Course
//    (the lecturer is not employed by school)
//    ---------------------------------------------------------------
    cout << "Test34:\n" << endl;

//    create new School object
    School school_34("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_34("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_34("Tolga Ozuygur", "Research Assistant", "Electronics");
//    create new Course object
    Course course_34("Introduction to Building Iron Man", "IBIM", 4);

    school_34.hireLecturer(lecturer_34);
    school_34.addCourse(course_34, lecturer_34);
    lecturer_34.printCourses();
    lecturer_34.quitTeachingTheCourse(course_34);
    lecturer_34.printCourses();

    bool test34 = lecturer2_34.becomeLecturerOfCourse(course_34);
//    test34 -> false (expected)
    if (!test34)
//        printCourses print course(s) given by lecturer2
        lecturer2_34.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The becomeLecturerOfCourse method is executed
//    and lecturer2 is not currently employed at the school (he may
//    have never been hired or may have been fired). It returns
//    false and in this scenario nothing is printed to the screen
//    because lecturer2 cannot work at the school.
//    ###############################################################

//    ###############################################################
//    Case 35: Becoming Lecturer of the Course
//    (maximum course capacity)
//    ---------------------------------------------------------------
    cout << "Test35:\n" << endl;

//    create new School object
    School school_35("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_35("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_35("Tolga Ozuygur", "Research Assistant", "Electronics");
//    create new Course object
    Course course_35("Introduction to Building Iron Man", "IBIM", 4);
    Course course2_35("Advanced Topics in Building Iron Man", "ABIM", 4);
    Course course3_35("Introduction to Arc Reactor", "IAC", 3);
    Course course4_35("Introduction to Propulsion", "IPRO", 3);

    school_35.hireLecturer(lecturer_35);
    school_35.hireLecturer(lecturer2_35);
    school_35.addCourse(course_35, lecturer_35);
    school_35.addCourse(course2_35, lecturer_35);
    school_35.addCourse(course3_35, lecturer_35);
    lecturer_35.printCourses();
    school_35.addCourse(course4_35, lecturer2_35);
    lecturer2_35.printCourses();
    lecturer2_35.quitTeachingTheCourse(course4_35);
    lecturer2_35.printCourses();

    bool test35 = lecturer_35.becomeLecturerOfCourse(course4_35);
//    test35 -> false (expected)
    if (!test35)
//        printCourses print course(s) given by lecturer
        lecturer_35.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The becomeLecturerOfCourse method cannot
//    function because the lecturer has reached the maximum number
//    of courses he can teach. It returns false and course, course2
//    and course3 are printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 36: Becoming Lecturer of the Course
//    (the course may already have a lecturer)
//    ---------------------------------------------------------------
    cout << "Test36:\n" << endl;

//    create new School object
    School school_36("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_36("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_36("Tolga Ozuygur", "Research Assistant", "Electronics");
//    create new Course object
    Course course_36("Introduction to Building Iron Man", "IBIM", 4);

    school_36.hireLecturer(lecturer_36);
    school_36.hireLecturer(lecturer2_36);
    school_36.addCourse(course_36, lecturer_36);
    lecturer_36.printCourses();

    bool test36 = lecturer2_36.becomeLecturerOfCourse(course_36);
//    test36 -> false (expected)
    if (!test36)
//        printCourses print course(s) given by lecturer2
        lecturer2_36.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The becomeLecturerOfCourse method cannot
//    perform because the course already has a lecturer.
//    It returns false and nothing is printed to the screen in
//    this scenario.
//    ###############################################################

//    ###############################################################
//    Case 37: Becoming Lecturer of the Course
//    (course is not active)
//    ---------------------------------------------------------------
    cout << "Test37:\n" << endl;

//    create new School object
    School school_37("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_37("Tony Stark", "Docent", "Electronics");
    Lecturer lecturer2_37("Tolga Ozuygur", "Research Assistant",
                       "Electronics");
//    create new Course object
    Course course_37("Introduction to Building Iron Man", "IBIM", 4);

    school_37.hireLecturer(lecturer_37);
    school_37.hireLecturer(lecturer2_37);
    school_37.addCourse(course_37, lecturer_37);
    lecturer_37.printCourses();
    school_37.removeCourse(course_37);
    lecturer_37.printCourses();

    bool test37 = lecturer2_37.becomeLecturerOfCourse(course_37);
//    test37 -> false (expected)
    if (!test37)
//        printCourses print course(s) given by lecturer2
        lecturer2_37.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The becomeLecturerOfCourse method cannot
//    function because the course is no longer offered by the
//    school (it may never have been offered). It returns false and
//    nothing is printed to the screen in this scenario.
//    ###############################################################

//    ###############################################################
//    Case 38: Adding a Student to the Course by the School
//    ---------------------------------------------------------------
    cout << "Test38: Adding a Student to the Course by the School\n" << endl;

//    create new School object
    School school_38("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_38("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_38("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_38("Peter Parker", "040237508");

    school_38.hireLecturer(lecturer_38);
    school_38.registerStudent(student_38);
    school_38.addCourse(course_38, lecturer_38);
    student_38.printCourses();

    bool test38 = school_38.addStudentToCourse(student_38, course_38);
//    test38 -> true (expected)
    if (test38)
//        printCourses print course(s) taken by the student
        student_38.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addStudentToCourse method enrolls the
//    student in the course. It establishes the connections between
//    the students and the student becomes a student of that course.
//    Returns true and the course taken by the student is printed on
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 39: Adding a Student to the Course by the School
//    (the student is not registered)
//    ---------------------------------------------------------------
    cout << "Test39:\n" << endl;

//    create new School object
    School school_39("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_39("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_39("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_39("Peter Parker", "040237508");

    school_39.hireLecturer(lecturer_39);
    school_39.addCourse(course_39, lecturer_39);

    bool test39 = school_39.addStudentToCourse(student_39, course_39);
//    test39 -> false (expected)
    if (!test39)
//        printCourses print course(s) taken by the student
        student_39.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: addStudentToCourse cannot perform its
//    function because the student to be enrolled in the course
//    is not registered at the school. It returns false and the
//    course cannot be printed to the screen in this scenario.
//    ###############################################################

//    ###############################################################
//    Case 40: Adding a Student to the Course by the School
//    (the course at full capacity)
//    ---------------------------------------------------------------
    cout << "Test40:\n" << endl;

//    create new School object
    School school_40("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_40("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_40("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_40("Peter Parker", "040237550");
    Student student1_40("Emily Johnson", "040237501");
    Student student2_40("Michael Brown", "040237502");
    Student student3_40("Emma Williams", "040237503");
    Student student4_40("Daniel Jones", "040237504");
    Student student5_40("Sophia Davis", "040237505");
    Student student6_40("Matthew Wilson", "040237506");
    Student student7_40("Olivia Taylor", "040237507");
    Student student8_40("James Martinez", "040237508");
    Student student9_40("Isabella Lopez", "040237509");
    Student student10_40("William Anderson", "040237510");

    school_40.hireLecturer(lecturer_40);
    school_40.registerStudent(student_40);
    school_40.registerStudent(student1_40);
    school_40.registerStudent(student2_40);
    school_40.registerStudent(student3_40);
    school_40.registerStudent(student4_40);
    school_40.registerStudent(student5_40);
    school_40.registerStudent(student6_40);
    school_40.registerStudent(student7_40);
    school_40.registerStudent(student8_40);
    school_40.registerStudent(student9_40);
    school_40.registerStudent(student10_40);
    school_40.addCourse(course_40, lecturer_40);
    school_40.addStudentToCourse(student1_40, course_40);
    school_40.addStudentToCourse(student2_40, course_40);
    school_40.addStudentToCourse(student3_40, course_40);
    school_40.addStudentToCourse(student4_40, course_40);
    school_40.addStudentToCourse(student5_40, course_40);
    school_40.addStudentToCourse(student6_40, course_40);
    school_40.addStudentToCourse(student7_40, course_40);
    school_40.addStudentToCourse(student8_40, course_40);
    school_40.addStudentToCourse(student9_40, course_40);
    school_40.addStudentToCourse(student10_40, course_40);
    course_40.printStudents();

    bool test40 = school_40.addStudentToCourse(student_40, course_40);
//    test40 -> false (expected)
    if (!test40)
//        printCourses print course(s) taken by the student
        student_40.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: addStudentToCourse cannot function because
//    10 students are currently enrolled in the course, indicating
//    that the course has reached maximum capacity. As a result,
//    student("Peter Parker") cannot register for the course. It
//    returns false and the course cannot be printed to the screen
//    in this scenario.
//    ###############################################################

//    ###############################################################
//    Case 41: Adding a Student to the Course by the School
//    (the student is already enrolled the course)
//    ---------------------------------------------------------------
    cout << "Test41:\n" << endl;

//    create new School object
    School school_41("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_41("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_41("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_41("Peter Parker", "040237508");

    school_41.hireLecturer(lecturer_41);
    school_41.registerStudent(student_41);
    school_41.addCourse(course_41, lecturer_41);
    school_41.addStudentToCourse(student_41, course_41);
    student_41.printCourses();

    bool test41 = school_41.addStudentToCourse(student_41, course_41);
//    test41 -> false (expected)
    if (!test41)
//        printCourses print course(s) taken by the student
        student_41.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: addStudentToCourse cannot perform its
//    function because the student to be enrolled in the course
//    is already registered in the course. It returns false and
//    in this scenario, the course taken by the student is printed
//    on the screen.
//    ###############################################################

//    ###############################################################
//    Case 42: Adding a Student to the Course by the School
//    (course is not active))
//    ---------------------------------------------------------------
    cout << "Test42:\n" << endl;

//    create new School object
    School school_42("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_42("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_42("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_42("Peter Parker", "040237508");

    school_42.hireLecturer(lecturer_42);
    school_42.registerStudent(student_42);
    school_42.addCourse(course_42, lecturer_42);
    school_42.removeCourse(course_42);
    student_42.printCourses();

    bool test42 = school_42.addStudentToCourse(student_42, course_42);
//    test42 -> false (expected)
    if (!test42)
//        printCourses print course(s) taken by the student
        student_42.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: addStudentToCourse cannot perform its
//    function because the relevant course may not have been
//    opened by the school, may have been closed, or may not
//    have a Lecturer. It returns false and nothing is printed to
//    this screen.
//    ###############################################################

//    ###############################################################
//    Case 43: Removing the Student from the Course by the School
//    ---------------------------------------------------------------
    cout << "Test43: Removing the Student from the Course by the School\n" << endl;

//    create new School object
    School school_43("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_43("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_43("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_43("Peter Parker", "040237508");

    school_43.hireLecturer(lecturer_43);
    school_43.registerStudent(student_43);
    school_43.addCourse(course_43, lecturer_43);
    school_43.addStudentToCourse(student_43, course_43);
    student_43.printCourses();

    bool test43 = school_43.removeStudentFromCourse(student_43, course_43);
//    test43 -> true (expected)
    if (test43)
//        printCourses print course(s) taken by the student
        student_43.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeStudentFromCourse method performs
//    its function and deletes the student who has previously
//    registered for the course from the course. It returns true
//    and no courses are printed because the student is no longer
//    enrolled in any courses in this scenario.
//    ###############################################################

//    ###############################################################
//    Case 44: Removing the Student from the Course by the School
//    (the student is not registered)
//    ---------------------------------------------------------------
    cout << "Test44:\n" << endl;

//    create new School object
    School school_44("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_44("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_44("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_44("Peter Parker", "040237508");

    school_44.hireLecturer(lecturer_44);
    school_44.registerStudent(student_44);
    school_44.addCourse(course_44, lecturer_44);
    school_44.addStudentToCourse(student_44, course_44);
    student_44.printCourses();
    course_44.printStudents();
    school_44.unregisterStudent(student_44);
    student_44.printCourses();

    bool test44 = school_44.removeStudentFromCourse(student_44, course_44);
//    test44 -> false (expected)
    if (!test44)
//        printCourses print course(s) taken by the student
        student_44.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: It cannot perform the removeStudentFromCourse
//    function because the student whose registration is requested
//    to be deleted from the course is not currently registered at
//    the school, or may have never been registered. It returns
//    False and no courses are printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 45: Removing the Student from the Course by the School
//    (the student is already unEnrolled the course)
//    ---------------------------------------------------------------
    cout << "Test45:\n" << endl;

//    create new School object
    School school_45("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_45("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_45("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_45("Peter Parker", "040237508");

    school_45.hireLecturer(lecturer_45);
    school_45.registerStudent(student_45);
    school_45.addCourse(course_45, lecturer_45);
    school_45.addStudentToCourse(student_45, course_45);
    student_45.printCourses();
    school_45.removeStudentFromCourse(student_45, course_45);
    student_45.printCourses();

    bool test45 = school_45.removeStudentFromCourse(student_45, course_45);
//    test45 -> false (expected)
    if (!test45)
//        printCourses print course(s) taken by the student
        student_45.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: It cannot perform the removeStudentFromCourse
//    function because the student whose enrollment is requested to
//    be deleted from the course has already been enEnrolled from
//    the course or may not have been enrolled in the course at all.
//    It returns False and no courses are printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 46: Removing the Student from the Course by the School
//    (the course is not active)
//    ---------------------------------------------------------------
    cout << "Test46:\n" << endl;

//    create new School object
    School school_46("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_46("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_46("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_46("Peter Parker", "040237508");

    school_46.hireLecturer(lecturer_46);
    school_46.registerStudent(student_46);
    school_46.addCourse(course_46, lecturer_46);
    school_46.addStudentToCourse(student_46, course_46);
    student_46.printCourses();
    school_46.removeCourse(course_46);
    student_46.printCourses();

    bool test46 = school_46.removeStudentFromCourse(student_46, course_46);
//    test46 -> false (expected)
    if (!test46)
//        printCourses print course(s) taken by the student
        student_46.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: t cannot perform the removeStudentFromCourse
//    function because the course for which the student's
//    enrollment is requested has been closed by the school or
//    may not have been opened at all. It returns false and no
//    courses are written to the screen in this scenario.
//    ###############################################################

//    ###############################################################
//    Case 47: Adding a Student to the Course by the Course
//    ---------------------------------------------------------------
    cout << "Test47: Adding a Student to the Course by the Course\n" << endl;

//    create new School object
    School school_47("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_47("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_47("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_47("Peter Parker", "040237508");

    school_47.hireLecturer(lecturer_47);
    school_47.registerStudent(student_47);
    school_47.addCourse(course_47, lecturer_47);
    student_47.printCourses();

    bool test47 = course_47.addStudent(student_47);
//    test47 -> true (expected)
    if (test47)
//        printCourses print course(s) taken by the student
        student_47.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addStudent method performs its function
//    and the student is added to the course. It returns true and
//    the course taken by the student is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 48: Adding a Student to the Course by the Course
//    (the student is not registered)
//    ---------------------------------------------------------------
    cout << "Test48:\n" << endl;

//    create new School object
    School school_48("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_48("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_48("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_48("Peter Parker", "040237508");

    school_48.hireLecturer(lecturer_48);
    school_48.addCourse(course_48, lecturer_48);
    student_48.printCourses();

    bool test48 = course_48.addStudent(student_48);
//    test48 -> false (expected)
    if (!test48)
//        printCourses print course(s) taken by the student
        student_48.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addStudent method cannot fulfill its
//    function because the student to be added to the course is
//    not registered to the school. It returns false and nothing
//    is printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 49: Adding a Student to the Course by the Course (the course at full capacity)
//    ---------------------------------------------------------------
    cout << "Test49:\n" << endl;

//    create new School object
    School school_49("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_49("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_49("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_49("Peter Parker", "040237550");
    Student student1_49("Emily Johnson", "040237501");
    Student student2_49("Michael Brown", "040237502");
    Student student3_49("Emma Williams", "040237503");
    Student student4_49("Daniel Jones", "040237504");
    Student student5_49("Sophia Davis", "040237505");
    Student student6_49("Matthew Wilson", "040237506");
    Student student7_49("Olivia Taylor", "040237507");
    Student student8_49("James Martinez", "040237508");
    Student student9_49("Isabella Lopez", "040237509");
    Student student10_49("William Anderson", "040237510");

    school_49.hireLecturer(lecturer_49);
    school_49.registerStudent(student_49);
    school_49.registerStudent(student1_49);
    school_49.registerStudent(student2_49);
    school_49.registerStudent(student3_49);
    school_49.registerStudent(student4_49);
    school_49.registerStudent(student5_49);
    school_49.registerStudent(student6_49);
    school_49.registerStudent(student7_49);
    school_49.registerStudent(student8_49);
    school_49.registerStudent(student9_49);
    school_49.registerStudent(student10_49);
    school_49.addCourse(course_49, lecturer_49);
    course_49.addStudent(student1_49);
    course_49.addStudent(student2_49);
    course_49.addStudent(student3_49);
    course_49.addStudent(student4_49);
    course_49.addStudent(student5_49);
    course_49.addStudent(student6_49);
    course_49.addStudent(student7_49);
    course_49.addStudent(student8_49);
    course_49.addStudent(student9_49);
    course_49.addStudent(student10_49);
    course_49.printStudents();

    bool test49 = course_49.addStudent(student_49);
//    test49 -> false (expected)
    if (!test49)
//        printCourses print course(s) taken by the student
        student_49.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addStudent method cannot function
//    because the course has reached maximum capacity and a new
//    student cannot enroll in the course. It returns false and
//    nothing is printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 50: Adding a Student to the Course by the Course
//    (the student is already enrolled the course)
//    ---------------------------------------------------------------
    cout << "Test50:\n" << endl;

//    create new School object
    School school_50("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_50("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_50("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_50("Peter Parker", "040237508");

    school_50.hireLecturer(lecturer_50);
    school_50.registerStudent(student_50);
    school_50.addCourse(course_50, lecturer_50);
    course_50.addStudent(student_50);
    student_50.printCourses();

    bool test50 = course_50.addStudent(student_50);
//    test50 -> false (expected)
    if (!test50)
//        printCourses print course(s) taken by the student
        student_50.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addStudent method cannot perform its
//    function because the student to be registered is already
//    registered in the course. It returns false and the course
//    it has already taken is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 51: Adding a Student to the Course by the Course
//    (course is not active)
//    ---------------------------------------------------------------
    cout << "Test51:\n" << endl;

//    create new School object
    School school_51("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_51("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_51("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_51("Peter Parker", "040237508");

    school_51.hireLecturer(lecturer_51);
    school_51.registerStudent(student_51);
    school_51.addCourse(course_51, lecturer_51);
    student_51.printCourses();
    course_51.addStudent(student_51);
    student_51.printCourses();
    school_51.removeCourse(course_51);
    student_51.printCourses();

    bool test51 = course_51.addStudent(student_51);
//    test51 -> false (expected)
    if (!test51)
//        printCourses print course(s) taken by the student
        student_51.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The addStudent method cannot function
//    because the course has been closed by the school (maybe
//    it was never opened). It returns false and nothing is printed
//    to the screen.
//    ###############################################################

//    ###############################################################
//    Case 52: Removing the Student from the Course by the Course
//    ---------------------------------------------------------------
    cout << "Test52: Removing the Student from the Course by the Course\n" << endl;

//    create new School object
    School school_52("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_52("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_52("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_52("Peter Parker", "040237508");

    school_52.hireLecturer(lecturer_52);
    school_52.registerStudent(student_52);
    school_52.addCourse(course_52, lecturer_52);
    course_52.addStudent(student_52);
    student_52.printCourses();

    bool test52 = course_52.removeStudent(student_52);
//    test52 -> true (expected)
    if (test52)
//        printCourses print course(s) taken by the student
        student_52.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeStudent method performs its
//    function and removes the student previously added to the
//    course from the course. It returns true and nothing is
//    printed because the student has been removed from the course.
//    ###############################################################

//    ###############################################################
//    Case 53: Removing the Student from the Course by the Course
//    (the student is not registered)
//    ---------------------------------------------------------------
    cout << "Test53:\n" << endl;

//    create new School object
    School school_53("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_53("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_53("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_53("Peter Parker", "040237508");

    school_53.hireLecturer(lecturer_53);
    school_53.registerStudent(student_53);
    school_53.addCourse(course_53, lecturer_53);
    student_53.printCourses();
    course_53.addStudent(student_53);
    student_53.printCourses();
    school_53.unregisterStudent(student_53);
    student_53.printCourses();

    bool test53 = course_53.removeStudent(student_53);
//    test53 -> false (expected)
    if (!test53)
//        printCourses print course(s) taken by the student
        student_53.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeStudent method cannot function
//    because the student to be removed from the course is not
//    already enrolled in the school (or has been de-enrolled),
//    as a result, the student is no longer an active student.
//    It returns false and nothing is printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 54: Removing the Student from the Course by the Course
//    (the student is already unEnrolled the course)
//    ---------------------------------------------------------------
    cout << "Test54:\n" << endl;

//    create new School object
    School school_54("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_54("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_54("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_54("Peter Parker", "040237508");

    school_54.hireLecturer(lecturer_54);
    school_54.registerStudent(student_54);
    school_54.addCourse(course_54, lecturer_54);
    student_54.printCourses();
    course_54.addStudent(student_54);
    student_54.printCourses();
    course_54.removeStudent(student_54);
    student_54.printCourses();

    bool test54 = course_54.removeStudent(student_54);
//    test54 -> false (expected)
    if (!test54)
//        printCourses print course(s) taken by the student
        student_54.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeStudent method cannot fulfill its
//    function because the student to be removed from the course
//    has already left the course or has been removed (via methods
//    of other objects). It returns false and nothing is printed to
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 55: Removing the Student from the Course by the Course
//    (the course is not active)
//    ---------------------------------------------------------------
    cout << "Test55:\n" << endl;

//    create new School object
    School school_55("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_55("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_55("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_55("Peter Parker", "040237508");

    school_55.hireLecturer(lecturer_55);
    school_55.registerStudent(student_55);
    school_55.addCourse(course_55, lecturer_55);
    student_55.printCourses();
    course_55.addStudent(student_55);
    student_55.printCourses();
    school_55.removeCourse(course_55);
    student_55.printCourses();

    bool test55 = course_55.removeStudent(student_55);
//    test55 -> false (expected)
    if (!test55)
//        printCourses print course(s) taken by the student
        student_55.printCourses();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The removeStudent method cannot perform its
//    function because the course has been removed by the school,
//    that is, it is not active (it may not have been opened by the
//    school at all). It returns false and nothing is printed to
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 56: Changing Number of Credits the Course
//    ---------------------------------------------------------------
    cout << "Test56: Changing Number of Credits the Course\n" << endl;

//    create new Course object
    Course course_56("Introduction to Building Iron Man", "IBIM", 4);
    cout << course_56.getNumberOfCredits() << endl;

    bool test56 = course_56.changeNumberOfCredits(3);
//    test56 -> true (expected)
    if (test56)
//        getNumberOfCredits() returns number of credits of the
//        (this) course
        cout << course_56.getNumberOfCredits() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The changeNumberOfCredits method performs
//    its function and updates the number of credits with the number
//    entered as an argument. Since the number is within the
//    appropriate range, the transaction has been completed
//    successfully. It returns true and the number of credits for
//    the course is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 57: Changing Number of Credits the Course
//    (invalid input)
//    ---------------------------------------------------------------
    cout << "Test57:\n" << endl;

//    create new Course object
    Course course_57("Introduction to Building Iron Man", "IBIM", 4);

    cout << course_57.getNumberOfCredits() << endl;

    bool test57 = course_57.changeNumberOfCredits(-3);
//    test57 -> false (expected)
    if (!test57)
//        getNumberOfCredits() returns number of credits of the
//        (this) course
        cout << course_57.getNumberOfCredits() << endl;

    cout << "--------------------------------------------" << endl;
//    Expected Result: The changeNumberOfCredits method cannot
//    function because a suitable number of credits has not been
//    entered (-3), and it would not have been able to do so without
//    the appropriate range (it could be between 1 and 4). It
//    returns false and the old (unchanged) credit number of the
//    course is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 58: Registering to the School by Student Object
//    ---------------------------------------------------------------
    cout << "Test58: Registering to the School by Student Object\n" << endl;

//    create new School object
    School school_58("Warsaw University of Technology");
//    create new Student object
    Student student_58("Peter Parker", "040237508");

    school_58.printStudents();

    bool test58 = student_58.registerToSchool(school_58);
//    test58 -> true (expected)
    if (test58)
//        printStudents print student(s) registered in school
        school_58.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The registerToSchool method performs its
//    function and the student is registered to the school entered
//    as an argument. It functions the same as the registerStudent
//    method of the School class. The method returns true and the
//    registered student is printed on the screen.
//    ###############################################################


//    ###############################################################
//    Case 59: Registering to the School by Student Object
//    (currently registered)
//    ---------------------------------------------------------------
    cout << "Test59:\n" << endl;

//    create new School object
    School school_59("Warsaw University of Technology");
//    create new Student object
    Student student_59("Peter Parker", "040237508");

    student_59.registerToSchool(school_59);
    school_59.printStudents();

    bool test59 = student_59.registerToSchool(school_59);
//    test59 -> false (expected)
    if (!test59)
//        printStudents print student(s) registered in school
        school_59.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The registerToSchool method cannot perform
//    its function because the student is already enrolled in the
//    school. The method returns false and the student who is
//    already enrolled in the school is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 60: Registering to the School by Student Object
//    (there is a student with same student number)
//    ---------------------------------------------------------------
    cout << "Test60:\n" << endl;

//    create new School object
    School school_60("Warsaw University of Technology");
//    create new Student object
    Student student_60("Peter Parker", "040237508");
    Student student2_60("Jack Sparrow", "040237508");

    school_60.printStudents();
    student_60.registerToSchool(school_60);
    school_60.printStudents();

    bool test60 = student2_60.registerToSchool(school_60);
//    test60 -> false (expected)
    if (!test60)
//        printStudents print student(s) registered in school
        school_60.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The registerToSchool method cannot fulfill
//    its function because another student with the same number as
//    the student who wants to register to the school is registered
//    to the school. As a result, he cannot be enrolled in school.
//    The method returns false and the student who is already
//    enrolled in the school is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 61: Unregistering from the School by Student Object
//    ---------------------------------------------------------------
    cout << "Test61: Unregistering from the School by Student Object\n" << endl;

//    create new School object
    School school_61("Warsaw University of Technology");
//    create new Student object
    Student student_61("Peter Parker", "040237508");

    student_61.registerToSchool(school_61);
    school_61.printStudents();

    bool test61 = student_61.unregisterFromSchool();
//    test61 -> true (expected)
    if (test61)
//        printStudents print student(s) registered in school
        school_61.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unregisterFromSchool method performs its
//    function and deletes the registered student's school record.
//    The function returns true because it fulfills its main task,
//    but no student is printed on the screen because the registered
//    student's record has been deleted.
//    ###############################################################

//    ###############################################################
//    Case 62: Unregistering from the School by Student Object
//    (currently unregistered)
//    ---------------------------------------------------------------
    cout << "Test62:\n" << endl;

//    create new School object
    School school_62("Warsaw University of Technology");
//    create new Student object
    Student student_62("Peter Parker", "040237508");

    student_62.registerToSchool(school_62);
    school_62.printStudents();
    student_62.unregisterFromSchool();
    school_62.printStudents();

    bool test62 = student_62.unregisterFromSchool();
//    test62 -> false (expected)
    if (!test62)
//        printStudents print student(s) registered in school
        school_62.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unregisterFromSchool method cannot
//    function because the student's registration has already been
//    deleted (or the student may not have been enrolled at all).
//    It returns false and no students are printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 63: Enrolling to the Course by Student Object
//    ---------------------------------------------------------------
    cout << "Test63: Enrolling to the Course by Student Object\n" << endl;

//    create new School object
    School school_63("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_63("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_63("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_63("Peter Parker", "040237508");

    school_63.hireLecturer(lecturer_63);
    school_63.registerStudent(student_63);
    school_63.addCourse(course_63, lecturer_63);
    course_63.printStudents();

    bool test63 = student_63.enrollCourse(course_63);
//    test63 -> true (expected)
    if (test63)
//        printStudents() print student(s) enrolled in course.
        course_63.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The enrollCourse method performs its function
//    and the student enrolls in the course (it performs the same
//    function as the addStudentToCourse() method of the School
//    class or the addStudent() method of the Course class.). It
//    returns true and the student registered for the course is
//    printed.
//    ###############################################################

//    ###############################################################
//    Case 64: Enrolling to the Course by Student Object
//    (the student is not registered in school)
//    ---------------------------------------------------------------
    cout << "Test64:\n" << endl;

//    create new School object
    School school_64("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_64("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_64("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_64("Peter Parker", "040237508");

    school_64.hireLecturer(lecturer_64);
    school_64.addCourse(course_64, lecturer_64);

    bool test64 = student_64.enrollCourse(course_64);
//    test64 -> false (expected)
    if (!test64)
//        printStudents() print student(s) enrolled in course.
        course_64.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The enrollCourse method cannot function
//    because the student to be enrolled in the course is not
//    registered at the school. Returns false, no students are
//    printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 65: Enrolling to the Course by Student Object
//    (the student is already enrolled the Course)
//    ---------------------------------------------------------------
    cout << "Test65:\n" << endl;

//    create new School object
    School school_65("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_65("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_65("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_65("Peter Parker", "040237508");

    school_65.hireLecturer(lecturer_65);
    school_65.registerStudent(student_65);
    school_65.addCourse(course_65, lecturer_65);
    student_65.enrollCourse(course_65);
    student_65.printCourses();

    bool test65 = student_65.enrollCourse(course_65);
    student_65.printCourses();
//    test64 -> false (expected)
    if (!test65)
//        printStudents() print student(s) enrolled in course.
        course_65.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The enrollCourse method cannot function
//    because the student to be enrolled in the course is already
//    registered in the course. Returns false, the student who is
//    already enrolled in the course is printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 66: Enrolling to the Course by Student Object
//    (the course at full capacity)
//    ---------------------------------------------------------------
    cout << "Test66:\n" << endl;

//    create new School object
    School school_66("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_66("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_66("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_66("Peter Parker", "040237550");
    Student student1_66("Emily Johnson", "040237501");
    Student student2_66("Michael Brown", "040237502");
    Student student3_66("Emma Williams", "040237503");
    Student student4_66("Daniel Jones", "040237504");
    Student student5_66("Sophia Davis", "040237505");
    Student student6_66("Matthew Wilson", "040237506");
    Student student7_66("Olivia Taylor", "040237507");
    Student student8_66("James Martinez", "040237508");
    Student student9_66("Isabella Lopez", "040237509");
    Student student10_66("William Anderson", "040237510");

    school_66.hireLecturer(lecturer_66);
    school_66.registerStudent(student_66);
    school_66.registerStudent(student1_66);
    school_66.registerStudent(student2_66);
    school_66.registerStudent(student3_66);
    school_66.registerStudent(student4_66);
    school_66.registerStudent(student5_66);
    school_66.registerStudent(student6_66);
    school_66.registerStudent(student7_66);
    school_66.registerStudent(student8_66);
    school_66.registerStudent(student9_66);
    school_66.registerStudent(student10_66);
    school_66.addCourse(course_66, lecturer_66);
    student1_66.enrollCourse(course_66);
    student2_66.enrollCourse(course_66);
    student3_66.enrollCourse(course_66);
    student4_66.enrollCourse(course_66);
    student5_66.enrollCourse(course_66);
    student6_66.enrollCourse(course_66);
    student7_66.enrollCourse(course_66);
    student8_66.enrollCourse(course_66);
    student9_66.enrollCourse(course_66);
    student10_66.enrollCourse(course_66);
    course_66.printStudents();
    student_66.printCourses();

    bool test66 = student_66.enrollCourse(course_66);
//    test66 -> false (expected)
    if (!test66)
//        printStudents() print student(s) enrolled in course.
        course_66.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The enrollCourse method cannot function
//    because the course capacity has reached its maximum (10
//    students) and the student (Peter Parker) could not be
//    registered in this case. Returns false, 10 students
//    registered for the course are printed on the screen.
//    ###############################################################

//    ###############################################################
//    Case 67: Enrolling to the Course by Student Object
//    (the course is not active)
//    ---------------------------------------------------------------
    cout << "Test67:\n" << endl;

//    create new School object
    School school_67("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_67("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_67("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_67("Peter Parker", "040237508");

    school_67.hireLecturer(lecturer_67);
    school_67.registerStudent(student_67);
    school_67.addCourse(course_67, lecturer_67);
    student_67.enrollCourse(course_67);
    student_67.printCourses();
    course_67.printStudents();
    school_67.removeCourse(course_67);
    student_67.printCourses();
    course_67.printStudents();

    bool test67 = student_67.enrollCourse(course_67);
//    test67 -> false (expected)
    if (!test67)
//        printStudents() print student(s) enrolled in course.
        course_67.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The enrollCourse method cannot function;
//    the course to be registered for has been removed by the
//    school (it may not have been opened at all), meaning it is
//    not active. Returns false, no students are printed on the
//    screen.
//    ###############################################################

//    ###############################################################
//    Case 68: UnEnrolling to the Course by Student Object
//    ---------------------------------------------------------------
    cout << "Test68: UnEnrolling to the Course by Student Object\n" << endl;

//    create new School object
    School school_68("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_68("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_68("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_68("Peter Parker", "040237508");

    school_68.hireLecturer(lecturer_68);
    school_68.registerStudent(student_68);
    school_68.addCourse(course_68, lecturer_68);
    student_68.enrollCourse(course_68);
    course_68.printStudents();
    student_68.printCourses();

    bool test68 = student_68.unEnrollCourse(course_68);
//    test68 -> true (expected)
    if (test68)
//        printStudents() print student(s) enrolled in course.
        course_68.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unEnrollCourse method performs its
//    function and deletes the student's registration from the
//    course in which he was previously enrolled (it performs
//    the same function as the removeStudentFromCourse() method
//    of the School class and the removeStudent() method of the
//    Course class). It returns true and the student is not
//    displayed on the screen because the student has been
//    unregistered from the course.
//    ###############################################################

//    ###############################################################
//    Case 69: UnEnrolling to the Course by Student Object
//    (the student is not registered in school)
//    ---------------------------------------------------------------
    cout << "Test69:\n" << endl;

//    create new School object
    School school_69("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_69("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_69("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_69("Peter Parker", "040237508");

    school_69.hireLecturer(lecturer_69);
    school_69.registerStudent(student_69);
    school_69.addCourse(course_69, lecturer_69);
    student_69.enrollCourse(course_69);
    course_69.printStudents();
    student_69.printCourses();
    student_69.unregisterFromSchool();
    course_69.printStudents();
    student_69.printCourses();

    bool test69 = student_69.unEnrollCourse(course_69);
//    test69 -> false (expected)
    if (!test69)
//        printStudents() print student(s) enrolled in course.
        course_69.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unEnrollCourse method cannot function
//    because the student who wants to unEnroll from the course is
//    not registered at the school (maybe deleted or never
//    registered). It returns false and no students are printed to
//    the screen.
//    ###############################################################

//    ###############################################################
//    Case 70: UnEnrolling to the Course by Student Object
//    (the student is not already enrolled the Course)
//    ---------------------------------------------------------------
    cout << "Test70:\n" << endl;

//    create new School object
    School school_70("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_70("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_70("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_70("Peter Parker", "040237508");

    school_70.hireLecturer(lecturer_70);
    school_70.registerStudent(student_70);
    school_70.addCourse(course_70, lecturer_70);
    course_70.printStudents();
    student_70.printCourses();

    bool test70 = student_70.unEnrollCourse(course_70);
//    test70 -> false (expected)
    if (!test70)
//        printStudents() print student(s) enrolled in course.
        course_70.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unEnrollCourse method cannot fulfill its
//    function because the student who wants to unEnroll from the
//    course is not already enrolled in the course. It returns
//    false and no students are printed to the screen.
//    ###############################################################

//    ###############################################################
//    Case 71: UnEnrolling to the Course by Student Object
//    (the course is not active)
//    ---------------------------------------------------------------
    cout << "Test71:\n" << endl;

//    create new School object
    School school_71("Warsaw University of Technology");
//    create new Lecturer object
    Lecturer lecturer_71("Tony Stark", "Docent", "Electronics");
//    create new Course object
    Course course_71("Introduction to Building Iron Man", "IBIM", 4);
//    create new Student object
    Student student_71("Peter Parker", "040237508");

    school_71.hireLecturer(lecturer_71);
    school_71.registerStudent(student_71);
    school_71.addCourse(course_71, lecturer_71);
    course_71.printStudents();
    student_71.printCourses();
    student_71.enrollCourse(course_71);
    course_71.printStudents();
    student_71.printCourses();
    school_71.removeCourse(course_71);
    course_71.printStudents();
    student_71.printCourses();

    bool test71 = student_71.unEnrollCourse(course_71);
//    test71 -> true (expected)
    if (!test71)
//        printStudents() print student(s) enrolled in course.
        course_71.printStudents();

    cout << "--------------------------------------------" << endl;
//    Expected Result: The unEnrollCourse method cannot fulfill its
//    function because the relevant course has been removed by the
//    school (it may not have been opened at all), that is, it is
//    not active. It is not possible to enroll or cancel
//    registration for an inactive course. It returns false and no
//    students are printed to the screen.
//    ###############################################################
}
