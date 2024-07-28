#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5,10);
    v.insert(v.begin(),1);
    //{1,10,10,10,10,10}
    for (auto it : v){
        cout << it << " ";
    }
    v.insert(v.begin()+1, 2, 3);
    //{1,3,3,10,10,10,10,10}
    for (auto it : v){
        cout << it << " ";
    }
    vector<int> copy(2,5);
    v.insert(v.begin(), copy.begin(), copy.end());
    //{5,5,1,3,3,10,10,10,10,10}
    for (auto it : v){
        cout << it << " ";
    }

    cout << v.size();
    //size of the vector

    v.pop_back();
    //pops out the last element of the vector

    vector<int> v1(2,4);
    vector<int> v2(2,3);

    v1.swap(v2);
    //v1={3,3}, v2={4,4}
    v.clear();
    // v={}
    cout << v.empty();
    // true if vector is empty false if vector is not empty
}