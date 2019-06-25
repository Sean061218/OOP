#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int height;
    double weight;
    char sex;
    while(cin >> height >> sex){
        if(sex == '1'){
            weight = (height -80)*0.7;
                cout << fixed << setprecision(1) << weight << endl;
        }
        else{
            weight = (height -70)*0.6;
                cout << fixed << setprecision(1) << weight << endl;
        }
    }
    return 0;
}
