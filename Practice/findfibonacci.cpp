#include<iostream>

using namespace std;
bool checkarmstrong(int x){
    int temp=x;
    int num;
   int sum=0;
while (x>0)
{
    num=x%10;
    sum=sum+(num*num*num);
    x=x/10;
}
if (sum==temp){
    return true;
}
else
{
    return false;
}

}

void findarmstrong(int no){
int count=1;
 vector<int> ans;

while (count <= no)
{

  ans.push_back(1);
  count++;

    for (int i = 2; i <= 1000; i++)
    {
        if (checkarmstrong(i)&&count<=no)
        {
            ans.push_back(i);
            count++;
        }
        
    }
}
cout<<"The armstrongno till "<<no<<"are :"<<endl;
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

}

int main(){

int x;
cout<<"Enter the no :"<<endl;
 cin>>x;

findarmstrong(x);
    return 0;
}