#include<iostream>
#include<string.h>
using namespace std;
string reparto;
float incasso_giornaliero;
float incasso_totale=0;
int i=0;
float incasso_medio;
int c=1;

void k( float incasso_giornaliero){
incasso_totale=incasso_totale+incasso_giornaliero;
i++;
}

int main(){
while(c==1){
cout<<"reparto";
cin>>reparto;
cout<<"incasso giornaliero";
cin>>incasso_giornaliero;
k(incasso_giornaliero);
cout<<incasso_totale;
cout<<"altri reparti?____(si=1)____(no=2)";
cin>>c;
}
incasso_medio=incasso_totale/i;
cout<<"L'incasso medio e' di "<<incasso_medio;
return 0;
}
