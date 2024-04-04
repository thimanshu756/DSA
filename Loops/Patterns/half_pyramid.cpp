#include<iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter thee no of rows :";
    cin >> rows;
    for (int i = 0; i < rows+1; i++)
    {
        for ( int j = 0; j < i; j++) 
        {
            cout << "*";
        }
        cout << "\n";
    }
    





}