

#include <bits/stdc++.h>

using namespace std;

void test(){
    
    int r, l;
    cin >> l >> r; 
    int ans = 0;
    int r1 = 0;
    r1 = r/2 + 1;

    if(l <= r1){
        ans = r - r1;
    }else if(r1 < l){
        ans = r - l;
    }

    cout << ans << endl;
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        
        test();
    }
    
}