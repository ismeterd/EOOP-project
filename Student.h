// Student.h

#ifndef STUDENT_H
#define STUDENT_H


class Course; // forward declaration


class Student {
    friend std::ostream& operator<<(std::ostream& output, Student& student);
public:
    Student(const std::string &name);
    ~Student();
    std::string getName() const;
private:
    std::string name;

    struct courseElement {
        Course* data;
        courseElement *next;
    };
    courseElement *headOfCoursesTakenByStudent;
    int numberOfCoursesTakenByStudent;

    void addCourse(Course& course);
    friend class School;
};


#endif //STUDENT_H
