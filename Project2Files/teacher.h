#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include "course.h"


using namespace std;
class Teacher: public Person {
  private:
    int salary;
    Course courseList[3];

  public:
    void getSalary();
    void printCourses();
    void addCourse(Course courseObj);
    void printName();
};

#endif
