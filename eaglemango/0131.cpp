#include <iostream>

int n, v, s, i = 1, imax = -1, vmax;
int main() {
    std::cin >> n;

    for (; i <= n; i++) {
        std::cin >> v >> s;
        if (s && v>vmax) imax = i, vmax = v;
    }

    std::cout << imax;
}
