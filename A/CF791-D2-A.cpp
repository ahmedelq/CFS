#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
    float a, b;
    cin >> a >> b;
    cout << floor(log(b/a)/(log(1.5))) + 1;
    return 0;
}
