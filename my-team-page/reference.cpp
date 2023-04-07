#include <bits/stdc++.h>
using namespace std;

int main(){
    int a =10;
    int *p = &a;
    int &j = a;
    
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<j<<endl;

    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&j;
    return 0;
}