#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int count=0;
    while(n!=0) {
        if(n&1) {
            count++;
        }
        n=n>>1;
    }
    cout<<"This number has "<<count<<" one's in binary form"<<endl;
}