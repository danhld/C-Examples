#include <iostream>

using namespace std;
struct nodeType {
    int data;
    nodeType *next;
};

void createLinkedList(int num[], int n, nodeType *head){
//    int n = sizeof(num)/sizeof(int);
//    cout<<"n = "<<n<<endl;
    head->data = num[0];
    head->next = nullptr;

    nodeType *prenode = head;

    for (int i=1; i<=n; i++){
            nodeType *node = new nodeType;
            node->data = num[i];

            node->next = nullptr;
            prenode->next = node;
            prenode = node;
    }
//    return head;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(a)/sizeof(int);
    //nodeType *mylist = nullptr;
    nodeType *head = new nodeType;
    createLinkedList(a, n, head);
 //   cout<<mylist->data<<endl;
    while(head->next!=nullptr){
        cout<<head->data<<endl;
        head = head->next;
    }
    return 0;
}
