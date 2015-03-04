#include <iostream>

using namespace std;

/* 
 * Illustrate how break a nested loop.
 */

int main(){

int i,j,v;
bool stop;
for(i=1,v=1; i<=8; i+=3){
    for(j=3; j<6; j++){
        cout<<i<<" "<<j<<endl;
        cin>>v;
        if(v==0){
            goto point;
        }
    }
}
point: cout <<  "end of non-structured code" << endl;


for(i=1, stop=false; i <=8 && stop==false; i +=3){
    for(j=3; j<6 && stop==false; j++) {
        cout << i <<" "<< j << endl;
        cin >> v;
        if (v == 0){
            stop = true;
        }
    }
}
cout <<  "end of structured code" << endl;
}
