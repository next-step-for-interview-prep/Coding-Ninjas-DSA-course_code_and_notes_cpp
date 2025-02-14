#include <iostream>
using namespace std;
#include <queue>

void kSortedArray(int input[], int n, int k) {
	priority_queue<int> pq;
	for(int i = 0; i < k; i++) {
		pq.push(input[i]);
	}

	int j = 0;
	for(int i = k; i < n; i++) {
		input[j] = pq.top();
		pq.pop();
		pq.push(input[i]);
		j++;
	}


	while(!pq.empty()) {
		input[j] = pq.top();
		pq.pop();
                j++;
	}

}
	
int main() {
	int input[] = {10, 12, 6, 7, 9};
	int k = 3;
	kSortedArray(input, 5, k);
	for(int i = 0; i < 5; i++) {
		cout << input[i] << " ";
	}
}

