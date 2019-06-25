#include<iostream>
using namespace std;

int main(){
    int n,digit,ten,hundred,ans;
    cin >> n;
    ans = n;
    hundred = n/100;
    n -= 100*hundred;
    ten = n/10;
    digit = n - ten*10;
    if(digit*digit*digit + ten*ten*ten + hundred*hundred*hundred == ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
