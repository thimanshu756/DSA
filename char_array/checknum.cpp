#include<iostream>

using namespace std;

class checknum{
    public:
  checknum(int val){
    if (val==0)
    {
       cout<<"0 hu";
    }
    else if(val<0){
        cout<<"negative hu";

    }else{
        cout<<"+ve hu";

    }
    }
};

int main(){

checknum value(4);



    return 0;
}