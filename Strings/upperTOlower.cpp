#include<bits/stdc++.h>
using namespace std;
char toLower(ch){
    if(ch=='a-'){
        return;
    }
    else{
        ch='A'-1+'a';
    }
}
int main(){
    char ch='A';
    cout<<"character in lower case is"<<toLower(ch);
    return 0;
}