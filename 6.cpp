#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5,100);
    //initialization
    // instead of vector<int>::iterator we can use auto
    // auto is a datatype that will asssign according to the data
    
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
}