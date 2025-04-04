#include<iostream> 
using namespace std;
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    int greater;
    int lcm;
    if(a>b) greater = a;
    else greater = b;
    while(1){
        if(greater%a==0 && greater%b==0){
            lcm = greater;
            break;
        }
        else{
            greater++;
        }

    }
    cout<<lcm;
    
}