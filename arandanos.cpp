#include <bits/stdc++.h>

using namespace std;

int n,maxCont;
vector<int> trees;
int memo[1007][1007];

int maxi(int i,int cont){
    if(memo[i][cont]!=-1) return memo[i][cont];
    else if(cont>maxCont) return memo[i][cont]=-1;
    else if(i>=n) return memo[i][cont]=cont;
    else{
        return memo[i][cont]=max(maxi(i+2,cont+trees[i]),maxi(i+1,cont));
    }
}

int main(){
    int cases;
    cin>>cases;
    for(int casee=1;casee<cases+1;casee++){
        int temp;
        memset(memo,-1,sizeof memo);
        trees.clear();
        scanf("%d %d",&n,&maxCont);
        for(int i=0;i<n;i++){
            cin>>temp;
            trees.push_back(temp);
        }
        cout<<"Scenario #"<<casee<<": "<<maxi(0,0)<<endl;
    }
    return 0;
}
