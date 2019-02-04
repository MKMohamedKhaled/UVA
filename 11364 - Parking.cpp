#include <bits/stdc++.h>

using namespace std;

int main()
{
   int tc , numStore , x;
   scanf("%d" , &tc);
   while(tc--){
    scanf("%d" , &numStore);
    int arr[numStore];
    for(int i=0;i<numStore;++i){
        scanf("%d" , &x);
        arr[i] = x;
    }
    sort(arr , arr+numStore);
    printf("%d\n" , (arr[numStore-1] - arr[0])*2);
   }


    return 0;
}
