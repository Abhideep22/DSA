//MULTISET
#include<bits/stdc++.h>
using namespace std;
void expalinMS(){
    //Everything is same as SET
    //stores duplicate elements also

    multiset<int> ms;
    ms.insert(1);   //{1}
    ms.insert(1);   //{1,1}
    ms.insert(1);   //{1,1,1}

    ms.erase(1);    //all 1's erased

    ms.erase(ms.find(1));   //only a single 1 erased

    //rest all functions are same 
}

//UN-ORDERED SET
//Time Complexity--->O(1)
//Unique but Un-Sorted
void expalinUS(){
    /*
    1.Everthing is same as set but has better time complexity than in some cases
    2.Lowerbound() & Upperbound() function doesn't work
    */

}