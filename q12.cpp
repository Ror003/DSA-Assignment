#include<iostream>
using namespace std;
int main(){
    int x=4;
    int y=2;
    int z = x++ * --y + ++x;
    //a++ , b--;
    cout<<x<< " " <<y<<" "<<z;
}