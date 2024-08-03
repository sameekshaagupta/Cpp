#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);//{3,1,2}
    dq.emplace_front(); //{1,2}
}