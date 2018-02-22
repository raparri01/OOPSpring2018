#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;
class Course{
  private:
    string course_name;
    int course_num;
    string course_desc;
  public:
    Course();
    Course(string initCourse_name, int initCourse_num, string initCourse_desc);
    ~Course();

    void getCourseName();
    void getCourseNum();
    void getCourseDesc();
};

#endif
