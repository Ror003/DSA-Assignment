#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int r;
    int sum = 0;
    while(n > 0){
        r = n%10;
        n = n/10;
        if(r % 2 == 0){
            sum = sum + r;
        }
    }
    cout<<sum;
}