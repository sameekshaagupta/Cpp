#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair <int, int> p = {1,3};
    cout << p.first << " " << p.second << " ";


    pair <int , pair<int , int>> s = {2, { 4, 5 }};
    cout << s.first << " " << s.second.first << " " << s.second.second << " ";

    pair <int, int> q[] = {{5,6},{6,7},{7,8}};
    cout << q[2].second;
}

int main(){
    explainPair();
    return 0;
}