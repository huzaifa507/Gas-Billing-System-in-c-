#include <iostream>
#include<iomanip>
#include<windows.h>
#include<unistd.h>
using namespace std;

void welcome()
{
	 cout<<"\n\n";
	cout<<"\n"<<setw(70)<<"Loading....\n	  \t\t"	<<setw(18.5);
	system("Color 30");
	char x=220;
	for(int i=0;i<31;i++)
	{
	    cout<<x;
			if(i>=0&&i<11)
			Sleep(60);
			if(i>10&&i<24)
			Sleep(100);
			if(i>23&&i<31)
			Sleep(60);
	}
	char a=186 ,b=205, c=200, d=201, e=187, f= 188,g=185, h=223;
	
	cout<<"\n\n"<<setw(10)<<d<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<e<<endl;
	cout<<setw(10)<<a<<setw(50)<<a<<endl<<setw(10)<<a<<setw(2)<<d<<b<<b<<b<<b<<b<<b<<b<<b<<e<<setw(10)<<d<<b<<b<<b<<b<<b<<b<<b<<b<<e<<setw(10)<<d<<b<<b<<b<<b<<b<<b<<b<<b<<setw(2)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(9)<<a<<setw(10)<<a<<setw(9)<<a<<setw(10)<<a<<setw(10)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(9)<<a<<setw(10)<<a<<setw(9)<<a<<setw(10)<<a<<setw(10)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(9)<<a<<setw(10)<<a<<setw(9)<<a<<setw(10)<<a<<setw(10)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(1)<<b<<b<<b<<b<<b<<b<<b<<b<<f<<setw(10)<<a<<b<<b<<b<<b<<b<<b<<b<<b<<a<<setw(10)<<a<<b<<b<<b<<b<<b<<g<<setw(4)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(19)<<a<<setw(9)<<a<<setw(10)<<a<<setw(10)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(19)<<a<<setw(9)<<a<<setw(10)<<a<<setw(10)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(19)<<a<<setw(9)<<a<<setw(10)<<a<<setw(10)<<a<<endl;
	cout<<setw(10)<<a<<setw(2)<<a<<setw(13)<<h<<setw(6)<<a<<setw(9)<<a<<setw(5)<<h<<setw(5)<<a<<setw(10)<<a<<endl;
	
	cout<<setw(10)<<a<<"\t PAK - AUSTRIA FACHOOSHULE HARIPUR ";
	cout<<setw(9)<<a<<endl<<setw(10)<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<f<<endl;
	sleep(1);
	cout<<"\n"<<setw(50)<<" PROJECT: GAS BILLING SYSTEM "<<endl;
	
    sleep(1);
    cout<<setw(40)<<d<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<e<<endl;
 
	cout<<setw(40)<<a<<" "<<" Made by :  Huzaifa Hassan & "<<setw(8)<<a<<endl<<setw(40)<<a<<setw(25)<<" Danyal Ali "<<setw(13)<<a<<endl;
	cout<<setw(40)<<a<<setw(38)<<a<<endl;
    cout<<setw(40)<<a<<" Department: Artificial Intelligence "<<a<<endl;
	cout<<setw(40)<<a<<setw(38)<<a<<endl;
	cout<<setw(40)<<a<<" "<<" Subject : Programming Fundamentals "<<a<<endl; 
	cout<<setw(40)<<a<<setw(38)<<a<<endl;
	cout<<setw(40)<<a<<" "<<" Submit to: Sir Rehan Tariq "<<setw(9)<<a<<endl;   
	cout<<setw(40)<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<f<<endl;
	
	sleep(10);
	
//	system("cls");
	
	
	
	
}
 void menu() 
{
	system("color 30");
	cout<<"\n\n\n\n\n";
	
	
   cout<<"  0: exit\n";
   cout<<"  1: Register\n";
   cout<<"  2: Login\n";
   cout<<"  3: Forget Account\n";
    cout<<"  4: Pay Bill\n";
}
void Register()
{
	string username,password;
	
	cout<<" Enter Username: ";
	cin>>username;
	cout<<" Enter Password: ";
	cin>>password;
	
}
 void cas()
 {
 	int ch;
 	cout<<" Enter your choice ";
 	cin>>ch;
 	switch(ch)
 	{
 		case 0:
 			break;
 		case 1:
 		
	 }
 }
int main()
{
	welcome();
	system("cls");
	
	menu();
//	cas();
	
}


	

