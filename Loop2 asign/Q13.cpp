#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum =0;
    for(int i=1; i<=n; i++){
        if(i%5==0) continue;
            sum = sum+i;
            if(sum>300){
                sum = sum-i;
                break;
            }
    }
    cout<<sum;
}