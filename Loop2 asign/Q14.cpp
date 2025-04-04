#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum =0;
    int r;
    int p=n;
    while(n>0){
        r = n%10;
        n = n/10;
        sum = sum+r*r*r;
    }
    if(p==sum) cout<<"armstrong";
    else cout<<"not armstrong";
}