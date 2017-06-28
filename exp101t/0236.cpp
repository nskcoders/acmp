#include <string>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

long long int op[5] = {0}, a, n, k, x = 0; string s;

void add(string s){
    int p = -1, pst = -1, pk = -1, st, k; bool hasMinus = s[0] == '-' ? true : false, isNumber = true;
    while(s[++p]){
        if(s[p] == 'x') isNumber = false;
        if(s[p] == '*')  pk = p;
        if(s[p] == '^') pst = p;
    }if(!isNumber)
        st = pst == -1 ? 1 : s[pst + 1] - 48,
        k  = (hasMinus ? -1 : 1) * (pk == -1 ? 1 : atoi(s.substr(1, pk).c_str()));
    else st = 0, k = atoi(s.c_str()); op[st] += k;
}

int main(){
    cin >> s >> a; if(s[0] != '-' && s[0] != '+') s = '+' + s; n = 0; k = 1;
    while(s[n] && s[k]){
        while(s[k] && s[k] != '-' && s[k] != '+') k++;
        add(s.substr(n, k - n)); n = k; k++;
    }for(int i = 0; i < 5; i++) x += op[i] * pow(a, i); cout << x;
}
