#include<iostream>
// #include<string.h>
using namespace std;

void  find_missing(int arr[],int size ){

    sort(arr,arr+size);
    int missing,extra;
    int index;
    for (int i = 0; i < size-1; i++)
    {
     
      if (arr[i]==arr[i+1])
      {
        missing=i+1;
        extra=arr[i+1];
      }
      
    }
    
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<"missing :"<<missing<<"extra:"<<extra;
}

int main(){

int arr[5]={1,4,5,5,2};

find_missing(arr,5);




    return 0;
}