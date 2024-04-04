#include <iostream>

using namespace std;

int search(int arr[], int size,int target ){

for (int i = 0; i < size; i++)
{
    if (arr[i]==target)
    {
      return i;
      break;
    }
    else{
        return 0;
    }
}
}

int main(){

int arr[]= {1,7,5,3,2,8,0,2};

int target=8;
int size=8;
int index = search(arr,size,target);

if (index==0)
{
 cout<<"Element not found"<<index;
}else{
    cout<<"Element found at :"<<index<<endl;
}

    return 0;
}