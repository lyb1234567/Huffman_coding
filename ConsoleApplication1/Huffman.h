#ifndef HUFFMAN
#define HUFFMAN
#include<string>
#include<unordered_map>
#include <cassert>
#include"linked_list.h"
using namespace std;
class Huffman
{
private:
	string message;
	int first_num;
public:
	Huffman() 
	{
		message = " ";
		first_num = 0;
	};
	Huffman(string st, int first)
	{
		message = st;
		first_num = first;
	}
	List fill_tree();
	unordered_map<char, int>frequency();
	unordered_map<char, float>probability();
	float entrophy();
	void print();
};
#endif // !HUFFMAN

#pragma once
