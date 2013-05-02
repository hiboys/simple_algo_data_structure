/*
 * =====================================================================================
 *
 *       Filename:  trie.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年05月02日 15时52分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#ifndef _TRIE_H_
#define _TRIE_H_

#include<iostream>
#include<string>

namespace wuyix
{

const int maxOutDegreeSize = 28;

struct Node
{
	Node* childs[maxOutDegreeSize];
	Node();
};

class Trie{
	public:
		Trie();
		~Trie();
		void insert(const std::string &);
		bool search(const std::string&);
	private:
		Node* root;
		void remove(Node*);
};

}

#endif
