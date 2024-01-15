#include <iostream>
#include<iomanip>
#include<windows.h>
#include<unistd.h>
#include<fstream>
#include<string>
#include<conio.h>
#include <cstdlib>
#include<sstream>
#include <ctime>  
using namespace std;
 void forget();
 int main();
 void paybill();
 void position();
void on();
 int login_status=0;
 string name;
 	 string consumerno;
 	   string data[30];

void welcome()
{
	 cout<<"\n\n";
	cout<<"\n"<<setw(100)<<"Loading....\n	  \t\t"	<<setw(50);
	system("Color F0");
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
//string date()
//{
	// time_t now = time(0); // get current date and time   
  //  tm* ltm = localtime(&now);  
    // print various components of tm structure.  
  //  cout<< 1900 + ltm->tm_year << endl; // print the year  
  //  cout << 1 + ltm->tm_mon << endl; // print month number  
  //  cout<< ltm->tm_mday << endl; // print the day  
    // Print time in hour:minute:second  
   // cout << "Time: " << 5 + ltm->tm_hour << ":";  
   // cout << 30 + ltm->tm_min << ":";  
   // cout << ltm->tm_sec << endl;  
    
//}
 void menu() 
{
	system("cls");
	system("color F0");
	cout<<"\n\n\n\n\n";
	cout << setw(95) << "=====================\n";
    cout << setw(95) << "|| -- Main Menu -- ||\n";
    cout << setw(95) << "=====================\n";
    cout<<"\n\n\n\n\n ";
   cout<<setw(85)<<"0 for exit\n\n";
   cout<<setw(90)<<"1 for Register\n\n";
   cout<<setw(87)<<"2 for Login\n\n";
   cout<<setw(96)<<"3 for Forget Account\n\n";
   cout<<setw(90)<<"4 for Pay Bill\n\n";
}
void Register()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n   ";
    cout<<setw(105)<<"----------------------------------------------------------\n";
	cout<<setw(100)<<"    Online Registration Portal "<<endl;
	cout<<setw(108)<<"----------------------------------------------------------\n";
	string consumername,password,cnic,email;
	int consumerno;
	int type;
	string adress;
	ofstream onfile;
	onfile.open("huzaifa.csv", std::ios_base::app);
	cout<<" Consumer Name. ";
	cin.ignore();
	getline(cin,consumername);
		cout<<" Consumer No. ";
	cin>>consumerno;
	cout<<" Adress: ";
	cin.ignore();
	getline(cin,adress);
    cout<<" Enter Email ID ";
    cin.ignore();
    getline(cin,email);

	cout<<" Set Password: ";
	cin>>password;
	cout<<" CNIC No. ";
	cin>>cnic;
     cout<<"\n  Connection Type.."<<endl;
	cout<<" 1: Commercial "<<endl;
	cout<<" 2: Home "<<endl;
	cout<<" Enter type: ";
		onfile<<consumername<<",";
	onfile<<password<<",";
	onfile<<consumerno<<",";
		onfile<<adress<<",";
	onfile<<email<<",";
	onfile<<cnic<<",";
cin>>type;
   if(type==1 || type==2){
	switch(type)
	{
		case 1:
			onfile<<"Commercial"<<",";
		break;
			case 2:
		onfile<<"Home"<<",";break;	
		}
		cout<<" Registered sucessful "<<endl;
		}
		else{
			exit(0);
			cout<<" Not registered. try again"<<endl;
		}
		 time_t now = time(0); // get current date and time   
    tm* ltm = localtime(&now);
	  onfile<< 1900 + ltm->tm_year << ","; // print the year  
    onfile<< 1 + ltm->tm_mon <<","; // print month number  
    onfile<< ltm->tm_mday << endl;  
	onfile.close();
}
void login()
{
	system("cls");
	string consumername,password;
	string consumer;
	cout<<"\n\n\n\n\n\n\n   ";
	cout<<setw(60);
	 cout<<setw(100)<<"----------------------------------------------------"<<endl<<endl;
    cout<<setw(100)<<"                  Welcome to Login Page             "<<endl;
    cout<<setw(100)<<"\t   ----------------------------------------------------"<<endl<<endl;
		cout<<setw(60);
	cout<<setw(60)<<" Enter consumer No: ";
	cin>>consumerno;
	ifstream infile;
	string line ="";
	infile.open("huzaifa.csv" ,ios_base::app);
	int i=0;
	while(getline(infile, line)){
		stringstream word(line);
				while(getline(word,data[i],',')){
			 i++;
			 }
//		    cout<<i;
//			getline(word, consumername,',');
//			getline(word,password, ',');
//			getline(word,consumer, ',');
		if(consumerno == data[2]){
			cout<<"\n\n  -------------------------LOGIN successful--------------------------------";
			login_status=1;
			break;
		}	
	}
    string reading[5];
    int j=0;
    stringstream word1(data[6]);					// stringstream is used to extract numeric values fron string
	while(getline(word1,reading[j],'-')){
			 j++;
			 }
	cout<<data[0]<<endl;
	cout<<data[1]<<endl;
	cout<<data[2]<<endl;
	cout<<data[3]<<endl;
	cout<<data[4]<<endl;
	cout<<data[5]<<endl;
//	cout<<data[6]<<endl;
	cout<<reading[0]<<endl;
	cout<<reading[1]<<endl;
	cout<<reading[2]<<endl;
	cout<<reading[3]<<endl;
	if(login_status==0){
	cout<<"\n Invalid username or password \n";
	}
}
	void _exit()
	{
		HWND consoleWindow = GetConsoleWindow();
    PostMessage(consoleWindow, WM_CLOSE, 0, 0);
	}
 void cas()
 {
 	int ch;
 	cout<<setw(90)<<"=> Enter your choice: ";
 	cin>>ch;
 	switch(ch)
 	{ 
 	    case 0:
 	    	cout<<" Closing-------------"<<endl;
 	    	sleep(2);
 	    	 _exit();
 	    	break;
 		case 1:
 			Register();
 			break;
 		case 2:
 		login();
		 break;	
		case 3:
			forget();
		break;
		case 4:
			paybill();
			break;
 		 }
		  }
