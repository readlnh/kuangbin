# hdu1003Max Sum

http://acm.hdu.edu.cn/showproblem.php?pid=1003

## 思路
最大子段和，状态方程f[i] = max(a[i], f[i - 1] + a[i])，这里要同时输出最大子段的开始和结束位置。实际上，我们知道，在求最大子段的时候如果当前数字加入到子段里使子段和小于0,那就说明这个数肯定不能加入到子段里去，用这种数来分段，每加一个数和当前最大子段去比较取最大的即可。

## 代码
```
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
```
