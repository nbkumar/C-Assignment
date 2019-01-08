#include <iostream>
#include <cstdlib>
using namespace std;

struct Node{
	int       *data;
	struct Node *next;
	//struct node *prev;
}*start;

class LinkedList{
  public:
  	LinkedList(){
  		start = NULL;
	  }
  void insert( int *l_data ){
    struct Node *temp , *p;
    temp = new (struct Node);
    temp ->data= l_data;
    temp ->next = NULL;
    if (start == NULL){
        start = temp;
        start->next = NULL;          
    } 
    else{
        p = start;
        start = temp;
        start->next = p;
    }

  }
   void traverse(){
    struct Node *temp;
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<"data"<<temp->data;
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};


int main(int argc, char** argv) {
    cout<<"Hello World";
	LinkedList list;
	int x=11;
	list.insert(&x);
	list.traverse();	

    return 0;
}
