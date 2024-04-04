#include<iostream>
using namespace std ;
int main(){


    int rows;
    cout << "Enter the no of ropws :";
    cin >> rows;


  for (int i = rows; i >0 ; i--)   
    {
        for (int s=rows ;s > i; s--)
        { 
            cout<< " ";
        }
        
        for (int j = 0; j < i; j++)
        {
        cout << "* ";
        }
        cout << endl;
    }
}