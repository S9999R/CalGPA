#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int Thours;
 float tpoints, fgpa;
  cout<< "enter the total hours :"<<endl;
  cin>>Thours;
  cout<<"enter the total points :"<<endl;
  cin>>tpoints;
  fgpa = tpoints/Thours;
 fgpa =floor(fgpa * 100) / 100;
  cout<<"your gpa is : " << fgpa << endl;
 

    return 0;
}