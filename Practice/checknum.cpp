#include<iostream>

using namespace std;
class chknumber{
    public:
    chknumber(float num){
        if (num>0)
        {
           cout<<"entered number is a positive number "<<endl;
        }
        else if(num<0){
           cout<<"entered number is a negative number "<<endl;
        }
        else if(num==0){
            cout<<"0 is neutral"<<endl;
        }
        


    };
};

int main(){

chknumber num(0);







    return 0;
}