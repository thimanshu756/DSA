#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the no of rows :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      //printing outer spaces
      for (int s = 0; s<n-(i+1); s++)
      {
        cout << " ";
      }
      // printing star
      for (int j = 1; j<=i*2+1; j++)
      {
    //    cout <<"* ";
    if (j==1 || j==i*2+1)
    {
         cout <<"* ";
    }
    else{
        cout << " ";
    }
      }
      cout << endl;
      
    }
    // lower side
    for (int i = 0; i < n; i++)
    {
       for (int s = 0; s < i; s++)
       {
        cout << "k";
       }
       // stars
       for (int j = n; j < i*2+1; j++)
       {
        if (j==0 || j==i*2+1 )
        {
            cout << "* ";
        }
        else{
            cout << " ";
        }
        cout << endl ;
       }
       
    }
    
}
