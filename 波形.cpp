#include <iostream>
using namespace std;

int main(){
    int n,i,j,k,printI,flag;
    int wave[10][2];
    cin >> n;
    for(i=0;i<n;i++) cin >> wave[i][0] >> wave[i][1];
    for(i=0;i<n;i++){
        for(j=0;j<wave[i][1];j++){
            for(k=1;k<=wave[i][0];k++){
                printI = k;
                while(printI--){
                    if(printI == 0) cout << k << endl;
                    else cout << k;
                }
            }
            for(k=wave[i][0]-1;k>0;k--){
                printI = k;
                while(printI--){
                    if(printI == 0) cout << k << endl;
                    else cout << k;
                }
            }
            if(k == 0){
                if(i == n-1 && j == wave[i][1] -1) continue;
                else cout << endl;
            }
        }

    }
}
