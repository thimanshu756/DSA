#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the no of rows :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //  printing spaces
        for (int s = 0; s<= n-i+1 ; s++)
        {
            cout <<" ";
        }
        //stars
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
         cout<< endl;
    }
    // // printing the reverse
    for (int i = 0; i < n+1; i++)
    {
        for (int s = 0; s < i+3 ; s++)
        {
            cout <<" ";
        }
        for (int j = n; j >i; j--)
        {
            cout<<"* ";
        }
        cout<< endl;
    }
    
  
}