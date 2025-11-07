#include<iostream>
using namespace std;
int main() {
    int base,power, result;
    result=1;
    cout<<"Enter base number: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    for(int i=1;i<=power;i++) {
        result=result*base;
    }
    cout<<"result ="<<result;
    return 0;
}
