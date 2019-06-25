#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char small[128],large[512];
    int i,j,slen,llen,match,ans = 0;
    cin >> small >> large;
    slen = strlen(small); llen = strlen(large);
    for(i=0;i<llen;i++){
        match = 0;
        for(j=0;j<slen;j++){
            if(small[j] == large[i+j]) match++;
            if(match == slen){ ans++; break;}
        }
    }
    cout << ans << endl;
    return 0;
}
