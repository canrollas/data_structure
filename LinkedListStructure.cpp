#include <iostream>
#include <string>
#include "NodeClass.cpp"

using namespace std;
class LinkedListStructure
{
private:
  Node *head;

public:
  LinkedListStructure()
  {

    head = NULL;
  }
  void add_node(int n)
  {

    Node *tmp = new Node; // We are allocating the space required for a node by the new operator.
    tmp->data = n;
    tmp->next = NULL;

    if (head == NULL)
    {
      head = tmp;
    }
    else
    {
      Node *temp = head;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = tmp;
    }
  }
  void print_list()
  {
    if (head != NULL)
    {
      Node *temp = head;
      cout << "This is item that chained: [";
      while (temp->next != NULL)
      {
        cout << temp->data << ",";
        temp = temp->next;
      }

      cout << temp->data << "]" << endl;
    }
    else
    {
      cout << "[]" << endl;
    }
  }

  void delete_last_item()
  {

    Node *temp = head;
    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
    temp->print_node();
    temp->next = NULL;
  }
  void delete_first_item()
  {
    Node *temp = head;
    if (temp != NULL)
    {
      if (temp->next != NULL)
      {
        head = temp->next;
      }
      else
      {
        return;
      }
    }
    else
    {
      cout << "Linked list already empty:[]" << endl;
    }
  }
  void delete_from_middle(int position)
  {
    position = position + 1;
    if (position < 0)
    {
      delete_first_item();
    }
    else
    {

      Node *temp = head;
      Node *prev = head;
      for (int i = 0; i < position; i++)
      {
        if (i == 0 && position == 1)
        {
          head = head->next;
          free(temp);
        }
        else
        {
          if (i == position - 1 && temp)
          {
            prev->next = temp->next;
            free(temp);
          }
          else
          {
            prev = temp;
            if (prev == NULL)
            {
              break;
            }
            temp = temp->next;
          }
        }
      }
    }
  }
};