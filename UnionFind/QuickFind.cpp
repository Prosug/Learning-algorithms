#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

int const mD=1e6;
int id[mD];

void QF(int n){
    for (int i = 0; i < n; ++i) {
        id[i]=i;
    }
}
void Union(int p, int q,int n){
    int pid=id[p];
    int qid=id[q];
    for (int i = 0; i <n; ++i) {
        if(id[i]==pid){
            id[i]=qid;
        }
    }
}
bool Connected(int p, int q){
    return id[p]==id[q];
}

int main()
{
    fast_io;
    int n;cin>>n;
    QF(n);
    int m; cin>>m;
    while(m--){
        int p,q; cin>>p>>q;
        if(!Connected(p,q)){
            Union(p,q,n);
        }else{
            printf("%d esta conectado con %d",p,q);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<id[i]<<' ';
    }
    cout<<'\n';
    return 0;
}