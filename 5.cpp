#include<bits/stdc++.h>
using namespace std;
int main(){
    //printing of vector using for loop
    vector<int> v(5,100);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
}