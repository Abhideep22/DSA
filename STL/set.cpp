//EVERYTHING happens in log(n) time
//SET
//stores UNIQUE element and SORTED order

#include<bits/stdc++.h>
using namespace std;
void explainSet(){
    set<int> s;
    s.emplace(1);   //{1}
    s.insert(2);    //{1,2}
    s.insert(2);    //{1,2}
    s.insert(4);    //{1,2,4}
    s.insert(3);    //{1,2,3,4}


    //{1,2,3,4,5}
    auto it=s.find(3);  //iterator ko return krega jo 3 ko point kr rha hoga

    //{1,2,3,4,5}
    auto it=s.find(6);  //agr nhi milega tho end() ko point kr dega

    //{1,2,5}
    s.erase(5); //erase 5 & take logrithmic time    //{1,2}

    int count=s.count(1)    //agr mil gya tho 1 return krega varna 0 return kr dega

    //FIND  and  ERASE the element
    auto it=s.find(2);
    s.erase(it);

    //{1,2,3,4,5}
    auto it1=s.find(2);
    auto it1=s.find(4);
    s.erase(it1,it2);//{1,4,5} [start,end) first element  aur last element se ke phele tk erase kr dega

    //lowerbound() and upperbound() work similar 
    //way in vector

    auto it=s.lower_bound(2);

    auto it=s.upper_bound(3);

}
int main(){
    return 0;
}