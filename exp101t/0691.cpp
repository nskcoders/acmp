#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; string s, mask = "ABCEHKMOPTXY"; cin >> n;
    while(n--){
        cin >> s; bool flag = s.length() == 6;
        if(flag){
            for(int p = 0; p < 6; p++){
                if(p > 0 && p < 4){
                    if(s[p] < 48 || s[p] > 57) flag = false;
                }else{
                    bool temp = false;
                    for(int i = 0; i < 12; i++) if(mask[i] == s[p]) temp = true;
                    if(!temp) flag = false;
                }
            }
        }cout << (flag ? "Yes\n" : "No\n");
    }
}
