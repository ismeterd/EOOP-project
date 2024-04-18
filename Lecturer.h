// Lecturer.h

#ifndef LECTURER_H
#define LECTURER_H


class Course; // forward declaration


class Lecturer {
    friend std::ostream& operator<<(std::ostream& output, Lecturer& lecturer);
public:
    Lecturer(const std::string &name);
    ~Lecturer();
    std::string getName() const;
private:
    std::string name;

    struct courseElement {
        Course* data;
        courseElement *next;
    };
    courseElement *headOfCoursesGivenByLecturer;
    int numberOfCoursesGivenByLecturer;

    void assignCourse(Course& course);
    friend class School;
};


#endif //LECTURER_H
