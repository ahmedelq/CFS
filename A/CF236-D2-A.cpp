#include <bits/stdc++.h>
using namespace std;
int main() {
    string u;
    set<int> chars; 
    getline(cin, u);

    for(int i=0; i<u.size(); i++)
        chars.insert(u[i]);

    if (chars.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}
