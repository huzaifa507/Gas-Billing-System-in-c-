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
 int main();
 void paybill();
 void position();
 void _exit();
 void on();
 int login_status=0;
 int check=0;
 string name;
 	 string consumerno;
 	   string data[30];
void welcome()
{
	 cout<<"\n\n";
	cout<<"\n"<<setw(100)<<"Loading....\n	  \t\t"	<<setw(50);
	system("Color F0");
	char x=254;
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
	sleep(4);
//	system("cls");
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
	cout<<setw(100)<<"    Online Registration Portal "<<endl;
	cout<<setw(108)<<"----------------------------------------------------------\n";
	string consumername,password,cnic,email;
	string consumerno;
	int type;
	string adress;
	ofstream onfile;
	onfile.open("huzaifa.csv", std::ios_base::app); 
	 cout<<"\n\n";
	cout<<setw(85)<<" Consumer Name. ";
	
	cin.ignore();
	getline(cin,consumername);
	cout<<"\n";
		cout<<setw(83)<<" Consumer No. ";
	cin.ignore();
	getline(cin,consumerno);
		cout<<"\n";
	cout<<setw(78)<<" Adress: ";
	cin.ignore();
	getline(cin,adress);
		cout<<"\n";
    cout<<setw(85)<<" Enter Email ID ";
    cin.ignore();
    getline(cin,email);
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
		cout<<setw(91)<<"--------------- Registered sucessful------------------ "<<endl;
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
}
void login()
{
	system("cls");
	string consumername,password;
	string consumer;
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
		sleep(2);
		system("cls");
		cout<<"\n\n\n";
		cout<<setw(106)<<"----------------------------------------------------------\n";
    	cout<<setw(85)<<" |  Details  |"<<endl;
     	cout<<setw(108)<<"----------------------------------------------------------\n";
     	cout<<setw(70)<<" Name: "<<data[0]<<endl<<endl<<endl;       // consumer name
	cout<<setw(73)<<" Address: "<<data[3]<<endl<<endl<<endl;
	cout<<setw(81)<<" Consumer`s CNIC: "<<data[5]<<endl<<endl<<endl;
		login_status=1;
		 string reading[10];
  
 // 	if(i>7){
	  
    stringstream word1(data[i-1]);
		int j=0;		
				// stringstream is used to extract numeric values from string
		while(getline(word1,reading[j],'-')){
			 j++;
			 }
			 cout<<setw(90)<<" Bill paid of Last Month: "<<reading[1]<<endl<<endl<<endl;
			 stringstream word2(data[i-2]);
			 	int k=0;
			 	while(getline(word2,reading[k],'-')){
			 k++;
			 }
		cout<<setw(84)<<" Reading Difference: "<<setw(2)<<reading[0]<<endl<<"\n\n";
		cout<<setw(72)<<" MMBTU = "<<reading[1]<<endl<<"\n\n";
		cout<<setw(82)<<" Total Bill paid = "<<reading[2]<<" Rs/-\n\n"<<endl;
	}

   
	
	


	// Total bill paid
	if(login_status==0){
	
	cout<<"\n Invalid username or password \n";
	//	cout<<data[2];
	}
	int pay;
	cout<<setw(50)<<" Enter 0 for PayBill \n";
    cout<<setw(48)<<" Enter 1 for Exit \n\n";
    cout<<setw(31)<<"=>";
	cin>>pay;
	switch(pay)
	{
		case 0:
		paybill();		
		case 1:
		_exit();			
	}
}
	void _exit()
	{   sleep(1);
			cout<<"\n\n";
	cout<<setw(90)<<" Closing-------------"<<endl;
 	    	sleep(2);
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
 void paybill()
 {
 	string name,cnic;
	 int preading,creading,GCV=1041,difference;
	 double hm3,mmbtu;
	 int Rs, meterRent=40 ,GST = 900;
	 int totalbill;
	ifstream infile;
	string line ="";
     	cout<<" Enter CNIC: ";
 	cin>>cnic;
	infile.open("huzaifa.csv" ,ios_base::app);
		
	while(getline(infile, line)){
	int i=0;
		stringstream word(line);
			while(getline(word,data[i],',')){
				
			 i++;
			 }
	
	if( cnic==data[5]){		 
 	cout<<" Previous Reading: ";
 	cin>>preading;
 	cout<<" Current reading: ";
 	cin>>creading;
 	if(preading > creading)
 	{
 		cout<<" Please enter correct reading "<<endl;
 	 char ch;
	cout<<" Enter m or M to go main menu:  ";
	cin>>ch;
	switch(ch)
	{
		case 'm':
		case 'M':
		main();
		break;
	}
	
	 }
	 else{
	 
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

 	cout<<" Total Bill is "<<totalbill<<" Rs/- "<<endl;
 	ofstream onfile;
 	onfile.open("huzaifa.csv",ios_base::app);
 	
	
	onfile<<data[0]<<",";
	onfile<<data[1]<<",";
	onfile<<data[2]<<",";
	onfile<<data[3]<<",";
	onfile<<data[4]<<",";
	onfile<<cnic<<",";
     onfile<<difference<<"-";
	onfile<<mmbtu<<"-";
	onfile<<totalbill<<",";
	time_t now = time(0); // get current date and time   
    tm* ltm = localtime(&now);
	  onfile<< 1900 + ltm->tm_year << "-"; // print the year  
    onfile<< 1 + ltm->tm_mon <<"-"; // print month number  
    onfile<< ltm->tm_mday << endl;  
	
	
	cout<<" BILL PAYED ";
	cout<<" Press l or L to show details: ";
	char ch;
	cin>>ch;
	if(ch=='L'||ch=='l')
	login();
	check=1;	
	break;
	}
}
			 }		   

  if(check==0){
  
			 	cout<<" First Register to pay bill \n ";
			 	char choice;
			 	cout<<" Enter r or R for registration \n";
			 		cout<<" Enter e or E for exit \n ";
			 		cout<<" => ";
			 		cin>>choice;
			 		switch(choice)
			 		{
			 			case 'r':
			 				case 'R':
			 					Register();
			 					break;
			 			case 'e':
						case 'E':
						_exit();
						break;	
						 		
					 }
		  }

	
 }
int main()
{
	
	 ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
//	welcome();
//	system("cls");
	menu();
		cas();

}




