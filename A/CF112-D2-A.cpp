#include <bits/stdc++.h>
using namespace std;

int diff(string u, string l) {
    int x = ~32;
    for(int i=0; i<u.size(); i++){
        u[i] = u[i] & x;
        l[i] = l[i] & x; 
        int diff = u[i] - l[i];

       if(diff > 0) 
            return 1;
        else if(diff < 0)
            return -1;
       }
    return 0;
}
int main() {
    string u,l;
    getline(cin, u);
    getline(cin, l);
    cout <<  diff(u, l) << endl;
   return 0;
}
