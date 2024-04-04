#include<iostream>

using namespace std;

class checknum{
    public:
  int val;

  void operator+(checknum &obj2){
    int value1= this->val;
    int value2 = obj2.val;
    int ans= value1%value2;
    cout<<ans<<endl;
  }
};

int main(){

checknum value;
checknum value2;


value.val=8;
value2.val=3;

value+value2;

    return 0;
}