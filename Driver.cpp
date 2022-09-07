#include <iostream>
#include "LinkedListStructure.cpp"

int main()
{
    LinkedListStructure linkedList;
    linkedList.print_list();
    linkedList.add_node(1);

    linkedList.add_node(2);
    linkedList.add_node(3);
    linkedList.print_list();
    linkedList.delete_last_item();
    linkedList.print_list();
    linkedList.delete_first_item();
    linkedList.print_list();
    linkedList.add_node(5);
    linkedList.add_node(6);
    linkedList.print_list();
    linkedList.delete_from_middle(2);
    linkedList.print_list();

    return 0;
}