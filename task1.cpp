#include <iostream>
using namespace std;

void checking(string tem1,string humi);


	int main()
{
	
	string tem,humid;
	cout<<"Enter the condition of temperature(cold or warm)"<<endl;
	cin>>tem;
	cout<<"Enter the condition of huimidity(dry or humid)"<<endl;
	cin>>humid;
	 checking(tem,humid);
	
	
}

  void checking(string tem1,string humi)
{
	
	if(tem1 == "warm")
	{

 	 if(humi == "dry")
	{
	  cout<<"Play tennis"<<endl;
	}

         else
	{
	cout<<"swim"<<endl;
	}

	}




	else if(tem1 == "cold")
	{

 	 if(humi == "dry")
	{
	  cout<<"Play basketball"<<endl;
	}

	else
	{
         cout<<"watch tv"<<endl;
	}

	}
}