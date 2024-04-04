#include<iostream>

using namespace std;

void replacespace(char name[],char symbol){

int length= strlen(name);

for (int i = 0; i <= length-1; i++)
{
    if (name[i] ==' ')
    {
        name[i]=symbol;
    }
    
};
}


int main(){

char name[100]= "Himanshu Tiwari";

  replacespace(name,'*');

cout<<"The name is :"<<name<<endl;



    return 0;
}