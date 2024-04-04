#include<iostream>

using namespace std;

void findmissing(int arr[], int size){
int missing;
int repeat;

for (int i = 0; i < size; i++)
{
    int index= abs(arr[i]);
    if (arr[index-1]>0)
    {
        arr[index-1]*=-1;
    }
}
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>0)
        {
            missing=i+1;
            repeat=arr[i];
            cout<<"missing elem is:"<<missing<<" and repeated element is :"<<repeat<<endl;

        }
        
    }
}



int main(){


int arr[]={2,3,4,1,3};

int size= 5;

findmissing(arr,size);

    return 0;
}