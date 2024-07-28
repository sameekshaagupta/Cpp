#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    cout << s.size() << " ";
    cout << s.empty() << " ";

    stack<int> st1, st2;
    st1.swap(st2);
}