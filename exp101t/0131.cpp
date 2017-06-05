#include <stdio.h>
#include <utility>

int main(){
    int V, S, N; scanf("%i", &N);
    std::pair<int, int> max = {-1, -1};
    for(int i = 0; i < N; i++){
        scanf("%i%i", &V, &S);
        if(S && V > max.second) max = {i, V};
    }
    
    printf("%i", max.first != -1 ? (max.first + 1) : -1);
}
