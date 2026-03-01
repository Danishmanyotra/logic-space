#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=0;
    while(n!=0) {
        if((ans<INT32_MIN/10)|| (ans>INT32_MAX/10)){
            cout<<"Overflow digits";
            return 0;
        }
        int digit=n%10;
        ans=(ans*10) +digit;
        n=n/10;
    }
    cout<<ans;
}