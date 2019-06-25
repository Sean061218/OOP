#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,y;
    int square;
    double distance;
    cin >> x >> y;
    square = x*x + y*y;
    distance = sqrt(square);
    if(distance < 100) cout << "inside" << endl;
    else cout << "outside" << endl;
    return 0;
}
