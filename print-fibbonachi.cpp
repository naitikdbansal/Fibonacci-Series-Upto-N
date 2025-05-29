#include <iostream>
using namespace std;

int main(){

    int N;
    int T1=0;
    int T2=1;
    int T3;

cout<<"Enter : ";
cin>>N;

cout<<"0 1 ";

for( T3 = 0 ; T3 <= N ; T3=T3){

T3=T1+T2;

if(T3>N){
    break;
}else{
cout<<T3<<" ";
}


T1=T2;
T2=T3;

}

return 0;

}