/*
 * =====================================================================================
 *
 *       Filename:  trie.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年05月02日 15时59分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include"trie.h"
#include<stdio.h>
#include<assert.h>

namespace wuyix
{

Node::Node()
{
	for( int i = 0; i < maxOutDegreeSize  ; i++ )
	{
		childs[i] = NULL;
	}
	
}

Trie::Trie()
{
	root = NULL;
}

Trie::~Trie()
{
	if( this->root != NULL )
	{
		remove(this->root);
	}
}


/*
 * delete the dynamic memory
 */
void Trie::remove(Node* node)
{
	int i;
	assert(node != NULL);
	for( i = 0 ; i < maxOutDegreeSize  ; i++ )
	{
		if( node->childs[i] != NULL )
		{
			remove(node->childs[i]);
		}
	}
	if(  i == maxOutDegreeSize )
	{
		assert(node != NULL);
		delete node;
	}
}


bool Trie::search(const std::string& str)
{
	int index = 0;
	Node* location = this->root;
	int length = str.size();
	while( location != NULL &&
		index < length )
	{
		int next_pos = str[index]- 'a';
		location = location->childs[next_pos];
		index++;
	}
	if( location == NULL )
		return false;
	return true;
}

/*
 * if the trie is empty , than create the root node:
 *
 */
void Trie::insert(const std::string& str)
{
	if( this->root == NULL )
	{
		this->root = new Node;
	}
	Node* nowNodePtr = this->root;
	int nowStrIndex = 0;
	int length = str.size();
	while( nowNodePtr != NULL &&
		nowStrIndex < length )
	{
		int next_pos =str[nowStrIndex]-'a';
		if( nowNodePtr->childs[next_pos] == NULL )
		{
			nowNodePtr->childs[next_pos] = new Node;
		}
		nowNodePtr = nowNodePtr->childs[next_pos];
		nowStrIndex++;
	}
}
}
