#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1, x2, y1, y2;
    cout<<"enter x1 no: ";
    cin>>x1;
    cout<<"enter x2 no: ";
    cin>>x2;
    cout<<"enter y1 no: ";
    cin>>y1;
    cout<<"enter y2 no: ";
    cin>>y2;
    int dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout<<"dist is: "<<dist;


    
}