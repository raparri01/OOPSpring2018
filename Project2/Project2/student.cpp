#include "student.h"

  Student::Student(){
    student_num = 0;
  }
Student::Student(const Student &studentObj):Person(studentObj){
  }
  Student::Student(string initsName, int initsAge, int initStudent_Num):Person(initsName,initsAge){
    student_num = initStudent_Num;
  }

  void Student::getStudentNum(){
    cout << student_num << endl;
  }
  void Student::printCourses(){
      for(list<Course>::iterator it=courseList.begin(); it != courseList.end(); ++it){
          cout << &it << endl;
    }
  }

  void Student::addCourse(Course courseObj){
    courseList.push_front(courseObj);
  }
  void Student::deleteCourse(){
    cout << "Ill get to this latermuch later maybe" << endl;
  }
