#include <iostream>
#include <vector>

using namespace std;

vector<int> cost;
vector<int> weight;
int wPigEmpty,wPigFull;
//int INT_MAX=2147493646;
//Falta memorizar
int minCost(int actualW,int actualM){
    int ans=INT_MAX;
    if(actualW==wPigFull) return actualM;
    else if(actualW>wPigFull) return INT_MAX;
    else{
       for(int i=0;i<cost.size();i++){
           ans=min(ans,minCost(actualW+weight[i],actualM+cost[i]));
       }
       return ans;
    }
}

int main(){
    cout<<INT_MAX<<endl;
    int cases,n,p,w;
    cin>>cases;
    for(int casee=0;casee<cases;casee++){
        cost.clear();
        weight.clear();
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
            int ans=minCost(0,0);
            if(ans==INT_MAX){
                cout<<"This is impossible."<<endl;
            }
            else{
                cout<<"The minimum amount of money in the piggy-bank is "<<ans<<"."<<endl;
            }
        }
    }
    return 0;
}
