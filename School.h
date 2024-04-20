// School.h

#ifndef SCHOOL_H
#define SCHOOL_H

// forward declarations
class Lecturer;
class Course;
class Student;


class School {
//    overloading Stream Insertion Operator (<<)
//    # Function: when it is called, print all details of the School
    friend std::ostream& operator<<(std::ostream& output, School& school);
public:
//    Constructor
//    # Parameters
//      - name: name of the School ("Warsaw University of Technology")
    School(const std::string &name);
//    Destructor
//    # Function
//      -> With dynamic memory management, it frees the Student, Course and Lecturer sections that it has reserved
//      (elements of single-linked list).
    ~School();

//    hireLecturer
//    # Parameters
//      - lecturer: Teacher object to be hired
//    # Function
//      -> hire a new Lecturer at the School (adds to Lecturer list)
//    # Return
//      - true: If the hiring process is successful
//      - false: If the hiring process is unsuccessful
//          -> The Lecturer may already be hired
//          -> Dynamic Memory problem...
    bool hireLecturer(Lecturer& lecturer);
//    fireLecturer
//    # Parameters
//      - lecturer: Teacher object to be fired
//    # Function
//      -> fire a Lecturer from the School (removes from offered Course list)
//    # Return
//      - true: If the firing process is successful
//      - false: If the firing process is unsuccessful
//          -> The Lecturer may already be fired or has no job...
    bool fireLecturer(Lecturer& lecturer);
//    fireLecturerByName
//    # Parameters
//      - name: name of the Teacher object to be fired
//    # Function
//      -> fire a Lecturer from the School (removes from offered Course list)
//    # Return
//      - true: If the firing process is successful
//      - false: If the firing process is unsuccessful
//          -> If there is no Lecturer corresponding to the entered name among
//          the working Lecturers...
    bool fireLecturerByName(const std::string &name);

//    addCourse
//    # Parameters
//      - course: Course object to be opened at school
//      - courseLecturer: Lecturer who will give the Course
//    # Function
//      -> Opens a new Course at the School that Student(s) can take. (adds to
//      offered Course list)
//    # Return
//      - true: If the adding Course is successful
//      - false: If the adding Course is unsuccessful
//          -> Lecturer may not be working at school
//          -> Lecturer may have reached the maximum number of lessons he/she can teach
//          -> Course may have already been added...
    bool addCourse(Course& course, Lecturer& courseLecturer);
//    removeCourse
//    # Parameters
//      - course: Course object to be removed at School
//    # Function
//      -> Removes an existing Course at the School (removes from offered Course list)
//    # Return
//      - true: If the removing Course is successful
//      - false: If the removing Course is unsuccessful
//          -> The Course may not have been offered at the school...
    bool removeCourse(Course& course);
//    removeCourse
//    # Parameters
//      - code: Course code of the course to be removed at School (like ECULT)
//    # Function
//      -> Removes an existing Course at the School (removes from offered Course list)
//    # Return
//      - true: If the removing Course is successful
//      - false: If the removing Course is unsuccessful
//          -> There may not be a course corresponding to the entered code among the courses
//          offered at the school...
    bool removeCourseByCode(const std::string &code);

//    registerStudent
//    # Parameters
//      - student: Student object to be registered to school
//    # Function
//      -> register the Student in school (adds to registered Student list)
//    # Return
//      - true: If the registering Student is successful
//      - false: If the registering Student is unsuccessful
//          -> The Student may already be registered
//          -> The student's number may be the number of another Student currently
//          registered in the school...
    bool registerStudent(Student& student);
//    unregisterStudent
//    # Parameters
//      - student: Student object to be unregistered to school
//    # Function
//      -> unregister the Student in school (removes from registered Student list)
//    # Return
//      - true: If the unregistering Student is successful
//      - false: If the unregistering Student is unsuccessful
//          -> The Student may not be registered in School...
    bool unregisterStudent(Student& student);
//    unregisterStudentByStudentNumber
//    # Parameters
//      - studentNumber: student number of Student object to be unregistered to school
//    # Function
//      -> unregister the Student in school (removes from registered Student list)
//    # Return
//      - true: If the unregistering Student is successful
//      - false: If the unregistering Student is unsuccessful
//          -> There may not be Student registered to the entered student number...
    bool unregisterStudentByStudentNumber(const std::string &studentNumber);

//    addStudentToCourse
//    # Parameters
//      - student: Student object to add to Course
//      - course: Course object to which the student will be added
//    # Function
//      -> Adds the student to the course. In this way, the Student
//      is enrolled for the course. It also establishes relationships between
//      the student and the course.
//    # Return
//      - true: If the adding Student to Course is successful
//      - false: If the adding Student to Course is unsuccessful
//          -> The Student may not be enrolled in school
//          -> The Course may not be open (such a Course may not be offered by
//          the school)
//          -> The Course may be at capacity
//          -> The Student may already be enrolled in the course...
    bool addStudentToCourse(Student& student, Course& course);
//    removeStudentFromCourse
//    # Parameters
//      - student: Student object to remove from Course
//      - course: Course object to which the student will be removed
//    # Function
//      -> Removes the student from the Course. In this way, the Student
//      is unEnrolled for the course.
//    # Return
//      - true: If the removing Student from the Course is successful
//      - false: If the removing Student from the Course is unsuccessful
//          -> The Student may not be enrolled in school
//          -> The Course may not be open (such a Course may not be offered by
//          the school)
//          -> The Student may already be unEnrolled in the course...
    bool removeStudentFromCourse(Student& student, Course& course);

//    printLecturers
//    # Function
//      -> Prints all Lecturer(s) hired at the School.
    void printLecturers() const;
//    printCourses
//    # Function
//      -> Prints all Course(s) offered by the School.
    void printCourses() const;
//    printStudents
//    # Function
//      -> Prints all Student(s) registered in the School.
    void printStudents() const;

//    Getter functions for private data members
    std::string getName() const;
    int getNumberOfLecturers() const;
    int getNumberOfCourses() const;
    int getNumberOfStudents() const;
private:
//    name: Corresponds to the School Name (e.g. Istanbul Technical University)
    std::string name;

//    element of singly-linked list which keeps hired Lecturer(s)
    struct lecturerElement {
        Lecturer* data;
        lecturerElement *next;
    };
    lecturerElement *headOfLecturers;
//    number of hired Lecturer(s)
    int numberOfLecturers;

//    element of singly-linked list which keeps Course(s) offered by the School
    struct courseElement {
        Course* data;
        courseElement *next;
    };
    courseElement *headOfCourses;
//    number of Course(s) offered by the School
    int numberOfCourses;

//    element of singly-linked list which keeps Student(s) registered in School
    struct studentElement {
        Student* data;
        studentElement *next;
    };
//    number of Student(s) registered in School
    studentElement *headOfStudents;
    int numberOfStudents;

//    private methods
//    -> These methods were declared because they will be needed in public methods
//    due to their various functionalities.
//    -> These methods search various single-linked lists maintained by the object.
//    -> Returns TRUE if the searched object is in the current list, FALSE otherwise.
//    -> Since the current and previous parameters are reference to pointers,
//    they are useful for removing elements from the list.
    bool findLecturer(const Lecturer& lecturer, lecturerElement*& current,
                      lecturerElement*& previous) const;
    bool findLecturerByName(const std::string &name, lecturerElement*& current,
                      lecturerElement*& previous) const;
    bool findCourse(const Course& course, courseElement*& current,
                    courseElement*& previous) const;
    bool findCourseByCode(const std::string &code, courseElement*& current,
                    courseElement*& previous) const;
    bool findStudent(const Student& student, studentElement*& current,
                     studentElement*& previous) const;
    bool findStudentByStudentNumber(const std::string &studentNumber, studentElement*& current,
                     studentElement*& previous) const;
};


#endif //SCHOOL_H
