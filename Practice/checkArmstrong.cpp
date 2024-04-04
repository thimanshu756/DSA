#include<iostream>

using namespace std;

bool checkarmstrong(int n){

int sum=0;
int temp=n;
int x;
while (n>0)
{
    x=n%10;
    sum=sum+(x*x*x);
    n=n/10;
}

if (sum==temp)
{
    return true;
}else{
    return false;
}
}



int main(){

int number;

cout<<"Enter the number:";
cin>>number;
cout<<endl;

if (checkarmstrong(number))
{
    cout<<(checkarmstrong(number));
}else
{
    cout<<"Nope not an armstrong no";
}





    return 0;
}