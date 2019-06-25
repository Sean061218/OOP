#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a[10],max,min;
    int i;
    for(i=0;i<10;i++) cin >> a[i];
    max = a[0]; min = a[0];
    for(i=1;i<10;i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << fixed << setprecision(2) << min << endl;
    return 0;
}
