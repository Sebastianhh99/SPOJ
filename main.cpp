#include <bits/stdc++.h>

using namespace std;

vector<int> cost;
vector<int> weight;
int wPigEmpty,wPigFull;

int minCost(int actualW,int actualM){
    if(actualW==wPigFull) return actualM
    else if(actualW>wPigFull) return INT_MAX
    else{
       return 
    }
}

int main(){
    int cases,n,p,w;
    cin>>cases;
    for(int casee=0;casee<cases;casee++){
        coins.clear();
        scanf("%d %d",&wPigEmpty,&wPigFull);
        cin>>n;
        for(int i=0;i<n;i++){
            scanf("%d %d",&p,&w);
            cost.push_back(p);
            weight.push_back(w);
        }
        wPigFull-=wPigEmpty;
        if(wPigFull<0) cout<<"This is impossible."<<endl;
        else{
            cout<<minCost(0,0)<<endl;
        }
    }
    return 0;
}
