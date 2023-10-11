//Stack
//operations-->push,pop,top
            
#include<bits/stdc++.h>
using namespace std;
void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}

    cout<<st.top()<<" ";    //5 jo element top pr tha stack k **st[2] is invalid**;

    st.pop();   //stack looks like{4,3,2,1}
    cout<<st.top()<<" ";    //3    
    cout<<st.size()<<" ";    //4

    cout<<st.empty();
    stack<int> st1, st2;
    st1.swap(st2) ;
}
//  QUEUE
void explainQueue(){
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.emplace(4);   //{1,2,4}

    q.front+=2; //{3,2,4}

    //Q {3,2,4}
    cout<<q.front()<<" ";   //prints 3

    q.pop();    //{2,4}

    cout<<q.front()<<" ";   //prints 2

    //size swap empty same as stack

}