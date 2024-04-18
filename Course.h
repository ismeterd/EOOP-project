// Course.h

#ifndef COURSE_H
#define COURSE_H


class Lecturer; // forward declaration
class Student; // forward declaration


class Course {
    friend std::ostream& operator<<(std::ostream& output, Course& course);
public:
    Course(const std::string& name);
    ~Course();
    std::string getName() const;
private:
    std::string name;
    Lecturer* courseLecturer;

    struct studentElement {
        Student* data;
        studentElement *next;
    };
    studentElement *headOfStudentsTakingCourse;
    int numberOfStudentsTakingCourse;

    void assignLecturer(Lecturer& lecturer);
    void addStudent(Student& student);
    friend class School;
};


#endif //COURSE_H
