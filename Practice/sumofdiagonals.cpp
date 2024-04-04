#include<iostream>

using namespace std;

int main(){
int m,n;
cout<<"Enter the row:";
cin>>m;
cout<<"Enter the col:";
cin>>n;
int arr[m][n];
int brr[m][n];
int sum1=0;
int sum2=0;
//taking input
cout<<"Enter the 1st matrix:";
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n; j++)
   {
    cin>>arr[i][j];
   }
   
}
cout<<"Enter the 2nd matrix:";
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n; j++)
   {
    cin>>brr[i][j];
   }
   
}
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n; j++)
   {
    if (i==j){
       sum1=sum1+arr[i][i];
    }

   }
   
}
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n; j++)
   {
        sum2=sum2+arr[i][n-i];
    
   }
   
}
cout<<"Sum of matrix A is ::"<<sum1<<"Sum of matrix B is ::"<<sum2;

    return 0;
}