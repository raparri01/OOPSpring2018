#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include "course.h"
#include <list>

using namespace std;
class Teacher: public Person {
  private:
    int salary;
    list <Course> courseList;

  public:
    Teacher();
    Teacher(int initSalary, string init_tName, int init_tAge);
    Teacher(const Teacher &teacherObj);
    void getSalary();
    void printCourses();
    void addCourse(Course courseObj);
};

#endif
