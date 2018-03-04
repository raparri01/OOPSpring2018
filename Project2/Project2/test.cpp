#include "teacher.h"
#include "student.h"

int main(){
    Person james = Person("James", 18);
    Person patrick = Person("Patrick", 18);
    Person noName = Person();
    
    Course Math = Course("Math", 101, "Basic Math");
    Course English = Course("English", 101, "Basic English");
    Course History = Course("History", 101, "Basic History");
    Course Science = Course("Science", 101, "Basic Science");
    Course Engineering = Course("Engineer", 101, "Basic Engineering");
    
    Student student1 = Student("Chris", 2, 3);
    Student student2 = Student("Chuck", 2, 3);
    Student student3 = Student(student2);
    
    Teacher teacher1 = Teacher(1000, "Snape", 45);
    Teacher teacher2 = Teacher(2000, "Dumbledore", 72);
    Teacher teacher3 = Teacher(3000, "Hagrid", 60);
    
    student1.addCourse(Math);
    student1.addCourse(History);
    student1.printCourses();
    
}
