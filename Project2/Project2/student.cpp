#include "student.h"

  Student::Student(){
    student_num = 0;
  }
Student::Student(const Student &studentObj):Person(studentObj){
  }
  Student::Student(string initsName, int initsAge, int initStudent_Num):Person(initsName,initsAge){
    student_num = initStudent_Num;
}

void Student::printName(){
    cout << student_num;
}

  void Student::getStudentNum(){
    cout << student_num << endl;
  }
  void Student::printCourses(){
      cout << "Course List contains:";
      list <Course>::iterator it;
      
      for (it=courseList.begin(); it!=courseList.end(); ++it)
          cout << (*it).getCourseName();
      cout << '\n';
  }


bool operator == (Student& stu1, Student& stu2){
    //return (stu1.getCourseList() == stu2.getCourseList());
    return true;
}

list<Course> Student::getCourseList(){
    return (courseList);
}

  void Student::addCourse(Course courseObj){
      courseList.push_back(courseObj);
  }
  void Student::deleteCourse(string courseName){
      list <Course>::iterator it;
      
      for(it = courseList.begin(); it != courseList.end(); ++it){
          if((*it).getCourseName() == &courseName){
              courseList.remove(*it);
          } else {
              continue;
          }
      }
  }
