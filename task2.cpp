#include<iostream>
using namespace std;


int main()
{
  int eng,ss,math,chm,bio,total,per;
  
  string name;
  cout<<"Enter your name"<<endl;
  cin>>name;
  cout<<"Enter the marks of English"<<endl;
  cin>>eng;
  cout<<"Enter the marks of Social science"<<endl;
  cin>>ss;
  cout<<"Enter the marks of Math"<<endl;
  cin>>math;
  cout<<"Enter the marks of Chemsitry"<<endl;
  cin>>chm;
  cout<<"Enter the marks of biology"<<endl;
  cin>>bio; 
  total = eng+ ss + math + chm +bio;
   per = (total *100)/500 ;
  cout<<"NAME::"<<name<<endl;
  cout<<"Total marks is :"<<total<<endl;
  cout<<"Percenrate is "<<per<<":"<<endl; 
   if (per>50 && per<60)
   {
    cout<<"Grade is C";
   }
   
   else if (per>60 && per<70)
   {
    cout<<"Grade is B";
   }

    else if (per>70 && per<80)
   {
    cout<<"Grade is B+";
   }

   else if (per>80 && per<90)
   {
    cout<<"Grade is A";
   }

   else  if (per>90 && per<100)
   {
    cout<<"Grade is A+";
   }

   else  if (per>40 && per<50)
   {
    cout<<"Grade is D";
   }

   else  if (per<40)
   {
    cout<<"Grade is D";
   }



}
