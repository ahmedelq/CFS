#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cols[n]; 
    for (int i = 0; i < n; i++) 
       cin >> cols[i]; 
    sort(cols, cols+n);
    for (int i = 0; i < n; i++) 
       cout << cols[i] << " "; 
    return 0;
}
