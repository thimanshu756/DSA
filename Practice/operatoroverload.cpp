#include<iostream>

using namespace std;
class complex{

public:
int a;


 int operator+(complex &obj2){

    int value1= this->a;
    int value2= obj2.a;

    int value3= value1+value2;
    return value3;
};
 int operator-(complex &obj2){

    int value1= this->a;
    int value2= obj2.a;

    int value3= value1-value2;
    return value3;
}


};

int main(){

complex obj1,obj2;

cout<<"Enter the first no :";
cin>>obj1.a;
cout<<"Enter the second no :";
cin>>obj2.a;

cout<<"The addition are:"<<obj1+obj2<<endl;
cout<<"The substraction are:"<<obj1-obj2<<endl;

    return 0;
}