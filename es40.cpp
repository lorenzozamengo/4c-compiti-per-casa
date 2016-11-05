//Es40
#include<iostream>
using namespace std;

void controllo(int xp, int yp, int q, int m)
{
 if(-yp+(m*xp) + q == 0)
 {cout<<"il punto appartiene alla retta"<<'\t';
 }
 else{
    cout<<"il punto non appartiene alla retta"<<'\t';
 };}

int main(){
    int xp;
    int yp;
    int q;
    int m;
    cin>>xp;
    cin>>yp;
    cin>>q;
    cin>>m;
    controllo(xp, yp, q, m);
    return 0;
}
