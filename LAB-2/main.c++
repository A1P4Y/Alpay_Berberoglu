#include <iostream>
#include <string>

using namespace std;


    struct Node {
    string data;
    Node* next;
    };

    void addingWord{
    Node* newNode = new Node;
    newNode->data = word;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    } else {
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    }
    }

    void undoWord(head){
    if (head == NULL){
        return 0;
    } else if (head->next == NULL){
    delete head;
    head = NULL;

    }else {
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
        temp->next = NULL;
    }
    }
    }
    void display{
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data <<;
        temp = temp->next;
    }
    cout << "NULL" <<endl;


    }
int main()
{
    Node* head = NULL;
    string start;

    while(1){
        cout << "Enter a word";
        cin >> start;

        if (start == "EXIT"){
            break;
        }
        else if(start == "UNDO"){
            undoWord(head);
        }
        else{
            addingWord(head, start);
        }
        display(head);

    }



    return 0;
}
