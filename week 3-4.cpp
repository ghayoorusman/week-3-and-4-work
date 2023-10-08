Week 3 Programming day

#include<iostream>
using namespace std;
main()
{
int n,sum;
cout<<"Enter the number of sides of thr polygon: ";
cin>>n;
cout<<"the sum of interval angle of a " <<n<< "sided polygon is: ";
sum=(n-2)*180;
cout<<sum;
}



#include<iostream>
using namespace std;
main()
{
int min;
float fps;
float totl;
cout<<"number of minutes: ";
cin>>min;
cout<<"frame per second: ";
cin>>fps;
cout<<"total number of frames: ";
totl=min*60*fps;
cout<<totl;
}


#include<iostream>
using namespace std;
main()
{
int initials,finals,accerelations,times;
cout<<"enter initial velocity (m/s): ";
cin>>initials;
cout<<"enter acceleration (m/s^2): ";
cin>>accerelations;
cout<<"enter time(s): ";
cin>>times;
cout<<"final velocity (m/s): ";
finals=(accerelations*times)+initials;
cout<<finals;
}



#include<iostream>
using namespace std;
main()
{
float i,p,imposters;
cout<<"enter imposter count: ";
cin>>i;
cout<<"enter player count: ";
cin>>p;
cout<< "change of being an imposter: ";
imposters=100*(i/p);
cout<<imposters;
}


#include<iostream>
using namespace std;
main()
{
string names;
float targets;
int day;
cout<<"enter the name of person: ";
cin>>names;
cout<<"enter the target weight loss in kg: ";
cin>>targets;
day=targets*15;
cout<<"amir will need" <<day<< " days to lose " <<targets << "kg by folloeing docter advice";
}



#include<iostream>
using namespace std;
main()
{
int sizeofbag,costofbag,areas,costoffertilizer,costoffertilizing;
cout<<"enter size of the fertilizer bad in pounds: ";
cin>>sizeofbag;
cout<<"enter the cost of bag: ";
cin>>costofbag;
cout<<"enter the area in square feet that can covered by the bag: ";
cin>>areas;
cout<<"cost of fertiizer per pound: ";
costoffertilizer=costofbag/sizeofbag;
cout<<costoffertilizer << endl;
cout<<"cost of fertilizing per square foot: ";
costoffertilizing=sizeofbag*areas;
cout<<costoffertilizing;
}


#include<iostream>
using namespace std;
main()
{
string movie_name;
int adult_price,sold1,child_price,sold2,donation;
int total_income,remaining_price;
float charity_price;
cout<< "enter the movie name: ";
cin>>movie_name;
cout<<"enter the adult ticket price: ";
cin>>adult_price;
cout<<"enter the no of adult ticket sold: ";
cin>>sold1;
cout<<"enter the child ticket price: ";
cin>>child_price;
cout<<"enter the no. of child ticket sold: ";
cin>>sold2;
cout<<"enter the percentage of charity:";
cin>>donation;
cout<<"total amount generated from ticket sales: ";
total_income=(adult_price*sold1)+(child_price*sold2);
cout<<total_income <<endl;
cout<<"charity price(" <<donation<< "): ";
charity_price= total_income*donation/100 ;
cout<<charity_price << endl;
cout<<"remaing amout after donation: ";
remaining_price=(total_income)-(charity_price);
cout<<remaining_price;
}



#include<iostream>
using namespace std;
main()
{
float nv,mf,incoin,inrp;
int kv,kf;
cout<< "enter vegetable price per kg(coins): ";
cin>>nv;
cout<< "enter fruit price per kg(coins): ";
cin>>mf;
cout<< "enter total kg of vegetable: ";
cin>>kv;
cout<< "enter total kf of fruits: ";
cin>>kf;
cout<<"total earning in rupees: ";
incoin=(nv*kv)+(mf*kf);
inrp= incoin/1.94;
cout<<inrp;
}



#include<iostream>
using namespace std;
main()
{
int a,b,c,d,e,f,g,h,sums;
cout<<"enter 4-digit number: ";
cin>>a;
b=a%10;
c=a/10;
d=c%10;
e=c%10;
f=e%10;
g=e%10;
h=g%10;
cout<<"sum of indivisual numbers: ";
sums=b+d+f+h;
cout<<sums;
}



#include<iostream>
using namespace std;
main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,result;
cout<<"number1: ";
cin>>a;
cout<<"number2: ";
cin>>b;
cout<<"number3: ";
cin>>c;
cout<<"number4: ";
cin>>d;
cout<<"number5: ";
cin>>e;
cout<<"number6: ";
cin>>f;
cout<<"number7: ";
cin>>g;
cout<<"number8: ";
cin>>h;
cout<<"number9: ";
cin>>i;
cout<<"number10: ";
cin>>j;
cout<<"number11: ";
cin>>k;
cout<<"number12: ";
cin>>l;
cout<<"number13: ";
cin>>m;
cout<<"number14: ";
cin>>n;
cout<<"number15: ";
cin>>o;
cout<<"the final result is: ";
result=(a+b+c+d+e)+(f*g*h*i*j)-(k+l+m+n+o);
cout<<result;
}




