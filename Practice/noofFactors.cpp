#include <iostream>

using namespace std;

int checkfactors(int num){
    int count=0;
    vector<int>ans;
for (int i = 1; i <= num; i++)
{
    if (num%i==0)
    {
        count ++;
        ans.push_back(i);
    }
    cout<<"The factors are :" <<endl;
    for (int i = 0; i < ans.size(); i++)
    {
    cout<<ans[i]<<" ";
    }
    cout<<endl;

}
return count;
}
int main(){

int number;

cout<<"Enter the number :";
cin>>number;
cout<<endl;


int ans= checkfactors(number);

cout <<"The no of factors are :"<<ans;

}