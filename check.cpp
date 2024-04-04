#include<iostream>
#include<vector>
using namespace std;

bool IsArmstrong(int i){

        int sum = 0;
        while(i>0)
        {
            int a = i%10;
            sum = sum + (a*a*a);
            a = a/10;
        }
        return sum==i;
}
int main(){

    int n;
    cout<<"Enter the no:"<<endl;
    cin >> n;
    vector<int> ans;

    int i = 153;
    int count
    while(true && i<410)
    {
        if(IsArmstrong(i))
        {
            ans.push_back(i);
        }
       
        i++;
    }

    cout << 1 << " ";

    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}