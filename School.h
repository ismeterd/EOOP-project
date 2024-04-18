// School.h

#ifndef SCHOOL_H
#define SCHOOL_H


class Lecturer; // forward declaration
class Course; // forward declaration
class Student; // forward declaration


class School {
    friend std::ostream& operator<<(std::ostream& output, School& school);
public:
    School(const std::string &name);
    ~School();
    void insertLecturer(Lecturer& lecturer);
    void addCourse(Course& course, Lecturer& courseLecturer);
    void registerStudent(Student& student);
    void addStudentToCourse(Student& student, Course& course);
private:
    std::string name;

    struct lecturerElement {
        Lecturer* data;
        lecturerElement *next;
    };
    lecturerElement *headOfLecturers;
    int numberOfLecturers;

    struct courseElement {
        Course* data;
        courseElement *next;
    };
    courseElement *headOfCourses;
    int numberOfCourses;

    struct studentElement {
        Student* data;
        studentElement *next;
    };
    studentElement *headOfStudents;
    int numberOfStudents;
};


#endif //SCHOOL_H
