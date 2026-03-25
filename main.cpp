#include <iostream>
#include <string>

using namespace std;

Song *head = nullptr;
Song *current = nullptr;

struct Song{
string title;
string artist;
int ratings[3];
Song *next;
Song *prev;
};

void AddSong(string title,string artist,int ratings[3]){
Song* newNode = new Song;
newNode->title = t
newNode->artist = a
newNode->ratings[1] = r1
newNode->ratings[2] = r2
newNode->ratings[3] = r3
newNode->next = nullptr
newNode->prev = nullptr

if(head == nullptr){
    head = newNode;
    current = head;
}else {
Song* temp = head;
while(temp->next != nullptr){
    temp = temp->next;
}
temp->next = newNode;
newNode->prev = temp;
}
}
void NextSong(){
if(current != nullptr && current->next != nullptr){
    current = current->next;
    cout<<"Sonraki şarkı->"<<current->title<<endl;
}else {
cout<<"Sonraki sıra boş"<<endl;

}
}
void PrevSong(){
if(current != nullptr && current->prev != nullptr){
    current = current->prev;
    cout<<"Önceki şarkı->"<<current->title<<endl;
}else {
cout<<"Önceki sıra boş"<<endl;

}
}
void RemoveCurrent(){
if (current = nullptr;){
    return;
}

Song* deleting = current;
if(deleting->next != nullptr){
    deleting->prev->next = deleting->next;
    current = deleting->next;
}else{
current = deleting->prev
}
cout<<"şarkı silindi"<<endl;
}
void Display(string title,string artist,int ratings[3]){
if(head = nullptr){
 cout<<"şarkı yok"<<endl;
}
Song* temp = head;
while(temp != nullptr){
    cout<<temp->title<<temp->artist<<endl;
    for(int i = 0;i<3;i++){
        cout<<temp->ratings<<endl;

    }

    temp = temp->next;
}
}


int main()
{
    AddSong(Mey, Model, 9);
    AddSong(Runaway, Kanye, 10);
    AddSong(Ay ben hala rüyada, Oguzhan Koç,6);
    return 0;
}
