#include <iostream>
using namespace std;

class sum{
    private:

    int priv;

    public :
    int val;

void operator+(sum &obj2){

int value1 =this->val;
int value2 = obj2.val;

cout<<"Bhaiya jii +operator call hua h :"<<endl;
cout<<value1*value2;


};

} ;


int main() {

// sum obj1;

// sum obj2;

// obj1.val=3;
// obj2.val=5;



// obj1+obj2;


return 0;
}