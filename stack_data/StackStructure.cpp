#include <string>
#include <iostream>
#include "NodeClass.cpp"
#include <vector>

using namespace std;
class StackData
{
private:
    NodeClass *baseNode;

public:
    StackData()
    {
        baseNode = NULL;
    };
    void addDataToStack(int addingInteger)
    {
        NodeClass *tmp = new NodeClass; // We are allocating the space required for a node by the new operator.
        tmp->data = addingInteger;
        tmp->next = NULL;

        if (baseNode == NULL)
        {

            baseNode = tmp;
        }

        else
        {
            NodeClass *temp = baseNode;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = tmp;
        }
        cout<<"Adding stack completed"<<endl;
    }
    int deleteFromTop()
    {
        NodeClass *copyNode = baseNode;
        if (copyNode != NULL)
        {
            while (copyNode->next->next != NULL)
            {
                copyNode = copyNode->next;
            }
            int data = copyNode->next->data;
            cout<<"This is deleting:"<<data<<endl;
            copyNode->next = NULL;
            return data;
        }
        cout<<"Delete from stack;"<<endl;
        return -1;
    }
    int peekFromStack()
    {
        NodeClass *copyNode = baseNode;
        if (copyNode != NULL)
        {
            while (copyNode->next->next != NULL)
            {
                copyNode = copyNode->next;
            }
            int data = copyNode->next->data;
            return data;
        }
        return -1;
    }
 
};
