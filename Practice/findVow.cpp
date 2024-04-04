#include<iostream>

using namespace std;

int findvowel(string name){
int count=0;
string vowel="aeiouAEIOU";

for ( char n : name)
{
    if (vowel.find(n)!=string::npos)
    {
        count++;
    }
    
}
return count;
};
int main(){

string name;

cout<<"Enter the string :"<<endl;

cin>>name;

int no=findvowel(name);

cout<<"The no of vowels are :"<<no;




    return 0;
}