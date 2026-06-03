#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include <string>
#define size 10

struct Sub
 {
    string name;
    int hours;
    int grade;
 };

int main(){
    int Thours,N;
 float tpoints, fgpa;
 
  
Sub H[size];

  cout<< "enter the total hours :"<<endl;
  cin>>Thours;

  cout<<"enter the total points :"<<endl;
  cin>>tpoints;

  fgpa = tpoints/Thours;
 fgpa =floor(fgpa * 100) / 100;

 do
{
   cout<<"how many course are you taking next term? (max is 10) :";
 
 cin>>N;
 if (N>10 || N<=0)
 {
   cout<<"enter 10 or less\n";
 }
 
} while (N>10 || N<=0);
 
 for(int i=0;i<N;i++){
 


 cout<<"name of the course:\n ";
 cin.ignore();
 getline(cin,H[i].name);

 cout<<"how many hours :\n";
 cin>>H[i].hours;

 cout<<"grade:\n";
 cin>>H[i].grade;


 }

    return 0;
}