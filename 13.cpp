#include<bits/stdc++.h>
using namespace std;
int main(){
    // list is just like vector but it will also give front operation
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);//{3,1,2}
    ls.emplace_front(); //{1,2}
}