#include<iostream>
using namespace std;

int main(){
    int a,i,sum = 0;
    cin >> a;
    for(i=1;i<=a;i++){
        if(i%3 == 0) sum += i;
    }
    cout << sum << endl;
    return 0;
}
