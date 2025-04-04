#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    int a = 0;
    for(int i=1; i<=n; i++){
        a = (a * 10) + 2;
        sum = sum + a;
    }
    cout<<sum;
}