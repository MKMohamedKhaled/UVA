#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b , n , from , to , val;
    while(scanf("%d %d" , &b ,&n)==2 && b!=0){
        int banks[b];
        for(int i=0 ; i< b ; ++i)
            cin>>banks[i];
        while(n--){
            scanf("%d %d %d" , &from , &to , &val);
            banks[from-1] -= val;
            banks[to-1] += val;
        }

        sort(banks , banks+b);
        (banks[0] < 0) ? printf("N\n") : printf("S\n");
    }

    return 0;
}
