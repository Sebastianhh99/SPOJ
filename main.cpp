#include <bits/stdc++.h>

using namespace std;

map<int,int> coins;
int wPigEmpty,wPigFull;


int main(){
    int cases,n,p,w;
    cin>>cases;
    for(int casee=0;casee<cases;casee++){
        coins.clear();
        scanf("%d %d",&wPigEmpty,&wPigFull);
        cin>>n;
        for(int i=0;i<n;i++){
            scanf("%d %d",&p,&w);
            coins[p]=w;
        }
        wPigFull-=wPigEmpty;
        if(wPigFull<0) cout<<"This is impossible."<<endl;
        else{

        }
    }
    return 0;
}
