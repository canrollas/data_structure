#include <string>
#include <iostream>
using namespace std;

class NodeClass {
public:

    int data;
    NodeClass* next;

    void print_node(){
        cout<<"This is node: {data: "<<data<<" Address: "<<&next<<"}"<<endl;
    }
};