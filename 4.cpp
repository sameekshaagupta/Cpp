#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{5,10};
    vector<int>::iterator it = v.end();
    //it will point to the memory address after the last element of the vector
    vector<int>::reverse_iterator it = v.rend();
    //it will point to the memory address before the first element of the vector
    vector<int>::reverse_iterator it = v.rbegin();
    //it will point to the memory address of the last element of the vector
    return 0;
}