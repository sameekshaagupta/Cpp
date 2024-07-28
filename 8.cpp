#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5,10);
    v.erase(v.begin()+1);
    //{10,10,10,10} second elemnt of the vector will be deleted
    v.erase(v.begin()+2, v.begin()+4);
    // second to fourth elements will be deleted
    // v.erase(start,end)
}