#include <iostream.h>
using namespace std;

class Student{
private:
int student_id;
String name;
double marks1;
double marks2;
double marks3;

public:
Student(){
cout<<"this is default constructor"<<endl;
}

void setStudent_id(int student_id){
this.student_id-> student_id;
}

void setName(String name){
this.name-> name;
}

void setMarks1(double marks1){
this.marks1-> marks1;
}

void setMarks2(double marks2){
this.marks2-> marks2;
}

void setMarks3(double marks3){
this.marks3-> marks3;
}

int getStudent_id(){
return student_id;}\

String getName(){
return name;}

double getMarks1(){
return mark1;}

double getMarks2(){
return mark2;}

double getMarks3(){
return mark3;}

void result(int student_id,String name,double marks1,double marks2,double marks3){
	double total = marks1+marks2+marks3;
cout<<"Total marks are  "<<total<<endl;
	double percentage = (total/3)*100;
cout<<"percentage is  "<<percentage<<endl;
}
};





