#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int n){
		data=n;
		next=NULL;
	}
};
void display(Node *head){
	Node *current=head;
	while(current!=NULL){
		cout<<current->data<<endl;
		current=current->next;
	}
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	display(head);
	return 0;
}
