#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int totalWidth = 0;
    for(int i=0; i < n; i++) {
       int nextPerson; 
       cin >> nextPerson;
       totalWidth += bool(nextPerson) + (nextPerson > h);
    }
    cout << totalWidth;
}
