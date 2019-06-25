#include <iostream>
#include <string>
using namespace std;

int main(){
    string ans,guess;
    int Anum,Bnum,i,j;
    cin >> ans;
    while(1){
        cin >> guess;
        Anum = 0; Bnum = 0;
        if(guess[0] == '0' && guess[1] == '0' && guess[2] == '0' && guess[3] == '0') break;
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(i == j) {if(ans[i] == guess[j]) Anum++; }
                else{ if(ans[i] == guess[j]) Bnum++; }
            }
        }
        cout << Anum << 'A' << Bnum << 'B' << endl;
    }
    return 0;
}
