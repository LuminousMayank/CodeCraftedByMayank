#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout>>"enter number of rows you want"
    cin>>n;
    cout>>"enter number of stars in each row"
    for(int i=1;i<=n:i++){
        for(int j=1; j<=n; j++){
            if(i==j){
                for(k=1;i<=m;k++){
                    cout<<"*"
                }
                else{
                    cout>>" "
                }
            }
           
        }
         cout<<endl;
    }
    return 0;
}