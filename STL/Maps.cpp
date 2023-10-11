#include<bits/stdc++.h>
using namespace std;
void expalinMaps(){

    //stores unique key in sorted order

    //declartion of maps
    map<int, int> m;

    map<int, pair<int, int>> m;

    map<pair<int, int>, int> m;

    //assign values
    m[1]=2;
    m.emplace({3,1});
    m.insert({2,4});

    m[{2,3}] = 10;

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //accessing through keys
    cout<<m[2];
    cout<<m[4]; //if element not found then NULL or 0 is returned

    auto it=m.find(3);
    cout<<*(it).second;  //to acess the value

    auto it=m.lower_bound(2);

    auto it= m.upper_bound(3);

    //erase, swap, size, empty are same as above
}


//Multi-Maps
void expalinMM(){
    //everything same as map, but stores duplicate keys
    //only m[key] can not use
}
int main(){

}