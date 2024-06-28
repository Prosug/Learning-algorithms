#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

int const mD=1e6;
int id[mD];
int sz[mD];


//Creamos los datos que usaremos en el conjuntos de elementos
void QuickUnion(int n){
    for (int i = 0; i < n; ++i) {
        id[i]=i;
        sz[i]=1;
    }
}

// Sacamos la raiz del elemento.
int root(int i){
    while(i!=id[i]){
        id[i]=id[id[i]];
        i=id[i];
    }
    return i;
}


//Hacemos la Union de dos elementos mediante el root y el sz
void Union(int p, int q){
    int pid=root(p);
    int qid=root(q);
    if(pid==qid) return ;
    if(sz[pid]<sz[qid]){
        id[pid]=qid; sz[qid]=sz[pid]+sz[qid];
    }else{
        id[qid]=pid; sz[pid]=sz[qid]+sz[pid];
    }
}

//Verificamos si dos elemento estan conectados.
bool Connected(int p, int q){
    return root(p)==root(q);
}

int main()
{
    fast_io;
    //Leemos el tamano del conjunto
    int n;cin>>n;
    //Mandamos para crear en el array
    QuickUnion(n);
    int m; cin>>m;
    while(m--){
        //Leemos los elementos q,p
        int p,q; cin>>p>>q;
        //verificamos si estan conectados
        if(!Connected(p,q)){
            //Hacemos la union
            Union(p,q);
        }else{
            printf("%d esta conectado con %d\n",p,q);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<id[i]<<' ';
    }
    cout<<'\n';
    for (int i = 0; i < n; ++i) {
        cout<<sz[i]<<' ';
    }
    cout<<'\n';
    return 0;
}