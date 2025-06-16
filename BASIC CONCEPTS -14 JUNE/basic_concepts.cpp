/*//odd even check
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}

//grades of students
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks ?"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A"<<endl;
    }else if(marks>=80){
        cout<<"Grade B"<<endl;
    }else if(marks>=70){
        cout<<"Grade C"<<endl;
    }else if(marks>=60){
        cout<<"Grade D"<<endl;
    }else if(marks>=50){
        cout<<"Grade E"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }
    return 0;
}

//checking letters uppercase or lowercase A=65 Z=90 a=97 z=122
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"uppercase";
    }
    else{
        cout<<"not a alphabet";
    }
    return 0;
}
*/

/*//sum of numbers upto n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which you want to sum ?";
    cin>>n;
    int sum = 0;
    while(n>0){
    sum = sum +n;
    n--;
}
    cout<<sum;
}
*/
/*//Problem Statement:
Write a C++ program that:

Inputs an integer N (e.g. up to 1000).

Uses only loops (no recursion, no STL algorithms) to find all integer triples (a, b, c) such that

Prints each triple in the form (a, b, c)—one per line.

Additionally, counts how many such triples exist up to N and prints the total.


#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number upto which you want to find the triples ";
    cin>>N;
    if(N>0 && N<=1000){
        int count =0;
        for(int a=1;a<=N;a++){
            for(int b=a+1;b<=N;b++){
                for(int c=b+1;c<=N;c++){
                    if(a*a+b*b==c*c){
                        cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
                        count++;
                    }
                }
            }
        }
        cout<<"Total number of triples are "<<count<<endl;
    }
}     
*/
//checking a number is prime or not
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    cout << isPrime << endl;

    return 0;
}
