#include "teacher.h"

Teacher::Teacher(){
    salary = 0;
}
Teacher::Teacher(int initSalary, string init_tName, int init_tAge):Person(init_tName, init_tAge){
    salary = initSalary;
}
Teacher::Teacher(const Teacher &teacherObj): Person(teacherObj){
    salary = teacherObj.salary;
}
void Teacher::getSalary(){
    cout << salary << endl;
}

void Teacher::printName(){
    cout << "This is teacher " << getName();
}
