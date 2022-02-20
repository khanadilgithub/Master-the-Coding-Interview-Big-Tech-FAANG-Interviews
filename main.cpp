#include<iostream>
class Student
{

};
int main()
{
  Student S;
  Student* S1 = new Student();

  Student S2=S;

  Student S3;
  S=S3;
  return 0;
}