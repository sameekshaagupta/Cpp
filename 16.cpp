#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);//{1,2,4} FIFO
    q.back() += 5; //{1,2,9}
    cout << q.back(); //9
    cout << q.front(); //1
    q.pop();//1 out
    cout << q.front(); //2 e.i{2,9}
}