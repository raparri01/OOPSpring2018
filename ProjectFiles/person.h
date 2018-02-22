#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
class Person {
  private:
    string name;
    int age;

  public:
    Person();
    Person(string initName, int initAge);

    void printName();
    void printAge();
};
#endif
