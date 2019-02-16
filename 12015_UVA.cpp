#include <bits/stdc++.h>

using namespace std;


struct web{
string url;
int rate;

};



int main()
{




    int tc{0} , cnt = 1;
    cin>>tc;
    while(tc--){
        web page[15];

        int MAX = -1;
        for(int i = 0 ; i < 10 ; ++i)
        {
            cin>>page[i].url>>page[i].rate;
            if(page[i].rate > MAX) MAX = page[i].rate;
        }

        cout<<"Case #"<<cnt++<<":\n";
        for(int i = 0 ; i< 10 ; ++i)
        {

            if(page[i].rate == MAX) cout<<page[i].url<<"\n";
        }
    }














   /*
    int tc{0} , cnt = 1;
    scanf("%d" , &tc);
    while(tc--){
        map<int , string , greater<int> > sites;
        string site = "";
        int rate = 0;
        for(int i = 0 ; i<10;++i)
        {
            cin>>site>>rate;
            sites.insert(make_pair(rate,site));
        }
        map<int,string>::iterator it = sites.begin();
        int MAX = (*it).first;
        //int count_max = sites.count(MAX);
        cout<<"Case #"<<cnt++<<":\n";
        //for( it= sites.begin() ; it!=sites.begin()+count_max ; ++it)
            //cout<<(*it).first<<endl;
        /*while(count_max--){
            cout<<(*it).second<<endl;
            ++it;
        }*/
        //cout<<count_max;
        //cout<<(*it).first;
/*
        for(it = sites.begin() ; it!= sites.end() ;++it)
        {
            if((*it).first == MAX)
                cout<<(*it).second<<endl;
        }
        sites.clear();
    }


*/



    return 0;
}
