#include <iostream>
#include <vector>
using namespace std;

//var global
vector<int> arr;


struct segtree{
    segtree *left, *right;
    int l, r, sum;
    segtree(int a, int b){ //constructor  // : (l(a), r(b))
        this->l = a;
        this->r = b;
        int m = (l+r)/2;
        left = new segtree(l, m);
        right = new segtree(m+1, r);

        if( l == r){
            sum = arr[l];
        }
        else{
            int m = (l+r)/2;
            left = new segtree(l, m);
            right = new segtree(m+1, r);
        }
    }
    void update(int pos, int x){  //actualizar en la posicion por el valor
        if(l == r){
            sum = x;
        } else{
            int m = (l+r)/2;   
            if(pos <= m) left->update(pos, x);
            else right->update(pos,x);

        }
    } 

    int query(int a, int b){
        if(b < l || a > r){ // revisar si el rango actual no cubre nada del rango [a,b]
            return 0;
        }
        if(a <= l && r <= b){ // revisar si lo contengo todo
            return sum;
        } 

        return left->query(a,b) + right->query(a,b);
    }
};


int main(){


    segtree tree(0,100);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}
