// Messi vs Ronaldo


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(((a*2)+b)==((c*2)+d)){
        cout<<"Equal"<<endl;}
    else if(((a*2)+b)>=((c*2)+d)){
        cout<<"Messi"<<endl;}
    else if(((a*2)+b)<=((c*2)+d)){
        cout<<"Ronaldo"<<endl;}
}
