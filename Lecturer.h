// Lecturer.h

#ifndef LECTURER_H
#define LECTURER_H

#define MAX_NUMBER_OF_LECTURES 3

// forward declaration
class Course;


class Lecturer {
//    overloading Stream Insertion Operator (<<)
//    # Function: when it is called, print all details of the Lecturer
    friend std::ostream& operator<<(std::ostream& output, Lecturer& lecturer);
public:
//    Constructor
//    # Parameters
//      - name: name of the Lecturer
//      - title: title of the Lecturer
//      - branch: branch of the Lecturer
    Lecturer(const std::string &name, const std::string &title, const std::string &branch);
//    Destructor
//    # Function
//      -> With dynamic memory management, it frees Course sections that it has reserved (elements
//      of single-linked list).
    ~Lecturer();

//    becomeLecturerOfCourse
//    # Parameters
//      - course: Course object where Lecturer will teach
//    # Function
//      -> The Lecturer becomes the Lecturer of the course. The Course is added to the list
//      of Course(s) given by the Lecturer, It also establishes relationships between the Lecturer
//      and the Course (e.g. due to the relationship, the courseLecturer pointer of the Course
//      now points to this Lecturer object).
//    # Return
//      - true: If the process of becoming the Lecturer of the Course is successful
//      - false: If the process of becoming the Lecturer of the Course is unsuccessful
//          -> The Lecturer object may not be employed by the School
//          -> The Course may not be offered by the School
//          -> The Course may already have a Lecturer
//          -> The Lecturer may have reached the maximum number of courses they can offer...
    bool becomeLecturerOfCourse(Course& course);
//    quitTeachingTheCourse
//    # Parameters
//      - course: Course object where Lecturer will quit teaching the Course
//    # Function
//      -> The Lecturer exits the Course in which he or she is currently teaching. Previously
//      established connections between Lecturer and Course are also broken at this stage.
//    # Return
//      - true: If the process of quiting teaching the Course is successful
//      - false: If the process of quiting teaching the Course is unsuccessful
//          -> The Lecturer may not currently be teaching this course...
    bool quitTeachingTheCourse(Course& course);

    bool addCourseFromCoursesGivenByLecturer(Course& course);
    bool removeCourseFromCoursesGivenByLecturer(Course& course);
    bool activateJobStatus();
    bool deactivateJobStatus();

//    isGivenCourseCapacityFull
//    # Function
//      -> Returns whether the Lecturer has reached the maximum number of courses
//      Lecturer can teach
//    # Return
//      - true: If the number of Courses the Lecturer can give is maximum
//      - false: If the number of Courses the Lecturer can give is not maximum
    bool isGivenCourseCapacityFull() const;

//    printCourses
//    # Function
//      -> Prints all Course(s) teaching by the Lecturer
    void printCourses() const;

//    Getter functions for private data members
    std::string getName() const;
    std::string getTitle() const;
    std::string getBranch() const;
    int getNumberOfCoursesGivenByLecturer() const;
    bool getJobStatus() const;
private:
//    name: Corresponds to the name of the Lecturer (e.g. Isaac Johnson)
    std::string name;
//    title: Corresponds to the title of the Lecturer (e.g. Professor)
    std::string title;
//    branch: Corresponds to the branch of the Lecturer (e.g. Automatic Control)
    std::string branch;
//    jobStatus: It is a variable that indicates whether the Lecturer is currently working
//    at the school or not.
//      - true: working at school
//      - false: not working at school
    bool jobStatus;

//    element of singly-linked list which keeps Course(s) given by the Lecturer
    struct courseElement {
        Course* data;
        courseElement *next;
    };
    courseElement *headOfCoursesGivenByLecturer;
//    number of Course(s) given by the Lecturer
    int numberOfCoursesGivenByLecturer;

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


#endif //LECTURER_H
