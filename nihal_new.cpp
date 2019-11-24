#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<iomanip>
using namespace std;
class smart
{
public:
	int choice;
	int ho;
	public:
	void welcomescreen();
	void login_screen();
	void hotel();
	void tourist();
	void mall();
	void tourist_a();
	void mall_a();
	void hotel_a();
	int get_value();
	
};
   void smart::welcomescreen()
{

    cout<<  endl << endl << endl<< endl;
	cout<<"        ************* SMART CITY PROJECT Bhopal ***********      "<<endl;
	cout<<"  *********** LOVELY PROFESSIONAL UNIVERSITY PUNJAB *******  "<< endl;
	cout<<"              ____________________________________________________  "<< endl;
	cout<<  endl << endl << endl<< endl;
	cout<<  endl << endl;
	cout<<"          NAME - NIHAL PATIDAR                    "<<endl;
	cout<<"              Press Enter to continue...." << endl << endl << endl << endl;
    getch();
}
void smart::login_screen(){
	char input[100];
      ifstream inFile;
      inFile.open("input.txt",ios::binary|ios::app);
      while(inFile) {
      inFile.getline(input, 100);
       cout << input << endl;}
      inFile.close();
	getch();  
}
int smart::get_value(){
	cout<<"enter your choice"<<endl;
      cin>>choice;
      return choice;
}
void smart::hotel(){  
      smart h;
	  char input[100];
      ifstream inFile;
      inFile.open("hotel.txt");
      while(inFile) {
      inFile.getline(input, 100);
      if(inFile) cout<<setw(70) << input << endl;}
      inFile.close();
      cout<<"For All Hotel Information Press 1"<<endl;
      cin>>ho;
      if(ho==1)
	   h.hotel_a();

		 }
void smart::tourist(){smart s;
	char input[100];
      ifstream inFile;
      inFile.open("Tplace.txt");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout <<setw(70)<< input << endl;}
      inFile.close();
      cout<<"For All Tourist Places Press 1"<<endl;
      cin>>ho;
      if(ho==1)
	   s.tourist_a();
}
void smart::mall(){ smart m;
	char input[100];
      ifstream inFile;
      inFile.open("mall.txt",ios::binary|ios::app);
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout<<setw(100) << input << endl;}
      inFile.close();
      cout<<"For All MALL Information Press 1"<<endl;
      cin>>ho;
      if(ho==1)
	   m.mall_a();
	
}


void smart::tourist_a(){  smart s;
		char input[100];
      ifstream inFile;
      inFile.open("Tourist.txt",ios::binary|ios::app);
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout <<setw(100)<< input << endl;}
      inFile.close();

}

void smart::mall_a(){
		char input[100];
      ifstream inFile;
      inFile.open("mll123.txt",ios::binary|ios::app);
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout <<setw(100)<< input << endl;}
      inFile.close();

}
void smart::hotel_a(){
		char input[100];
      ifstream inFile;
      inFile.open("hotel123.txt",ios::binary|ios::app);
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout <<setw(150)<< input << endl;}
      inFile.close();
	
}

int main()
{   int p=0;
	smart view;
		view.welcomescreen();
		while(1){
		view.login_screen();
		int x=view.get_value();
		switch(x){
		case 1:
	    view.hotel();
	    break;
	    case 2:
		view.tourist();
		break;
		case 3:
		view.mall();
		break;
		default:
			cout<<"WRONG CHOICE FILL"<<endl;
			break;
		}
		cout<<"if you want end this program press 0"<<endl;
		cout<<" to continoue press 1"<<endl;
		cin>>p;
		if(p==0)break;
		else
		cout<<" Again continue"<<endl;
		}
		return 0;
}
