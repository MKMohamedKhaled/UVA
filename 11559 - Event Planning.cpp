#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mem , budgent , hotel , weeks , price , x;
    while(scanf("%d %d %d %d" , &mem,&budgent,&hotel,&weeks) == 4){
        //bool stay = false;
        //int beds[weeks];
        int ava = 0 , cost = budgent+1;
        while(hotel--){
            scanf("%d" , &price);
            for(int i = 0 ; i < weeks ; ++i){
                scanf("%d" , &x);
                ava = max(ava , x);
            }
            /*sort(beds , beds+weeks);
            if(budgent >= price*mem){
                if(mem <= beds[weeks-1]){
                    stay = true;
                    cost = price * mem ;
                }
            }*/
            if(ava >= mem)
                cost = min(cost , mem * price);
        }
        (cost == budgent+1) ? printf("stay home\n") : printf("%d\n" , cost);


        //(stay) ? printf("%d\n" , cost) : printf("stay home\n");
    }
    return 0;
}
