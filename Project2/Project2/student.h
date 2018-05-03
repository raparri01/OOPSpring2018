#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "course.h"
#include <list>

using namespace std;
class Student: public Person{
  private:
    int student_num;
    list <Course> courseList;

  public:
    Student();
    Student(const Student &studentObj);
    Student(string initName, int initAge, int initStudent_Num);
    void getStudentNum();
    void printName();
    void printCourses();
    list<Course> getCourseList();
    void addCourse(Course courseObj);
    void deleteCourse(string courseName);
};

#endif
