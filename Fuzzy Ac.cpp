#include <iostream>
#include <stdio.h>
#include <sstream>
#include <conio.h>
#include <string>
#include <fstream>>

using namespace std;

int main(){
	float t1,t2,t3;
	char judul,c1,c2,c3;
		float set;
		float s1, s2;
		float tmax;
		float tmin;
	
	system("cls");
 	ifstream file;
 	file.open("tampilan.txt");
 	while(!file.eof())
 	{
     file.get(judul);
     cout<<judul;
 	}
 	file.close();
	

	
	cout<<"\n Masukkan T1 = ";
	cin>>t1;
	
		if(t1<12){
			set = 1;
			c1 = 'R';
		}
		else if(t1>=12 && t1<16){
			tmax=16;
			tmin=12;
			
			s1=(tmax-t1)/(tmax-tmin);
			s2=(t1-tmin)/(tmax-tmin);
			
			if(s1<s2){
				c1='R';
			}
			else if(s1>s2){
				c1='S';
			}
			else if(s1=s2){
				c1='R';
			}		
		}
		else if(t1==16){
			set=1;
			c1='S';
		}
		else if(t1>=16 && t1<20){
			tmax=20;
			tmin=16;
			
			s1=(tmax-t1)/(tmax-tmin);
			s2=(t1-tmin)/(tmax-tmin);
			
			if(s1<s2){
				c1='S';
			}
			else if(s1>s2){
				c1='T';
			}
			else if(s1=s2){
				c1='S';
			}	
		}
		else if(t1>=20){
			c1='T';
		}
	cout<<" Masukkan T2 = ";
	cin>>t2;
	
		if(t2<12){
			set = 1;
			c2 = 'R';
		}
		else if(t2>=12 && t2<16){
			tmax=16;
			tmin=12;
			
			s1=(tmax-t2)/(tmax-tmin);
			s2=(t2-tmin)/(tmax-tmin);
			
			if(s1<s2){
				c2='R';
			}
			else if(s1>s2){
				c2='S';
			}
			else if(s1=s2){
				c2='R';
			}			
		}
		else if(t2==16){
			set = 1;
			c2 = 'S';
		}
		else if(t2>=16 && t2<20){
			tmax=20;
			tmin=16;
			
			s1=(tmax-t2)/(tmax-tmin);
			s2=(t2-tmin)/(tmax-tmin);
			
			if(s1<s2){
				c2='S';
			}
			else if(s1>s2){
				c2='T';
			}
				else if(s1=s2){
				c2='S';
			}
		}
		else if(t2>=20){
			c2='T';
		}
	cout<<" Masukkan T3 = ";
	cin>>t3;
	
		if(t3<12){
			set = 1;
			c3 = 'R';
		}
		else if(t3>=12 && t3<16){
			tmax=16;
			tmin=12;
			
			s1=(tmax-t3)/(tmax-tmin);
			s2=(t3-tmin)/(tmax-tmin);
			
			if(s1<s2){
				c3='R';
			}
			else if(s1>s2){
				c3='S';
			}
			else if(s1=s2){
				c3='R';
			}		
		}
		else if(t3==16){
			set=1;
			c3='S';
		}
		else if(t3>=16 && t3<20){
			tmax=20;
			tmin=16;
			
			s1=(tmax-t3)/(tmax-tmin);
			s2=(t3-tmin)/(tmax-tmin);
			
			if(s1<s2){
				c3='S';
			}
			else if(s1>s2){
				c3='T';
			}
				else if(s1=s2){
				c3='S';
			}
		}
		else if(t3>=20){
			set=1;
			c3='T';
		}
	
	cout<<"\nOutput AC : ";
	cout<<c1<<" "<<c2<<" "<<c3<<endl;
	
	
	if(c1=='R'){
		if(c2=='R'){
			if(c3=='R'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Naik";
			}
		}
		if(c2=='S'){
			if(c3=='R'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Tetap";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Tetap";
			}
		}
		if(c2=='T'){
			if(c3=='R'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Tetap";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Turun";
			}
		}
	}
	
	
	if(c1=='S'){
		if(c2=='R'){
			if(c3=='R'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Tetap";
			}
		}
		if(c2=='S'){
			if(c3=='R'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Tetap";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Turun";
			}
		}
		if(c2=='T'){
			if(c3=='R'){
				cout<<"Suhu AC Tetap";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Turun";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Turun";
			}
		}
	}
	

	if(c1=='T'){
		if(c2=='R'){
			if(c3=='R'){
				cout<<"Suhu AC Naik";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Tetap";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Turun";
			}
		}
		if(c2=='S'){
			if(c3=='R'){
				cout<<"Suhu AC Tetap";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Tetap";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Turun";
			}
		}
		if(c2=='T'){
			if(c3=='R'){
				cout<<"Suhu AC Turun";
			}
			else if(c3=='S'){
				cout<<"Suhu AC Turun";
			}
			else if(c3=='T'){
				cout<<"Suhu AC Turun";
			}
		}
	}
	
	getch();
}

