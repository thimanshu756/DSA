#include<iostream>
using namespace std;
int main(){
    int rows;
    cout << "enter the no of rows :";
    cin >> rows;
    for (int i = rows; i > 0; i--)
    {
        for (int  j = 1; j < i+1; j++)
        {
            cout << j ;
        }
        cout << endl ;
    }
    
}