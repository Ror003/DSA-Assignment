#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int a = 4;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a += 3;
    }
}