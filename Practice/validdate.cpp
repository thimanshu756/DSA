#include<iostream>

using namespace std;

class date{
public:
int day;
int month;
int year;

int setdate(int d, int m, int y){
if (validdate(d,m,y))
{
   day=d;
   month=m;
   year=y;
   return 1;
}else{
    
    cout<<"Enterd date is incorect";
    return 0;
    }
}

int getday(){
    return day;
}

int getmonth(){
    return month;
}

int getyear(){
    return year;
}

bool validdate(int d,int m,int y){


   if (y<0)
   {
    return false;
   }
   else if(m<0 || m>12){

    return false;
   }
   int maxdays=31;
   if (m==4||m==6||m==9||m==11)
   {
    maxdays=30;
   }
   else if (m==2)
   {
    maxdays=(y%4==0 &&(y%100!=0 || y%400==0))?29:28;
   }
   if (d<0 ||d>maxdays)
   {
    return false;
   }
   
return true;
}

};

int main(){
date mydate;
if (mydate.setdate(32,12,200)==1)
{
cout<<"The date enderd is :"<<mydate.getday()<<"/"<<mydate.getmonth()<<"/"<<mydate.getyear()<<" is correct";
}

    return 0;
}