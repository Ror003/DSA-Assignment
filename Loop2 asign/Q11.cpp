#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a=0;
    int b=1;
    int c=0;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1; i<=n-2; i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c<<endl;
    }
}