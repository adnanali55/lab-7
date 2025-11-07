#include<iostream>
using namespace std;
int main() {
    int n1,fact;
    fact=1;
    cout<<"Enter number: ";
    cin>>n1;
    for(int i=1;i<=n1;i++) {
        fact=fact*i;
    }
    cout<<"factorial ="<<fact;
    return 0;
}
