#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

int const mD=1e6;
int id[mD];

void QuickUnion(int n){
    for (int i = 0; i < n; ++i) {
        id[i]=i;
    }
}
int root(int i){
    while(i!=id[i]){
        i=id[i];
    }
    return i;
}

void Union(int p, int q){
    int pid=root(p);
    int qid=root(q);
    id[pid]=qid;
}
bool Connected(int p, int q){
    return root(p)==root(q);
}

int main()
{
    fast_io;
    int n;cin>>n;
    QuickUnion(n);
    int m; cin>>m;
    while(m--){
        int p,q; cin>>p>>q;
        if(!Connected(p,q)){
            Union(p,q);
        }else{
            printf("%d esta conectado con %d\n",p,q);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<id[i]<<' ';
    }
    cout<<'\n';
    return 0;
}