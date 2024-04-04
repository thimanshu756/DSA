#include <iostream>
using namespace std;

int Search_firstOcc(int arr[],int size,int target){

int start=0;
int end= size-1;
int mid = start + (end-start)/2;
int index;
while(start<=end){
    
    int element= arr[mid];
    if (arr[mid]==target)
    {
    index = mid;
    // search in left
    end=mid-1;
    }
    else if (target < element)
    {
    // search in left
    end=mid-1;
    }
    
    else if (target > element)
    {
    // search in right
    start=mid+1;
    }
    mid = start +(end-start)/2;
    } 
    return index;
}

int main(){


    int arr[] = {33,36,46,46,46,70,80,99};
    int size = 8;

    int indexOftarget = Search_firstOcc(arr, size, 46);

    if (indexOftarget == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at " << indexOftarget << " index " << endl;
    }



    return 0;
}