void in(){
	string password, pname,fpass;
	ifstream infile;
			infile.open("huzaifa.csv",ios_base::app);
			string line;
			while(getline(infile, line))
	{
		stringstream word(line);
			getline(word,pname, ',');
			getline(word,fpass, ',');
	}
			infile.close();
			cout<<" Enter your remember password: ";
			cin.ignore();
			getline(cin,password);
				if(password==fpass)//ending if
			{cout<<"\nWelcome Your Account is Found\n"<<"your username is: "<<pname<<endl;}
			else {cout<<"Not Found\n";}
			int ch;
			cout<<"1: Login\n2:Go to main menu\n";
			cout<<"enter your choice\n";cin>>ch;
			if(ch==1)
			{system("cls");
			login();}
			else
			{system("cls");
			main();
			}
			}
void out(){
	string Name, pname,fpass,line;
	ifstream infile;
			infile.open("huzaifa.csv",ios_base::app);
				while(getline(infile, line))
	{
		stringstream word(line);
			getline(word,pname, ',');
			getline(word,fpass, ',');
	}
			infile.close();
			cout<<" Enter your remember username: ";
			cin.ignore();
			getline(cin,Name);
				if(Name==pname)
			{
			cout<<"\nWelcome Your Account is Found\n"<<"your Password is: "<<fpass<<endl;}
			else {cout<<"Not Found\n";}
				int ch;
			cout<<"1: Login\n2:Go to main menu\n";
			cout<<"enter your choice\n";cin>>ch;
			if(ch==1)
			{system("cls");
			login();}
			else
			{system("cls");
			main();
			}
}
 void forget()
 {
 		system("cls");
 		string fpass,pname;
		int ch;
		cout<<"1: forget your username\n";
		cout<<"2: forget your passsword\n";
		cout<<"3: go to mainmenu\n";
		cout<<"Enter your way to found your account: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			in();
			break;
			case 2:
				out();
			break;	
			case 3:
				main();
				break;
		}
		
 }
 void paybill()
 {
 	system("cls");
 	string name;
	 int preading,creading,cnic,GCV=1041,difference;
	 double hm3,mmbtu;
	 int Rs, meterRent=40 ,GST = 900;
	 int totalbill;
 	cout<<" Enter Name: ";
 	cin.ignore();
 	getline(cin,name);
 	cout<<" Enter CNIC: ";
 	cin>>cnic;
 	cout<<" Previous Reading: ";
 	cin>>preading;
 	cout<<" Current reading: ";
 	cin>>creading;
 	if(preading > creading)
 	{
 		cout<<" Please enter correct reading "<<endl;
 	 exit(1);
	 }
 	difference=creading-preading;
 	hm3=difference/100000.0000;
 	mmbtu= (hm3*GCV)/281.7385;
 	if(mmbtu< 0.25){
 		Rs=300;
	 }
   else	if(mmbtu< 0.60){
 		Rs=600;
	 }
 	 else	if(mmbtu< 1){
 		Rs=1000;
	 }
	  else	if(mmbtu< 1.5){
 		Rs=1200;
	 }
	  else	if(mmbtu< 2){
 		Rs=1600;
	 }
 	 else	if(mmbtu< 3){
 		Rs=3000;
	 }
	  else	if(mmbtu< 4){
 		Rs=3500;
	 }
 	 else	if(mmbtu> 4){
 		Rs=4000;
	 }
	totalbill= Rs+meterRent+GST;
	 cout<<mmbtu<<endl;
 	cout<<Rs<<endl;
 		cout<<totalbill<<endl;
 	ofstream onfile;
 	onfile.open("huzaifa.csv",ios_base::app);

 //	onfile<<name<<",";
//	onfile<<cnic<<",";
//	onfile<<preading<<",";
//	onfile<<creading<<",";
//	onfile<<rate<<endl;
	cout<<" BILL PAYED ";
 }
int main()
{
	 ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
//	welcome();
//	system("cls");
	menu();
		cas();
//	Register();
//	login();
//	chek();	
}




