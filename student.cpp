#include "student.h"

using namespace std;

  Student::Student():Person() , student_num(0), courseList(){

  }

  Student::Student(int initStudent_Num):Person(string initName, int initAge){
  }

  void Student::getStudentNum(){
    cout << student_num << endl;
  }
  void Student::printCourses(){
    for(int i = 0; i <= courseList.size(); i++){
      cout << courseList[i] << endl;
    }
  }

  void Student::addCourse(Course courseObj){
    courseList.push_front(courseObj);
  }
  void Student::deleteCourse(){
    cout << "Ill get to this later" << endl;
  }