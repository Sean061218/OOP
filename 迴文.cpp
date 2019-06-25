#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100];
    int len,half,i,flag = 0;
    cin >> a;
    len = strlen(a);
    if(len ==1) cout << "YES" << endl;
    else{
        half = len/2;
        for(i=0;i<half;i++){
            if(a[i] == a[len-1-i]) flag = 1;
            else{
                flag = 0; break;
            }
        }
    }
    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
