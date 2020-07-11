#include <bits/stdc++.h>
using namespace std;
int main() {
    int games, sum;
    char c;
    cin >> games;
    sum = 0;
    for (int i=0; i < games; i++)
        {
            cin >> c;
            sum += (c == 'A') - (c == 'D');
        }
    if (!sum)
        cout << "Friendship";
    else if (sum > 0)
        cout << "Anton";
    else 
        cout << "Danik";
}
