//VECTORS
#include<bits/stdc++.h>
using namespace std;
void explainVectors(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);  //similar to push_back but faster 

    vector<pair<int, int>> vec; //vector of pair type
    v.push_back({1,2});
    v.emplace_back(2,4);

    vector<int> v(5,100); //(size, value) jo pehle se hi filled ho
    vector<int> v(5);   //filled with garbage value

    //copy value from one vector to another
    vector<int> v1(5,20);
    vector<int> v2(v1);

    //Accessing elements of vector through iterator

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();   //hamesha ending position se ek aage point krega
    vector<int>::iterator it=v.rend();  //never used but reverse hota hai 
    vector<int>::iterator it=v.rbegin();

    cout<<v[0]<<" "<<endl;
    cout<<v.back()<<" ";    //print the last element of the vector

    for(auto it=v.begin();it !=v.end();i++){
        cout<<*(it)<<" ";
    }

    //erasing ele from vector
    //{10,20,30,14}
    v.erase(v.begin()+1);

    //{10,20,30,40,50}
    v.erase(v.begin()+2,v.begin()+4)    //{10,20,50} [start,end) starting ko include krta hai aur end se ek phle

    //Insert function

    vector<int> v(2,100);   //{100,100}
    v.insert(v.begin(),300);     //{300,100,100}    
    v.insert(v.begin()+1,2,0);     //{300,0,0,100,100}    

    vector<int> copy(2,50); //{50,50}

    v.insert(v.begin(),copy.begin(),copy.end());     //{50,50,300,0,0,100,100}    

    //{10,20,30}
    cout<<v.size(); //3

    v.pop_back();   //{10,20}

    //v1-->{10,20}
    //v2-->{30,40}
    v1.swap(v2) //v1-->{30,40} , v2-->{10,20}

    v.clear();  //erase entire vector

    cout<<v.empty();    //true or flase dega vector ko check kr k
}