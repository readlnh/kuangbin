#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    for(int ncase = 1; ncase <=T; ncase++) {
        int n;
        scanf("%d", &n);
        int t = 0;
        int ans = -0x3f3f3f3f;
        int lans,rans,l;
        l = 1;
        for(int i = 1; i <= n; i++) {
            int x;
            scanf("%d", &x);
            t += x;
            if(t > ans) {
                ans = t;
                lans = l;
                rans = i;
            }
            if(t < 0) {
                t = 0;
                l = i + 1;
            }
        }
        printf("Case %d:\n", ncase);
        printf("%d %d %d\n", ans, lans , rans); 
        if(ncase != T) printf("\n");
    }
    return 0;
}
