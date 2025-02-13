#include <iostream>
using namespace std;
#include "QueueUsingArray.h"
#include <queue>

int main() {
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);

	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	cout << q.size() << endl;
	cout << q.empty() << endl;

	while(!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	
	/*
	QueueUsingArray<int> q(5);

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
	*/
	}

