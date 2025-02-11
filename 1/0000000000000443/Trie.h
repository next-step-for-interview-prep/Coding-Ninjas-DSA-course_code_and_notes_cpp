class Trie {
	TrieNode *root;

	public :

	Trie() {
		root = new TrieNode('\0');
	}

	void insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			root -> isTerminal = true;
			return;
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}
		
		// Recursive call
		insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		insertWord(root, word);
	}
};
