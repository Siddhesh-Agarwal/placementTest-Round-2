#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int v)
    {
        val = v;
        next = nullptr;
    }
} *head = nullptr;

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

void insert(Node *head, int val)
{
    if (head->next == nullptr)
        head->next = new Node(val);
    else
        insert(head->next, val);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (head == nullptr)
            head = new Node(val);
        else
            insert(head, val);
    }
    // insert the GCD of every two consecutive elements in the linked list
    Node *temp = head;
    while (temp->next != nullptr)
    {
        Node *newNode = new Node(GCD(temp->val, temp->next->val));
        newNode->next = temp->next;
        temp->next = newNode;
        temp = temp->next->next;
    }
    // print the linked list
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}