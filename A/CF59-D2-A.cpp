#include <bits/stdc++.h>
using namespace std;
string convert(string txt, bool toLower) {
    int x = ~32; 
    if (toLower) 
    for (int i = 0; i < txt.size(); i++)
        txt[i] = txt[i] | ~x; 
   else
      for (int i = 0; i < txt.size(); i++) 
        txt[i] = txt[i] & x;    

    return txt;
}
int main() {
    string in;
    cin >> in;
    int lower = 0;
    int upper = 0;
    int x = 'a';
    for(int i=0; i < in.size(); i++)
        if (in[i] >= x)
            lower++;
        else 
            upper++;
    if(lower >= upper)
        cout << convert(in, true) << endl;
    else 
        cout << convert(in, false) << endl;
    return 0;
}
