#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=1;
   
    while(i<=n) {
        int j=1;
        while(j<=n-i+1) {
            cout<<j;
            j++;
        }
        int star1=i-1;
        while(star1--) {
            cout<<"*";
        }
        int star2=i-1;
        while(star2--) {
            cout<<"*";
        }
        int k=n-i+1;
        while(k) {
            cout<<k;
            k--;
        }
        cout<<endl;
       
        i++;

    }

}