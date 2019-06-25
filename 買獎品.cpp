#include <iostream>
#include <vector>
using namespace std;

int main(){
    int ncase,i,j,temp,total,people,itemNum,ans,itemMoney;
    cin >> ncase;
    while(ncase--){
        cin >> total >> people >> itemNum;
        vector <int>item;
        for(i=0;i<itemNum;i++){
            cin >> itemMoney;
            item.push_back(itemMoney); //cout << itemMoney << endl;
        }
        for(i=0;i<itemNum;i++)
            for(j=i;j<itemNum;j++){
                if(item[i] > item[j]){
                    temp = item[j];
                    item[j] = item[i];
                    item[i] = temp;
                }
            }
        ans = 0;
        for(i=0;i<people;i++) ans += item[i];
        if(ans <= total) cout << ans << endl;
        else cout << "Impossible" << endl;
    }
    return 0;
}
