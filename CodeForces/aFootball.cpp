#include <bits/stdc++.h>

using namespace std;

int main(){
    string s ;
    cin >> s;

    int i, ans = 0;

    for (i = 0; i <s.size(); i++){
        int cunt = 0;
        if (s[i] == '0'){
            while (s[i] == '0' && i <s.size()){
                cunt ++;
                i++;
            }

        }else {
            while (s[i] == '1' && i <s.size()){
                cunt ++;
                i++;
            }
        }
        if (cunt >= 7)ans =1;
        i--;
    }
    if(ans ==1)cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}
