#include <iostream>
using namespace std;

int main(){
    int player[5][5],compare[5][2];
    int n,i,j,temp,tempID;
    cin >> n;
    for(i=0;i<n;i++) cin >> player[i][0] >> player[i][1] >> player[i][2] >> player[i][3];
    for(i=0;i<n;i++) player[i][4] = player[i][0] + 2*player[i][1] + player[i][2] + player[i][3];
    for(i=0;i<n;i++){
        compare[i][0] = i+1;
        compare[i][1] = player[i][4];
    }
    for(i=0;i<n;i++)
        for(j=i;j<n;j++){
            if(compare[i][1] < compare[j][1]){
                tempID = compare[j][0]; temp = compare[j][1];
                compare[j][0] = compare[i][0]; compare[j][1] = compare[i][1];
                compare[i][0] = tempID; compare[i][1] = temp;
            }
        }
    for(i=0;i<n;i++){
        if(i < n-1) cout << compare[i][0] << ' ';
        else cout << compare[i][0] << endl;
    }
}
