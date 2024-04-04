#include<iostream>

using namespace std;

int main(){
int rows,col;

cout<<"Enter the no of rows";
cin>>rows;
cout<<endl;
cout<<"Enter the no of col:";
cin>>col;

int arr[rows][col];
int brr[rows][col];

cout<<"Taking input of 1st matrix :"<<endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}
cout<<"Taking input of 2nd matrix :"<<endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>brr[i][j];
    }
    
}
int crr[rows][col];
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        crr[i][j]=arr[i][j]+brr[i][j];
    }
    cout<<endl;
}

//printing
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
}


}