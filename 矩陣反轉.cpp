#include<iostream>
using namespace std;

int main(){
    int row,column,i,j;
    int a[100][100];
    cin >> row >> column;
    for(i=0;i<row;i++) for(j=0;j<column;j++) cin >> a[i][j];
    for(i=0;i<column;i++)
        for(j=0;j<row;j++){
            if(j == row-1) cout << a[j][i] << endl;
            else cout << a[j][i] << ' ';
        }
    return 0;
}
