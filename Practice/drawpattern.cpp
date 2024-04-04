#include<iostream>

using namespace std;

void drawpattern(int num){

for (int i = 1; i <= num; i++)
{
 for (int j = 1; j <= i; j++)
 {
    cout<<j<<" ";
 }
 cout<<endl;
}
cout<<endl;

}

int main(){


drawpattern(4);



    return 0;
}