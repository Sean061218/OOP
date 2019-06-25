#include<iostream>
using namespace std;

int f91(int n){
    if(n <= 100) return f91(f91(n+11));
    else return n-10;
}
int main(){
    int ncase,i;
    int a[100];
    cin >> ncase;
    for(i=0;i<ncase;i++) cin >> a[i];
    for(i=0;i<ncase;i++) cout << f91(a[i]) << endl;
    return 0;
}
