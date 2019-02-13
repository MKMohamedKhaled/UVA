#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int tc , caseCnt = 1 ;

    while(cin>>s)
    {
        scanf("%d", &tc);
        string arr[tc] = {};

        //array<string,tc> arr;
        //arr.fill("Yes");
        int arrCnt = 0 ,x , y;

        for(int i = 0 ; i < tc ; ++i)
        {
            bool f = true;
            scanf("%d %d" , &x , &y);
            for(int j = min(x,y) ; j < max(x , y) ; ++j){
                if(s[j] != s[j+1]){
                    f = false;
                    break;
                }
            }
            (f) ? arr[arrCnt++]="Yes" : arr[arrCnt++]="No";
        }
        cout<<"Case "<<caseCnt++<<":"<<endl;
        for(int i = 0 ; i < tc ; ++i)
            cout<<arr[i]<<endl;
    }
    return 0;
}
