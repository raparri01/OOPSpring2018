#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "course.h"
#include <list>
#include <string>

using namespace std;
class Student: public Person{
  private:
    int student_num;
    list <Course> courseList;

  public:
    Student();
    Student(int initStudent_Num);
    void getStudentNum();
    void printCourses();
    void addCourse(Course courseObj);
    void deleteCourse();
};

#endif
