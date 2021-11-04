#include <iostream>

using namespace std;


	class Node
	{
	public:
		int info;
		Node *next;
	};

class List
{
private:
	Node* head;
	

public:

	List()
	{
		this->head = NULL;
	}
	~List(){}

	bool isEmpty()
	{
		return head == NULL;
	}

	

	void push_front(int info)
	{
		Node *temp = new Node;
		temp->info = info;
		
		if (head == NULL)
		{
			temp->next = NULL;
			head = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
	}
	void push_back(int info)
	{
		Node* temp = new Node;
		temp->info = info;
		temp->next = NULL;
		if(head == NULL)
		{
			temp->next = NULL;
			head = temp;
		}
		else
		{
			Node *cur = new Node;
			cur = head;
			while(cur->next != NULL)
			{
				cur = cur->next;
			}

			cur->next = temp;
		}
	}
	void pop_front()
	{
		if(head == NULL)
		{
			cout << "Underflow!: no element to pop" << endl;
		}
		else
			head = head->next;
	}

	void pop_back()
	{
		if(head == NULL)
		{
			cout << "Underflow !: no element to pop" << endl;
		}
		else
		{
			Node *temp = new Node();
			temp = head;
			while(temp->next->next == NULL)
			{
				temp = temp->next;
			}

			temp = temp->next->next;
		}

	}
	int get_value(int index)
	{
		Node *node= new Node();
		node = head;
		for (int i = 0; i < index; ++i)
		{
			node = node->next;
		}

		return node->info;
	}

	void pop_element(int index)
	{
		Node* start = new Node();

	}

};

int main()
{
	List *list = new List();

	list->push_front(5);
	list->push_front(15);
	list->push_front(20);

	
	cout << list->get_value(1) << endl;

	return 0;
}