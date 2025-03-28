//heap
#include <iostream>
using namespace std;

class heap{
    int *arr;
    int size;
    int capacity;
    public:
    heap(int c){
        arr = new int[c];
        size = 0;
        capacity = c;
    }
    void insert(int x){
        if(size == capacity){
            cout<<"Heap is full"<<endl;
            return;
        }
        arr[size] = x;
        size++;
        int i = size - 1;
        while(i != 0){
            int parent = (i-1)/2;
            if(arr[parent] < arr[i]){

                swap(arr[parent],arr[i]);
                i = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    };
int main(){
    heap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(40);
    h.print();
    return 0;
}