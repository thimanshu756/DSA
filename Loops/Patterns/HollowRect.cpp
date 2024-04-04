#include <iostream>
using namespace std;
int main(){
  int ColNum , RowNum;
  cout << "Enter the number of Rows: \n ";
  cin >> RowNum;
  cout<< "Enter the number of colums : \n";
  cin >> ColNum;
  for(int row=0;row<RowNum;row++){
  if(row==0 || row==RowNum-1){
      for(int col=0;col<ColNum;col++)
      {
          cout << "* ";
      }
  }
    else{
        cout << "* ";
        for(int i=0;i<ColNum-2;i=i+1){
            cout<< "  ";
        }
        cout <<"* ";
    }
      cout << endl;
  }
}