#include<iostream>

using namespace std;

bool checkpalendome(char name[]){

    int i=0;
    int length= strlen(name);
    int j= length-1;

    while (i<=j)
    {
        if (name[i]!=name[j]){
            return false;
        }
        else{
            i++;
            j--;
        }

    }
    return true;
}

int main(){

char name[100]= "lolo";

int ans =checkpalendome(name);

cout<<ans<<endl;
    return 0;
}