//acmp.ru results
    //time: 30ms
    //memory: 248Kb
    //symbols count: 167

#include <fstream>
 
int main() {
    int n, v, s, i = 1, imax = -1, vmax = 0;
    std::scanf("%d", &n);
 
    for (; i <= n; i++) {
        std::scanf("%d%d", &v, &s);
        if (s && v>vmax) imax = i, vmax = v;
    }
 
    std::printf("%i", imax);
}
