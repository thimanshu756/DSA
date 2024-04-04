#include<iostream>

using namespace std;
class animal{
    public:
    int val;
    animal(){
        cout<<"animal const called"<<endl;

    }
    ~animal(){
        cout<<"animal dest called :"<<endl;
    }
};
class horse : public animal{
    public:
    int horseval;

    horse(){
        cout<<"horse const called"<<endl;
    }
    ~horse(){
        cout<<"horse dest called"<<endl;
    }
};

int main(){

int rows,col;
cout <<"Enter the no of rows you want in array :";
cin>>rows;
cout <<"Enter the no of col you want in array :";
cin>>col;
int arr[rows][col];
for (int i = 0; i < rows; i++)
{
for (int j= 0; j < col; j++)
{
   cin>>arr[i][j];
}
}




    return 0;
}