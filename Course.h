// Course.h

#ifndef COURSE_H
#define COURSE_H

// forward declarations
class Lecturer;
class Student;


class Course {
//    overloading Stream Insertion Operator (<<)
//    # Function: when it is called, print all details of the Course
    friend std::ostream& operator<<(std::ostream& output, Course& course);
public:
//    Constructor
//    # Parameters
//      - name: name of the Course
//      - code: code of the Course
//      - numberOfCredits: number of credits of Course
    Course(const std::string& name, const std::string& code, int numberOfCredits);
//    Destructor
//    # Function
//      -> With dynamic memory management, it frees Student(s) sections that it has reserved (elements
//      of single-linked list).
    ~Course();

//    assignLecturer
//    # Parameters
//      - lecturer: Lecturer object to be assigned to the Course
//    # Function
//      -> The Lecturer object is assigned to the course as the course Lecturer,
//      that is, it becomes the Lecturer of the relevant course. It also establishes relationships
//      between the Course and the Lecturer. (e.g. due to the relationship, The Course object is
//      added to the list of courses offered by the relevant Lecturer. Additionally, the
//      courseLecturer pointer in the Course points to this Lecturer object.)
//    # Return
//      - true: If the process of assigning the Lecturer to the Course is successful
//      - false: If the process of assigning the Lecturer to the Course is unsuccessful
//          -> The Course may not have been opened/offered by the school (status=false)
//          -> The Course may already have a Lecturer.
//          -> The Lecturer object may not be employed by the School
//          -> The Lecturer to be assigned may have reached the maximum number of Courses
//          he/she can offer...
    bool assignLecturer(Lecturer& lecturer);
//    updateLecturer
//    # Parameters
//      - lecturer: Lecturer object to be reassigned to the Course
//    # Function
//      -> The Lecturer object is reassigned to the course as the course Lecturer. Previous
//      Course-Lecturer connections are broken and a new one is established.
//    # Return
//      - true: If the process of updating the Lecturer to the Course is successful
//      - false: If the process of updating the Lecturer to the Course is unsuccessful
//          -> The Course may not have been opened/offered by the school (status=false)
//          -> The Lecturer object may not be employed by the School
//          -> The Lecturer to be reassigned may have reached the maximum number of Courses
//          he/she can offer...
    bool updateLecturer(Lecturer& lecturer);
//    fireLecturerFromCourse
//    # Parameters
//      - lecturer: Lecturer object to be fired from the Course
//    # Function
//      -> The Lecturer object is removed from the Course and any previously
//      established connections are broken.
//    # Return
//      - true: If the process of firing the Lecturer from the Course is successful
//      - false: If the process of firing the Lecturer from the Course is unsuccessful
//          -> The Course may not have been opened/offered by the school (status=false)
//          -> The course may not currently have a Lecturer. This means that
//          after this process, the Course will not have a Lecturer (until it
//          is assigned again)...
    bool fireLecturerFromCourse();

//    addStudent
//    # Parameters
//      - student: Student object to add to Course
//    # Function
//      -> Adds the Student entered as an argument to this method to the relevant course
//      (this). While doing this, it establishes connections between Course-Student
//      (such as adding this student to the list of students taking the course,
//      adding this course to the list of courses taken by the student).
//    # Return
//      - true: If the process of adding the Student to the Course is successful
//      - false: If the process of adding the Student to the Course is unsuccessful
//          -> The Course may not have been opened/offered by the school (status=false)
//          -> Student may not be registered in the School
//          -> The Student may already be enrolled in the course
//          -> The course may be at capacity...
    bool addStudent(Student& student);
//    removeStudent
//    # Parameters
//      - student: Student object to remove from Course
//    # Function
//      -> Remove the Student entered as an argument to this method from the relevant
//      course (this). While doing this, Previous connections between Student and
//      Course are broken.
//    # Return
//      - true: If the process of removing the Student from the Course is successful
//      - false: If the process of removing the Student from the Course is unsuccessful
//          -> The Student may not be enrolled in school
//          -> The Course may not have been opened/offered by the school (status=false)
//          -> The student may not be currently taking this course...
    bool removeStudent(Student& student);

//    changeNumberOfCredits
//    # Parameters
//      - newNumberOfCredits: new number of credits of the course
//    # Function
//      -> Updates the number of credits of the course
//    # Return
//      - true: If the process of updating the number of credits of the Course is successful
//      - false: If the process of updating the number of credits of the Course is unsuccessful
//          -> The number of new credits entered may not be within the appropriate range...
    bool changeNumberOfCredits(int newNumberOfCredits);
//    isThereACourseLecturer
//    # Function
//      -> Returns whether the Course currently has a Lecturer.
//    # Return
//      - true: If the Course has a Lecturer
//      - false: If the Course has not a Lecturer
    bool isThereACourseLecturer() const;
//    isCourseCapacityFull
//    # Function
//      -> Returns whether the Course is at full capacity
//    # Return
//      - true: If the Course is at full capacity
//      - false: If the Course is not at full capacity
    bool isCourseCapacityFull() const;
//    printStudents
//    # Function
//      -> Prints all Student(s) enrolled in the Course
    void printStudents() const;

//    Getter functions for private data members
    std::string getName() const;
    std::string getNameOfTheCourseLecturer() const;
    int getNumberOfStudentsTakingCourse() const;
    int getNumberOfCredits() const;
    bool getCourseStatus() const;
private:
//    name: Corresponds to the name of the Course (e.g. Object-Oriented Programming)
    std::string name;
//    code: Corresponds to the code of the Course (e.g. EOOP)
    std::string code;
//    numberOfCredits: Corresponds to the number of credits of the course like ECTS (e.g. 4 ECTS)
    int numberOfCredits;
//    courseStatus: It is the variable that indicates whether the course is active or not.
//      - true: The course is offered by the school, so students can enroll, lecturer
//      can become of the lecturer of the course
//      - false: The course is offered by the school, so students cannot enroll, lecturer
//      can not become of the lecturer of the course
    bool courseStatus;

//    courseLecturer: Points to the Lecturer of the course, otherwise it is nullptr.
    Lecturer* courseLecturer;

//    element of singly-linked list which keeps Student(s) taken this Course
    struct studentElement {
        Student* data;
        studentElement *next;
    };
    studentElement *headOfStudentsTakingCourse;
//    number of Student(s) taken this Course
    int numberOfStudentsTakingCourse;

//    private methods
//    -> These method(s) were declared because they will be needed in public methods
//    due to their various functionalities.
//    -> These method(s) search various single-linked lists maintained by the object.
//    -> Returns TRUE if the searched object is in the current list, FALSE otherwise.
//    -> Since the current and previous parameters are reference to pointers,
//    they are useful for removing elements from the list.
    bool findStudent(const Student& student, studentElement*& current,
                     studentElement*& previous) const;
};


#endif //COURSE_H
