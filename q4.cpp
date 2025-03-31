#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter principle no: ";
    cin>>a;
    cout<<"Enter time no: ";
    cin>>b;
    cout<<"Enter rate no: ";
    cin>>c;
    int SI = a * b * c/100;
    cout<<"Simple interest is "<<SI<<endl;
    
}