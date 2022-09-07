#include <string>
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    void print_node(){
        cout<<"This is node: {data: "<<data<<" Address: "<<&next<<"}"<<endl;
    }
};