/*/1234 in 4 lines
#include<iostream>
using namespace std;
int main(){
    for(int i =0;i<4;i++){
        cout<<("1234");
        cout<<endl;
    }
}
*/
/*
//ABCD IN 5 LINES
#include<iostream>
using namespace std;
int main(){
    for(int i =0;i<5;i++){
        char ch = 'A';
        for(int j =0;j<4;j++){
            cout<<ch<<" ";

            ch++;
        }
        cout<<endl;
    }
}
*/
//square pattern 1 to 9
#include<iostream>
using namespace std;
int main(){
    int r = 1;
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<r<<" ";
            r++;
        }
        cout<<endl;
    }
}