#include<iostream>
using namespace std;
main()
{
int age,moves,avg;
cout<<"enter the person's age: ";
cin>>age;
cout<<"enter the no. of times they moved: ";
cin>>moves;
cout<<"average no. of years lived in the same house: ";
avg=age/(moves+1);
cout<<avg;
}


#include<iostream>
using namespace std;
main()
{
int n,w,h,walls;
cout<<"no. of square meter: ";
cin>>n;
cout<<"widht of wall: ";
cin>>w;
cout<<"height of wall: ";
cin>>h;
cout<<"no. of wall you can paint: ";
walls=n/(w*h);
cout<<walls;
}



Week3 programmng lab


#include<iostream>
using namespace std;
main()
{
int year;
int day;
cout<<"enter your age in years: ";
cin>>year;
cout<<"your age in days is approximately ";
day=year*365*24*3600;
cout<<day <<"days.";
}



#include<iostream>
using namespace std;
main()
{
string name;
float ecat;
float matric;
float intermediate;
float aggregate;
float final_aggregate;
cout<<"enter the student's name: ";
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
cin>>matric;
cout<<"enter intermediate marks (out of 550): ";
cin>>intermediate;
cout<<"enter Ecat marks (out of 400): ";
cin>>ecat;
cout<<"aggregate score for "<< name <<" in uet is: ";
aggregate=(ecat/400 *0.5)+(matric/1100 *0.1)+(intermediate/550 *0.4);
final_aggregate=aggregate*100;
cout<<final_aggregate<<"%";
}



#include<iostream>
using namespace std;
main()
{
string team;
int win,lose,draw,point;
cout<<"enter the name of the cricket team: ";
cin>>team;
cout<<"Enter the number of wins: ";
cin>>win;
cout<<"enter the number of draws: ";
cin>>win;
cout<<"enter the number of losses: ";
cin>>lose;
cout<<team<< "has obtained "<< point <<"points in the Asia cup tournament.";
cout<<"the power is "<<power<<" watts."
}




#include<iostream>
using namespace std;
main()
{
int charge;
float time;
float current;
cout<<"Enter the charge(Q) in Coloumb..";
cin>>charge;
cout<<"Enter the time (T) in seconds..";
cin>>time;
cout<<"The current(I) is..";
current=charge/time;
cout<<current;
}


#include <iostream>
using namespace std;
main()
{ 
int onedollar = 315;
int entervalue;
int rupee;
cout<<"entervalue";
cin>>entervalue;
rupee=entervalue*onedollar;
cout<<rupee;
}


#include<iostream>
using namespace std;
main()
{
int hour;
int sec;
cout<< "enter the numbe of hours: ";
cin>>hour;
cout <<hour << "hours is equivalent to " << sec<<" seconds.";
sec=hour*3600;
}



#include<iostream>
using namespace std;
main()
{
int kg;
int pound;
cout<<"enter weight in pound..";
cin>>pound;
cout<<"your weight in kg is..";
kg=pound*0.45;
cout<<kg;
}



#include<iostream>
using namespace std;
main()
{
float mb;
float kb;
cout << "enter the size in megabytes (MB): ";
cin>>mb;
cout<<mb<<" mb is equivalent to " << kb << " bits.";
kb=8000000*mb;
}



#include<iostream>
using namespace std;
main()
{
float voltage,current,power;
cout<<"Enter voltage (in volts): ";
cin>>voltage;
cout<<"enter current (in amperes): ";
cin>>current;

power=voltage*current;
cout<<"the power is "<<power<<" watts.";

}


#include<iostream>
using namespace std;
main()
{
int lenght;
int width;
int area;
cout<<"enter lenght of rectangular..";
cin>>lenght;
cout<<"enter width of rectangular..";
cin>>width;
cout<<"area of rectangular is..";
area=lenght*width;
cout<<area;
}



#include<iostream>
using namespace std;
main()
{
string name;
int rollno;
float aggregate;
char section;
cout<<"enter your name";
cin>>name;
cout<<"enter your roll no";
cin>>rollno;
cout<<"enter your aggregate";
cin>>aggregate;
cout<<"enter your section";
cin>>section;
cout<<"student information" << endl;
cout<<name << endl;
cout<<rollno << endl;
cout<< aggregate << endl;
cout<<section << endl;
}