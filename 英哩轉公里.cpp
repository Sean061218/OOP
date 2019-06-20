#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int input,ncase = 5;
    double ans;
    //while(ncase--){
        cin >> input;
        ans = input*1.6;
        cout << fixed << setprecision(1) << ans << endl;
    //}
    return 0;
}
