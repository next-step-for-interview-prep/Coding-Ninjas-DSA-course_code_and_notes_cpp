template <typename T>
class Node {
	public : 
		T data;
		Node<T> *next;

		Node(T data) {
			this -> data = data;
			next = NULL;
		}
};


template <typename T>
class Queue {
	Node<T> *head;
	Node<T> *tail;
	int size;

	public : 

	Queue() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	void enqueue(T element) {
		Node<T> *newNode = new Node<T>(element);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = newNode;
		}
		size++;
	}

	T front() {
		if(isEmpty()) {
			return 0;
		}
		return head -> data;	
	}

	T dequeue() {
		if(isEmpty()) {
			return 0;
		}
		T ans = head -> data;
		Node<T> *temp = head;
		head = head -> next;
		delete temp;
		size--;
		return ans;
	}






};
