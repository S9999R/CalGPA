#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include <string>
#define size 10

struct Sub
 {
    string name;
    int hours=0;
    int grade=0;
    float pt=0;
    string letter;
 };

int main(){
    int Thours,N;
 float tpoints, fgpa;
 
  
Sub H[size];

  cout<< "enter the total hours :"<<endl; //حساب المعدل الحالي
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
 
 for(int i=0;i<N;i++){ //طلب المواد الي راح يسجله حق الترم الجاي
 


 cout<<"name of the course:\n ";
 cin.ignore();
 getline(cin,H[i].name);

 cout<<"how many hours(1-4) :\n";
 cin>>H[i].hours;

 cout<<"grade(from 0-100 only):\n";
 cin>>H[i].grade;


 }

 for (int i = 0; i < N; i++)// نعطي النقاط لكل مادة حسب القريد
 {

   if (H[i].grade>=95)
   {
      H[i].pt = 5.00 * H[i].hours;
      H[i].letter ="A+";

   }
  

   else if (H[i].grade>=90)
   {
      H[i].pt = 4.75 * H[i].hours;
      H[i].letter = 'A';

   }

   else if (H[i].grade>=85)
   {
      H[i].pt = 4.50 * H[i].hours;
      H[i].letter = "B+";

   }
   else if (H[i].grade>=80)
   {
      H[i].pt = 4.00 * H[i].hours;
      H[i].letter = 'B';

   }

   else if (H[i].grade>=75)
   {
      H[i].pt = 3.50 * H[i].hours;
      H[i].letter = "C+";

   }

   else if (H[i].grade>=70)
   {
      H[i].pt = 3.00 * H[i].hours;
      H[i].letter = 'C';

   }
   else if (H[i].grade>=65)
   {
      H[i].pt = 2.50 * H[i].hours;
      H[i].letter = "D+";

   }

   else if (H[i].grade>=60)
   {
      H[i].pt = 2.00 * H[i].hours;
      H[i].letter = 'D';

   }

   else if (H[i].grade<=60)
   {
      H[i].pt = 1.00 * H[i].hours;
      H[i].letter = 'F';

   }

 }
float fpoint =0;
int fhour =0;
  for (int i = 0; i < N; i++) //حساب النقاط والساعات للترم الجاي
  {
    fpoint+= H[i].pt;
    //cout<<"points: "<<fpoint<<endl; 
    fhour+= H[i].hours;
      //cout<<"hours: "<<fhour<<endl;

  }
  //cout<<fpoint<<endl<<
  //fhour<<endl;
  float tgpa = fpoint / fhour;
  tgpa = floor(tgpa *100) /100; //حساب المعدل الفصلي
//  cout<<"your class gpa is : "<<tgpa; 
  
   float Npoint = fpoint + tpoints;//حساب المعدل الترم الجاي
   int Nhour = fhour + Thours;
   float Ngpa= Npoint/Nhour;
   Ngpa = floor(Ngpa *100) / 100;


   for(int i=0;i<N;i++){

      cout<<"---------------------------------------------"<<endl;
      cout<<"course Name: "<<H[i].name<<endl;
      cout<<"hours: "<<H[i].hours<<endl;
      cout<<"Grade: "<<H[i].letter<<endl;
      cout<<"---------------------------------------------"<<endl;

   }


   cout<<"المعدل الحالي : "<<fgpa<<endl;
   cout<<"المعدل الفصلي: "<<tgpa<<endl;
   cout<<"المعدل التراكمي (المتوقع): "<<Ngpa<<endl;
    return 0;
}