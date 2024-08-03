#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(4); //{4,3,3,2,1}
    cout << st.top(); //4
    st.pop();
    cout << st.top(); //3
    cout << st.size(); //4
    cout << st.empty(); //false

    stack<int> st1, st2;
    st1.swap(st2);
}