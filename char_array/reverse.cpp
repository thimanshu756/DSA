#include<iostream>

using namespace std;

void reversestring(char name[]){

int length = strlen(name);
int j= length-1;
cout<<length<<endl;
int i=0;
while (i<=j)
{
   swap(name[i],name[j]); 
   i++;
   j--;
}
cout<<"The reverse string is :"<< name<<endl;
}

int main(){

    char name[100] = "Himanshu";

    reversestring(name);




    return 0;
}