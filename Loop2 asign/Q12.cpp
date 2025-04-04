#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int rev = 0;
    int r;
    while(n > 0){
        r = n%10;
        n = n/10;
        rev = rev*10+r;  
    }
    cout<<rev;
}