#include <iostream>
#include <string>
using namespace std;

int main(){
    string birthday;
    int sum,ans,i;
    cin >> birthday;
    sum = 0;
    for(i=0;i<8;i++) {sum += (birthday[i] - '0'); /*cout << sum << endl;*/}
    ans = 0;
    for(i=1;i<sum;i++)
        if(sum % i == 0) ans += i;
    //cout << ans << endl;
    if(ans > sum) cout << "-1" << endl;
    else if (ans == sum) cout << '0' << endl;
    else cout << sum - ans << endl;
    return 0;
}
