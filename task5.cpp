#include<iostream>
using namespace std;

float checking1(string fruit1, string day1, float qunatity1);
int main()
{
     string fruit, day
     float qunatity;
    cout << "Enter name of fruit: ";
   cin >> fruit;
   cout << "Enter name of the day: ";
   cin >> day;
 cout << "Enter quantity: ";
 cin >> qunatity;
 float p = checking1(fruit,day,qunatity);
 cout << p;
}
 
   float checking1(string fruit1, string day1, float qunatity1)
{
  float p;
  if (day1 == "Monday" || day1 == "Tuesday" || day1 == "Wednesday" || day1 == "Thursday" || day1 == "Friday")
{
   if (fruit1 == "banana")
{
	p = qunatity1 * 2.50;
}
else if (fruit1 == "apple")
		{
			 p = qunatity1 * 1.20;
		}		
else if (fruit1 == "orange")
		{
			 p = qunatity1 * 0.85;
		}		
else if (fruit1 == "grapefruit")
		{
			 p = qunatity1 * 1.45;
		}
else if (fruit1 == "kiwi")
		{
			 p = qunatity1 * 2.70;
		}		
else if (fruit1 == "pineapple")
		{
			 p = qunatity1 * 5.50;
		}		
else if (fruit1 == "grapes")
		{
			 p = qunatity1 * 3.85;
		}				
}
	

else if(day1 == "Sunday" || day1 == "Saturday")
{
 if (fruit1 == "banana")
		{
			 p = qunatity1 * 2.70;
		}		
else if (fruit1 == "apple")
		{
			 p = qunatity1 * 1.25;
		}		
else if (fruit1 == "orange")
		{
			 p = qunatity1 * 0.90;
		}		
else if (fruit1 == "grapefruit")
		{
			 p = qunatity1 * 1.60;
		}		
else if (fruit1 == "kiwi")
		{
			 p = qunatity1 * 3.00;
		}		
else if (fruit1 == "pineapple")
		{
			 p = qunatity1 * 5.60;
		}		
else if (fruit1 == "grapes")
		{
			 p = qunatity1 * 4.20;
		}		
}
return p;
}