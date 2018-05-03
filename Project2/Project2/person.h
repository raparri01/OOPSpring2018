#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

using namespace std;
class Person {
  private:
    string name;
    int age;

  public:
    Person();
    Person(string initName, int initAge);
    virtual void printName();
    string getName();
    void printAge();
};
#endif
