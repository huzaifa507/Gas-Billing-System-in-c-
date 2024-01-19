#include <iostream>
#include<iomanip>			//for setwidth functions
#include<windows.h>          //for maximizing and exiting the console 			
#include<fstream>			// file handilng 
#include<sstream>         // for datatype stringstream that extract numeric values 
#include <ctime>  			//  get date from pc
using namespace std;
 int main();
 void paybill();
 void log_exit();
 void login();
 void date();
 void _exit();
 // globals------------------------------
 int login_status=0;
 string name;
string data[30];
string temp_data[30];
string reading[10];
 	   	
void welcome()
{
	 cout<<"\n\n";
	system("Color F0");               // changing console color 
	char a=186 ,b=205, c=200, d=201, e=187, f= 188,g=185, h=223;			// Ascii code
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
	cout<<"\n"<<setw(50)<<" PROJECT: GAS BILLING SYSTEM "<<endl;
    cout<<setw(40)<<d<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<e<<endl;
	cout<<setw(40)<<a<<" "<<" Made by :  Huzaifa Hassan & "<<setw(8)<<a<<endl<<setw(40)<<a<<setw(25)<<" Danyal Ali "<<setw(13)<<a<<endl;
	cout<<setw(40)<<a<<setw(38)<<a<<endl;
    cout<<setw(40)<<a<<" Department: Artificial Intelligence "<<a<<endl;
	cout<<setw(40)<<a<<setw(38)<<a<<endl;
	cout<<setw(40)<<a<<" "<<" Subject : Programming Fundamentals "<<a<<endl; 
	cout<<setw(40)<<a<<setw(38)<<a<<endl;
	cout<<setw(40)<<a<<" "<<" Submit to: Sir Rehan Tariq "<<setw(9)<<a<<endl;   
	cout<<setw(40)<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<f<<endl;
	Sleep(3000);
}
 void log_exit(){
 	int ch;
 		cout<<setw(50)<<" Enter 0 for login "<<endl;
		cout<<setw(49)<<" Enter 1 for Exit "<<endl;
		cout<<setw(31)<<"=>";
		cin>>ch;
		switch(ch)
		{
			case 0:
			login();
			break;
			case 1:
			_exit();
			break;
		}
 }
 
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
   cout<<setw(99)<<"2 for Login And PayBill\n\n";
}
void Register()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n   ";
    cout<<setw(105)<<"----------------------------------------------------------\n";
	cout<<setw(95)<<"    Online Registration Portal "<<endl;
	cout<<setw(108)<<"----------------------------------------------------------\n";
	string consumername,password,cnic,email;
	string  consumerno;		 
	int type;
	string adress;
	ofstream onfile;
	onfile.open("huzaifa.csv", std::ios_base::app); 			// ios_base:: app for saving data of multi users means append
	cout<<"\n\n";
	cout<<setw(85)<<" Consumer Name. ";
	cin.ignore();      // clear character from input buffer 
	getline(cin,consumername);
	cout<<"\n";
		cout<<setw(83)<<" Consumer No. ";
	cin>>consumerno;
		cout<<"\n";
	cout<<setw(78)<<" Adress: ";
	cin.ignore();
	getline(cin,adress);
		cout<<"\n";
    cout<<setw(85)<<" Enter Email ID ";
     cin>>email;
    	cout<<"\n";
	cout<<setw(84)<<" Set Password: ";
	cin>>password;
		cout<<"\n";
	cout<<setw(79)<<" CNIC No. ";
	cin>>cnic;
		cout<<"\n";
     cout<<setw(88)<<"  Connection Type.."<<endl;
	cout<<setw(85)<<" 1: Commercial "<<endl;
	cout<<setw(79)<<" 2: Home "<<endl;
		cout<<"\n";
	cout<<setw(83)<<" Enter type: ";
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
			case 2:;
		onfile<<"Home"<<",";break;	
		}
		cout<<setw(107)<<"--------------- Registered sucessful------------------ \n"<<endl;
		}
		else{
			int in;
			cout<<"\n\n";
			cout<<setw(92)<<" Sorry Not registered. try again "<<endl;
			cout<<"\n";
			cout<<setw(92)<<" Enter 0 for Register "<<endl;
			cout<<setw(88)<<" Enter 1 for exit "<<endl;
			cout<<"\n";
			cout<<setw(70)<<"=>";
			cin>>in;
			switch(in)
			{
				case 0:
				Register();
				break;
				case 1:
				_exit();
				break;
			}
		}
		 time_t now = time(0); // get current date and time   
    tm* ltm = localtime(&now);
	  onfile<< 1900 + ltm->tm_year << "-"; // print the year  
    onfile<< 1 + ltm->tm_mon <<"-"; // print month number  
    onfile<< ltm->tm_mday << endl;  
	onfile.close();
	log_exit();
}
void login()
{
	system("cls");
	string consumername,password;
	string consumer;
	string consumerno;
	cout<<"\n\n\n\n\n\n\n   ";
	cout<<setw(60);
	 cout<<setw(102)<<"----------------------------------------------------"<<endl<<endl;
    cout<<setw(100)<<"                  Welcome to Login Page             "<<endl;
    cout<<setw(100)<<"\t   ----------------------------------------------------"<<endl<<endl;
		cout<<setw(60);
	cout<<setw(60)<<" Enter consumer No: ";
	cin>>consumerno;
	ifstream infile;
	string line ="";
	infile.open("huzaifa.csv" ,ios_base::app);
	string temp_data[30];
	int i=0;
	while(getline(infile, line)){
		stringstream word(line);
		i=0;
		while(getline(word,temp_data[i],',')){
				 i++;
			}
		if(consumerno == temp_data[2]){
			for(int k=0;k<30;k++)
	        {
	             data[k]=temp_data[k];
	        }
		}
	}
		if(consumerno == data[2]){
		cout<<"\n\n"<<setw(115)<<"  -------------------------LOGIN successful--------------------------------\n";
		cout<<"\n\n";
			login_status=1;
		system("cls");
		cout<<"\n\n\n";
		cout<<setw(108)<<"----------------------------------------------------------\n";
    	cout<<setw(85)<<" |  Details  |"<<endl;
     	cout<<setw(108)<<"----------------------------------------------------------\n";
     	cout<<setw(70)<<" Name: "<<data[0]<<endl<<endl<<endl;       // consumer name
		cout<<setw(73)<<" Address: "<<data[3]<<endl<<endl<<endl;
		cout<<setw(81)<<" Consumer`s CNIC: "<<data[5]<<endl<<endl<<endl;
		 
    stringstream word1(data[i-1]);
		int j=0;		
				// stringstream is used to extract numeric values from string
		while(getline(word1,reading[j],'-')){
			 j++;
		}
			if(reading[1] == "1"){
				cout<<setw(75)<<" Last Paid: "<<" Jan-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "2"){
				cout<<setw(75)<<" Last Paid: "<<" Feb-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "3"){
				cout<<setw(75)<<" Last Paid: "<<" March-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "4"){
				cout<<setw(75)<<" Last Paid: "<<" April-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "5"){
				cout<<setw(75)<<" Last Paid: "<<" May-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "6"){
				cout<<setw(75)<<" Last Paid: "<<" June-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "7"){
				cout<<setw(75)<<" Last Paid: "<<" July-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "8"){
				cout<<setw(75)<<" Last Paid: "<<" Aug-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "9"){
				cout<<setw(75)<<" Last Paid: "<<" Sept-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "10"){
				cout<<setw(75)<<" Last Paid: "<<" Oct-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "11"){
				cout<<setw(75)<<" Last Paid: "<<" Nov-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
			else	 if(reading[1] == "12"){
				cout<<setw(75)<<" Last Paid: "<<" Dec-"<<reading[0]<<"-"<<reading[2]<<endl<<endl<<endl;}
		
			 stringstream word2(data[i-2]);
			 	int k=0;
			 	while(getline(word2,reading[k],'-')){
			 k++;
			 }
			 
		cout<<setw(104)<<"----------------------------------------------------\n";
		if(i>8){
		cout<<i<<endl;
		cout<<setw(82)<<" Previous reading: "<<setw(2)<<reading[0]<<"\n\n\n";
		cout<<setw(81)<<" Current reading: "<<setw(2)<<reading[1]<<"\n\n\n";
		cout<<setw(84)<<" Reading difference: "<<setw(2)<<reading[2]<<"\n\n\n";
		cout<<setw(79)<<" Gas consumed:  "<<reading[3]<<" Rs/-"<<"\n\n\n";
		cout<<setw(71)<<" MMBTU: "<<reading[4]<<"\n\n\n";
		cout<<setw(83)<<" Meter rent: 40 Rs/-"<<"\n\n\n";
		cout<<setw(78)<<" GST: 900 Rs/- "<<"\n\n\n";
		cout<<setw(82)<<" Total Bill  = "<<reading[5]<<" Rs/-\n\n\n";
		int pay;
	cout<<setw(50)<<" Enter 1 for PayBill \n";
    cout<<setw(48)<<" Enter 0 for Exit \n\n";
    cout<<setw(31)<<"=>";
	cin>>pay;
	switch(pay)
	{

		case 1:
		paybill();	
		break;	
		case 0:
		_exit();
		break;			
	}
		
		}else{
		cout<<setw(81)<<" Current reading: "<<setw(2)<<"0"<<"\n\n\n";
		cout<<setw(104)<<" Bill will be updated by the end of this month. "<<setw(2)<<"\n\n\n";	
		}
	}
	if(login_status==0){
	cout<<setw(81)<<"\n Invalid username or password \n";
	}
}
	void _exit()
	{   	
		HWND consoleWindow = GetConsoleWindow();          // closing console window 
    PostMessage(consoleWindow, WM_CLOSE, 0, 0);
	}
 void _case()
 {
 	int choice;
 	cout<<setw(90)<<"=> Enter your choice: ";
 	cin>>choice;
 	switch(choice)
 	{ 
 	    case 0:
 	    	
 	    	 _exit();
 	    	break;
 		case 1:
 			Register();
 			break;
 		case 2:
 		login();
		 break;	
		case 3:
			paybill();
		break;
 		 }
		  }	  
void date()
{
		time_t now = time(0); // get current date and time   
    tm* ltm = localtime(&now);
	 1900 + ltm->tm_year ; // print the year  
     1 + ltm->tm_mon ; // print month number  
     ltm->tm_mday ;  
	  }	  
 void paybill()
 {
 	system("cls");
 	string cnic;
 	string consumerno;
	 float creading,preading,GCV=1041.00,difference;
	 float hm3,mmbtu;
	 int consumed_price, meterRent=40 ,GST = 900;
	 int totalbill;
	 int i=0;
	 	ifstream infile;
	string line ="";
	infile.open("huzaifa.csv" ,ios_base::app);
	 	string temp_data[30];
	while(getline(infile, line)){
		stringstream word(line);
		i=0;
		while(getline(word,temp_data[i],',')){
				 i++;
			}
		if(consumerno == temp_data[2]){
			for(int k=0;k<30;k++)
	        {
	             data[k]=temp_data[k];
	        }
		}
	}
	  stringstream word1(data[i-1]);
		int j=0;		
		
				// stringstream is used to extract numeric values from string
		while(getline(word1,reading[j],'-')){
			 j++;
		}
		reading[0]=preading;
		reading[1]=creading;
		reading[2]=difference;
		cout<<setw(108)<<"----------------------------------------------------------\n";
    	cout<<setw(85)<<" |  Details  |"<<endl;
     	cout<<setw(108)<<"----------------------------------------------------------\n";
     	cout<<setw(85)<<" Enter CNIC: ";
 	cin>>cnic;	 
 	difference=creading-preading;
 	hm3=difference/100000.00;
 	mmbtu= (hm3*GCV)/281.7385;
 	if(mmbtu< 0.25){
 		consumed_price=300;
	 }
   else	if(mmbtu< 0.60){
 		consumed_price=600;
	 }
 	 else	if(mmbtu< 1){
 		consumed_price=1000;
	 }
	  else	if(mmbtu< 1.5){
 		consumed_price=1200;
	 }
	  else	if(mmbtu< 2){
 		consumed_price=1600;
	 }
 	 else	if(mmbtu< 3){
 		consumed_price=3000;
	 }
	  else	if(mmbtu< 4){
 		consumed_price=3500;
	 }
 	 else	if(mmbtu> 4){
 		consumed_price=4000;
	 }
	totalbill= consumed_price+meterRent+GST;
 	cout<<setw(80)<<" Total Bill is "<<totalbill<<" Rs/-\n\n "<<endl;
	ofstream onfile;
 	onfile.open("huzaifa.csv",ios_base::app);
	onfile<<data[0]<<",";
	onfile<<data[1]<<",";
	onfile<<data[2]<<",";
	onfile<<data[3]<<",";
	onfile<<data[4]<<",";
	onfile<<cnic<<",";
	onfile<<preading<<"-";
	onfile<<creading <<"-";
     onfile<<difference<<"-";
     onfile<<consumed_price<<"-";
	onfile<<mmbtu<<"-";
	onfile<<totalbill<<",";
	time_t now = time(0); // get current date and time   
    tm* ltm = localtime(&now);
	  onfile<< 1900 + ltm->tm_year << "-"; // print the year  
    onfile<< 1 + ltm->tm_mon <<"-"; // print month number  
    onfile<< ltm->tm_mday << endl;  
	cout<<setw(100)<<" ----------------BILL PAYED-----------------\n ";
	cout<<setw(80)<<" Enter 0 for exit:\n ";
	int _ext;
	cin>>_ext;
	switch(_ext)
	{
		case 0:
		_exit();
	}
}
int main()
{
	 ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);	
	welcome();
	menu();
	_case();
}




