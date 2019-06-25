#include<iostream>
using namespace std;

int f(int input){
    if(input == 0 || input == 1) return (input+1);
    else return f(input-1) + f(input/2);
}
int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
