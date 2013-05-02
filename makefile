test_trie:  trie.o test_trie.o 
	g++ test_trie.o trie.o  -o test_trie
trie.o: trie.cpp trie.h
	g++ -c trie.cpp 
test_trie.o: test_trie.cpp trie.h 
	g++ -c test_trie.cpp 
