#include<iostream>
using namespace std;
string checking(int day, string month);
int main()
{
 int day1;
 string month1,result;
 cout << "Enter Month: ";
 cin >> month1;
 cout << "Enter Date: ";
 cin >> day1;
  result = checking(day1, month1);
  cout << result;
}
string checking(int day, string month)
{
	string f;
	
	if (month == "March" )
{
	if (day >= 21 && day <= 31)
        {
		f = "Aries";
	}
	
        else if (day >= 1 && day <= 20)
	{
		f = "Pisces";
	}
}
	if (month == "April")
{
	
	if (day <= 19 && day >= 1)
	{
		f = "Aries";
	}
	
	else if (day >= 20 && day <= 30)
	{
		f = "Taurus";
	}
}
	if (month == "May")
{
		
	if (day <= 20 && day >= 1)
	{
		f = "Taurus";
	}
	
	else if (day >= 21 && day <= 31)
	{
		f = "Gemini";
	}
}
	if (month == "June")
{
		
        if (day <= 20 && day >= 1)
	{
		f = "Gemini";
	}
	
	else if (day>= 21 && day <= 30)
	{
	f = "Cancer";
	}
}
	if (month == "July")
{
	
	if (day <=22 && day >= 1)
	{
		f = "Cancer";
	}
	
	else if (day >= 23 && day <= 31)
	{
	f = "Leo";
	}
}
	if (month == "August")
{
	
	if (day <= 22 && day >= 1)
	{
	f = "Leo";
	}
		
	else if (day >= 23 && day <= 31)
	{
	f = "Virgo";
	}
}
	if (month == "September")
{
	
	if (day <= 22 && day >= 1)
	{
		f = "Virgo";
	}
	
	else if (day >= 23 && day <= 30)
	{
		f = "Libra";
	}
}
	if (month == "October")
{
		
         if (day <= 22 && day >= 1)
	{
	f = "Libra";
	}
	
         else if (day >= 23 && day <= 31)
	{
		f = "Scorpio";
	}
}
	if (month == "November")
{
	if (day <= 21 && day >= 1)
	{
	        f = "Scorpio";
	}
	
	else if (day >= 22 && day <= 30)
	{
		f = "Sagittarius";
	}
}
	if (month == "December")
{

	if (day <= 21 && day >= 1)
	{
		f = "Sagittarius";
	}

	else if (day >= 22 && day <= 31)
	{
		f = "Capricon";
	}
}
	if (month == "January")
{

	if (day <= 19 && day >= 1)
        {
	f = "Capricon";
	}

	else if (day >= 20 && day <= 31)
	{
		f = "Aquarius";
	}
}
	if (month == "February")
{
	if (day <= 18 && day >= 1)
	{
		f = "Aquarius";
	}
	else if (day >= 19 && day <= 28)
	{
		f = "Pisces";
	}
}
 return f;
}