//vectors are dynamic in nature hence we can always increase the size of vector(better version of array)
#include<bits/stdc++.h>
using namespace std;

void Vectors(){
    vector<int> v;
    v.push_back(1);
    //{1}
    v.emplace_back(2);
    //{1,2}

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    //by default in emplace_back it asssumes the curly braces
    //emplace_back>>push back

    vector<int> v(5,100);
    //{100,100,100,100,100}

    vector<int> v1(5);
    //{0,0,0,0,0}

    vector<int> v2(v1);
    //copy of v1

    //iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    //basically the func iterator points to the memory of location of first element
    it=it+2;
    cout << *(it) << " ";

    cout << v[0] << v.at(3);
}