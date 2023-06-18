#include <iostream>
#include <unordered_map>
using namespace std;

class ListNode
{
public:
    ListNode* next;
    int data_value;
};

void insert(ListNode* node, int data_value)
{
    ListNode* new_node = new ListNode();
    new_node->data_value = data_value;
    new_node->next = node->next;
    node->next = new_node;
}

ListNode* insertbeg(ListNode* head, int data_value)
{
    ListNode* new_node = new ListNode();
    new_node->data_value = data_value;
    new_node->next = head;
    head = new_node;
    return head;
}

ListNode* insertindex(ListNode* head, int index, int data_value)
{
    if (index == 0)
    {
        head = insertbeg(head, data_value);
        return head;
    }

    ListNode* copy = head;
    for (int i = 0; i < index - 1; i++)
    {
        copy = copy->next;
    }
    insert(copy, data_value);
    return head;
}

void deletenext(ListNode* node)
{
    node->next = node->next->next;
}

ListNode* deletebeg(ListNode* head)
{
    head = head->next;
    return head;
}

ListNode* deleteindex(ListNode* head, int index)
{
    ListNode* copy = head;

    if (index == 0)
    {
        head = head->next;
        return head;
    }
    for (int i = 0; i < index - 1; i++)
    {
        copy = copy->next;
    }
    deletenext(copy);
    return head;
}

ListNode* reverselist(ListNode* head)
{
    ListNode* prev = nullptr;
    ListNode* mid = head;
    ListNode* nextpoint = head->next;

    while (mid != nullptr)
    {
        nextpoint = mid->next;
        mid->next = prev;
        prev = mid;
        mid = nextpoint;
    }
    return prev;
}

bool detectloop(ListNode* head)
{
    unordered_map<ListNode*, bool> mp;

    while (head != nullptr)
    {
        if (mp.find(head) != mp.end())
        {
            return true;
        }
        else
        {
            mp[head] = true;
        }
        head = head->next;
    }
    return false;
}

void print(ListNode* head)
{
    ListNode* copy = head;
    while (copy != nullptr)
    {
        cout << copy->data_value << " ";
        copy = copy->next;
    }
    cout << endl;
}

int main()
{
    ListNode* head = nullptr;
    head = insertbeg(head, 4);
    insert(head, 5);
    insert(head, 15);
    insert(head, 30);
    insert(head, 45);
    insert(head, 60);
    head = insertindex(head, 2, 3);
    print(head);

    head = reverselist(head);
    print(head);
    cout << detectloop(head) << endl;
    deletenext(head);
    print(head);
    head = deletebeg(head);
    print(head);
    head = deleteindex(head, 1);
    print(head);
    return 0;
}
