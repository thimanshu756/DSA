#include <iostream>
using namespace std;
int Binary_search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    // int mid = start + (end - start)/2;
    int mid = start + (end - start ) / 2;

    cout << "mid="<<mid;

    while (start <= end)
    { 
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            cout<<"Searching left"<<endl;
            // we have to search in left
            end = mid - 1;
        }
        else  if ( target > element){
            cout<<"Searching right"<<endl;
            // we have to search in right
            start = mid + 1 ;
        }

            mid = start + (end - start) / 2;
    }
    return -1;
// int start = 0;
//   int end = size - 1;

//   int mid = start + (end - start ) / 2;
//     cout <<"The mid elem is :"<<mid;
//   while(start <= end) {
//     int element = arr[mid];

//     if(element == target) {//element found, then return index
//       return mid;
//     }
    
//     if(target < element) {
//       //search in left
//       end = mid - 1;
//     }
//     else {
//       //search in right
//       start = mid + 1;
//     }

//     mid = start + (end - start ) / 2;

//   }

//   //element not found
//   return -1;
 }

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 8,  22, 46};
    int size = 8;

    int indexOftarget = Binary_search(arr, size, 46);

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