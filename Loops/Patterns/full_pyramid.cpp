#include <iostream>
using namespace std ;
int main(){
    int rows;
    cout << "Enter the number of rows :";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        // for printing space
        for (int s = 0; s < rows - i+1; s++)
        {
            cout <<" ";
        }
        // printion stars
        for (int j = 0; j <i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}