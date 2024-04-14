#include<iostream>
#include<stack>
#include <vector>

using namespace std;

vector<int> prevSmaller(vector<int> &input){
    stack<int> st;
    st.push(-1);
    vector<int>ans(input.size());
    for (int i = 0; i <input.size() ; i++)
    {
        int curr= input[i];
        while (st.top()>=curr)
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
        return ans;
}


int main(){
    // cout<<"reached1";
  vector<int> input;
  input.push_back(2);
  input.push_back(1);
  input.push_back(4);
  input.push_back(3);

  vector<int> ans1 = prevSmaller(input);

  cout << "Printing ans1" << endl;

  for(int i=0; i<input.size(); i++) {
          cout << ans1[i] << " ";
  }cout << endl;
    return 0;
}