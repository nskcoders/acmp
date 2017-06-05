//acmp.ru results
    //time: 30ms
    //memory: 248Kb
    //symbols count: 167

#include <iostream>

int main() {
    int n, v, s, i = 1, imax = -1, vmax = 0;
    std::cin >> n;

    for (; i <= n; i++) {
        std::cin >> v >> s;
        if (s && v>vmax) imax = i, vmax = v;
    }

    std::cout << imax;
}
