#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c[1024];
    bool oc = true;

    while(gets(c)){
        int l = strlen(c);
        for(int i=0;i<l;++i){
            if(c[i] == '"'){
                if(oc)
                    cout<<"``";
                else
                    cout<<"''";
                oc=!oc;
            }
            else
                cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
