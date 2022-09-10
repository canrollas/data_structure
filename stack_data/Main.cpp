#include <iostream>
#include "StackStructure.cpp"

int main()
{

    StackData stackData;
    stackData.addDataToStack(1);
    stackData.addDataToStack(2);
    stackData.addDataToStack(3);
    stackData.addDataToStack(4);
    stackData.deleteFromTop();
    stackData.deleteFromTop();
    stackData.deleteFromTop();

    return 0;
}