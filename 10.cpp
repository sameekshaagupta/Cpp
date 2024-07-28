#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    //{2}
    l.emplace_back(4);
    //{2,4}
    l.push_front(5);
    //{5,2,4}
    l.emplace_front(4,5);
}