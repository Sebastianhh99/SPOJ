#include <bits/stdc++.h>

using namespace std;

int money,n;
vector< pair<int,int> > costs;
pair<int,int> memo[501][501][501];
pair<int,int> init=make_pair(0,0);

pair<int,int> maxim(int i,int cost,int fun){
    if(memo[i][cost][fun]!=init) return memo[i][cost][fun];
    else if(cost>money) return memo[i][cost][fun]=make_pair(-1,-1);
    else if(i==n) return memo[i][cost][fun]=make_pair(fun,cost);
    else{
        return memo[i][cost][fun]=max(maxim(i+1,cost+costs[i].first,fun+costs[i].second),maxim(i+1,cost,fun));
    }
}

int main(){
    int a,b;
    scanf("%d %d",&money,&n);
    while(money+n!=0){
        memset(memo,0,sizeof memo);
        costs.clear();
        for(int i=0;i<n;i++){
            pair<int,int> temp;
            scanf("%d %d",&a,&b);
            temp=make_pair(a,b);
            costs.push_back(temp);
        }
        pair<int,int> ans=maxim(0,0,0);
        cout<<ans.second<<" "<<ans.first<<endl;
        scanf("%d %d",&money,&n);
    }
    return 0;
}
