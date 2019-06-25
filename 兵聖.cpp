#include <iostream>
#include <string>
using namespace std;

int main(){
    int ncase,first,second;
    string name;
    cin >> ncase;
    while(ncase--){
        cin >> name >> first >> second;
        if(first == 1){
            if(second == 3) cout << name << " Staff" << endl;
            if(second == 4) cout << name << " General" << endl;
        }
        if(first == 2){
            if(second == 3) cout << name << " execute by shooting" << endl;
            if(second == 4) cout << name << " Soldier" << endl;
        }
    }
    return 0;
}
