#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int prod=1;
    int sum=0;
    while(n!=0) {
        int c=n%10;
        prod=prod*c;
        sum=sum+c;
        n=n/10;
    }
    int ans = prod-sum;
    cout<<ans;
}