// Chef and Roma are playing a game. Rules of the game are quite simple. Initially there are N piles of stones on the table. In each turn, a player can choose one pile and remove it from the table. Each player want to maximize the total number of stones removed by him. Chef takes the first turn.
// Please tell Chef the maximum number of stones he can remove assuming that both players play optimally.
// Input
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N denoting the number of piles.
// The second line contains N space separated integers A1, A2, ..., AN denoting the number of stones in each pile.
// Output
// For each test case, output a single line containg the maximum number of stones that Chef can remove.

#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(long long *)b - *(long long *)a);
}
    int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n,i;
        scanf("%d", &n);
        long long a[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
       qsort(a, n, sizeof(long), compare);
        long long sum = 0;
        for(i = 0; i < n; i+=2) {
            sum += a[i];
        }
        printf("%lld\n", sum);
    }
    return 0;
}

