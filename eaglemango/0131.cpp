#include <fstream>

int main() {
    short int n, v, s, i = 1, imax = -1, vmax = 0;
    std::scanf("%d", &n);

    for (; i <= n; i++) {
        std::scanf("%d%d", &v, &s);
        if (s && v>vmax) imax = i, vmax = v;
    }

    std::printf("%i", imax);
}
