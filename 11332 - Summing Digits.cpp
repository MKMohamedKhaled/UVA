#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c = ' ';
    int sum;
    while(true){
        sum = 0;
        while(true){
            scanf("%c" , &c);
            if(c == '\n') break;
            sum+=(c-'0');
        }
        if(sum==0) return 0;
        while(sum > 9) sum = (sum%10)+(sum/10);
        printf("%d\n" , sum);
    }
    return 0;
}
