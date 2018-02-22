#include "course.h"

using namespace std;
Course::Course(){
  course_name = "No Name Given";
  course_num = 0;
  course_desc = "No Description Given";
}
Course::Course(string initCourse_name, int initCourse_num, string initCourse_desc){
  course_name = initCourse_name;
  course_num = initCourse_num;
  course_desc = initCourse_desc;
}
Course::~Course(){
}

void Course::getCourseName(){
  cout << course_name << endl;
}
void Course::getCourseNum(){
  cout << course_num << endl;
}

void Course::getCourseDesc(){
  cout << course_desc << endl;
}
