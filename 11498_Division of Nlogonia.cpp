#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k , m , n , x , y;
    while(cin>>k && k!=0){
        cin>>n>>m;
        while(k--){
            cin>>x>>y;
            //1-divisa
            if(x == n || y == m)
                cout<<"divisa"<<endl;
            //2-NO
            else if(x<n&&y>m)
                cout<<"NO"<<endl;
            //3-NE
            else if(x>n && y>m)
                cout<<"NE"<<endl;
            //4-SO
            else if(x<n&&y<m)
                cout<<"SO"<<endl;
            //5-SE
            else if(x>n&&y<m)
                cout<<"SE"<<endl;
        }
    }
    return 0;
}
