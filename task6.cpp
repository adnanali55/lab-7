#include<iostream>
using namespace std;
int main() {
    int n;
    float  harmonic=0.0;
    cout<<"enter number=";
    cin>>n;
    for (int i =1;i<=n;i++) {
        harmonic=harmonic+1.0/i;
    }
    cout<<"Nth harmonic is="<<harmonic;
}

