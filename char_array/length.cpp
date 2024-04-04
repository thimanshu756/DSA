#include<iostream>

using namespace std;

int findlength(char name[]){
int count;
int i;
while (name[i]!='\0')
{
    i++;
    count++;
}
cout<<"The length is :"<<count<<endl;
return count;
}

int main(){


char name[100] = "Himanshu";

findlength(name);




return 0;
}