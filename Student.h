// Student.h

#ifndef STUDENT_H
#define STUDENT_H

// forward declarations
class School;
class Course;


class Student {
//    overloading Stream Insertion Operator (<<)
//    # Function: when it is called, print all details of the Student
    friend std::ostream& operator<<(std::ostream& output, Student& student);
public:
//    Constructor
//    # Parameters
//      - name: name of the Student
//      - studentNumber: student number of the Student
    Student(const std::string &name, const std::string &studentNumber);
//    Destructor
//    # Function
//      -> With dynamic memory management, it frees Course(s) sections that it has reserved (elements
//      of single-linked list).
    ~Student();

//    registerToSchool
//    # Parameters
//      - school: The School object where the student will register
//    # Function
//      -> Registers the Student (this) in School (argument). At this time, the connection between
//      the student and the school is established (this Student is also added to the list of
//      Student(s) registered at the School).
//    # Return
//      - true: If the process of registering the Student in School is successful
//      - false: If the process of registering the Student in School is unsuccessful
//          -> The Student may be currently enrolled in the School
//          -> The student number may be used by another student registered at the school...
    bool registerToSchool(School& school);
//    unregisterFromSchool
//    # Function
//      -> Unregisters the Student (this) from School. At this time, the connection between
//      the student and the school is broken.
//    # Return
//      - true: If the process of unregistering the Student in School is successful
//      - false: If the process of unregistering the Student in School is unsuccessful
//          -> The Student may not be currently enrolled in the School...
    bool unregisterFromSchool();

//    enrollCourse
//    # Parameters
//      - course: Course object in which the Student will enroll
//    # Function
//      -> The Student enroll the Course and becomes one of the Student(s) of the Course. At this
//      time, connections between Student and Course are established (The Course object is added
//      to the list of courses taken by the Student. The Student object is added to the list of
//      students taking the Course.).
//    # Return
//      - true: If the process of enrolling the Student for the Course is successful
//      - false: If the process of enrolling the Student for the Course is unsuccessful
//          -> The Student may not be currently enrolled in the School
//          -> The Student may already be a Student of the Course
//          -> The course may be at capacity
//          -> The Course may not be active (The School may not have added the Course
//          or the Course may not have a Lecturer)...
    bool enrollCourse(Course& course);
//    unEnrollCourse
//    # Parameters
//      - course: Course object in which the Student will unEnroll
//    # Function
//      -> The Student unEnroll the Course, so is removed from the Course. At this
//      time, connections between Student and Course are broken.
//    # Return
//      - true: If the process of unEnrolling the Student for the Course is successful
//      - false: If the process of unEnrolling the Student for the Course is unsuccessful
//          -> The Student may not be currently enrolled in the School
//          -> The Course may not be active
//          -> The Student may not be taking this Course...
    bool unEnrollCourse(Course& course);

    bool addCourseToEnrolledCourseList(Course& course);
    bool removeCourseFromEnrolledCourseList(Course& course);
    bool setRegisteredSchool(School* addressOfSchool);
    bool activateStudentStatus();
    bool deactivateStudentStatus();
//    printCourses
//    # Function
//      -> Prints all Course(s) taken by the Student
    void printCourses() const;

//    Getter functions for private data members
    std::string getName() const;
    std::string getStudentNumber() const;
    int getTotalCreditsOfCoursesTaken();
    bool getCurrentActivityStatus() const;
private:
//    name: Corresponds to the name of the Student (e.g. Rudolf Kalman)
    std::string name;
//    studentNumber: Corresponds to the student number of the Student (e.g. 07800235)
    std::string studentNumber;
//    totalCreditsOfCoursesTaken: Corresponds to the sum of the number of credits of Course(s)
//      taken by the Student.
    int totalCreditsOfCoursesTaken;
//    activeStudent: It is the variable that indicates whether the student is registered in School or not.
//      - true: Student is registered in School.
//      - false: Student is not registered in School.
    bool activeStudent;

//    registeredSchool: Points to the School which student is registered, otherwise it is nullptr.
    School* registeredSchool;

//    element of singly-linked list which keeps Course(s) taken by (this) Student
    struct courseElement {
        Course* data;
        courseElement *next;
    };
    courseElement *headOfCoursesTakenByStudent;
//    number of Course(s) taken by (this) Student
    int numberOfCoursesTakenByStudent;

//    private methods
//    -> These method(s) were declared because they will be needed in public methods
//    due to their various functionalities.
//    -> These method(s) search various single-linked lists maintained by the object.
//    -> Returns TRUE if the searched object is in the current list, FALSE otherwise.
//    -> Since the current and previous parameters are reference to pointers,
//    they are useful for removing elements from the list.
    bool findCourse(const Course& course, courseElement*& current,
                    courseElement*& previous) const;
};


#endif //STUDENT_H
