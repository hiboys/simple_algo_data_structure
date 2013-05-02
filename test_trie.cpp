/*
 * =====================================================================================
 *
 *       Filename:  test_trie.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年05月02日 16时48分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include<iostream>
#include"trie.h"
int main(int argc, char *argv[])
{
	wuyix::Trie trie;
	trie.insert("abcd");
	trie.insert("ade");
	if( trie.search("abcd") == true )
	{
		std::cout << "find abcd\n";
	}
	if( trie.search("ade") == true )
	{
		std::cout << "find ade\n" ;
	}

	if( trie.search("ad") == true )
	{
		std::cout << "find ad\n" ;
	}
	return 0;
}
