#include<iostream>
using namespace std;
int main(){
    int a[3][2]={{3,5},
                 {6,7},
                 {3,1}};
    
    cout<<"first way to traverse through the 2D array------------"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



    // cout<<"2nd way to traverse through the 2D array------------"<<endl;

    // for(int i[3]: a){
    //     for(int j[2]: i){
            
    //     }
    // }
}