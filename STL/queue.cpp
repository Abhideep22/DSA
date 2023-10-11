#include<bits/stdc++.h>
using namespace std;
void priorityQueue(){
    priority_queue<int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);

    cout<<Q.top();
}
int main(){
    priorityQueue();
    return 0;
}