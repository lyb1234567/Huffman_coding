#include"Huffman.h"
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include"used_function.h"
#include"linked_list.h"
using namespace std;
unordered_map <char, int>Huffman::frequency()
{
	int len = message.length();
	unordered_map<char, int> freq;
	for (int i = 0; i < len; i++)
	{
		if (freq[message[i]] == 0)
		{
			freq[message[i]] = 1;
		}
		else if(freq[message[i]]>0)
		{
			freq[message[i]] += 1;
		}
	}
	vector<pair<char, int>>new_freq;
	for (auto& it : freq)
	{
		new_freq.push_back(it);
	}
	sort(new_freq.begin(), new_freq.end(), comp);
	unordered_map<char, int>new_map;
	for (auto& it : new_freq)
	{
		cout << it.first << ":" << it.second;
		new_map[it.first] = it.second;
	}
	return new_map;
	
}
unordered_map<char, float> Huffman::probability()
{
	unordered_map<char, int> freq = frequency();
	float sum = 0;
	for (auto& it : freq)
	{
		sum = sum + it.second;
	}
	unordered_map<char, float> prob;
	for (auto& it : freq)
	{
		prob[it.first] = it.second / sum;
	}
	return prob;
}
List Huffman::fill_tree()
{
	List a;
	unordered_map<char, int> freq = frequency();
	for (auto& it : freq)
	{
		Node* n1 = new Node(it.first, it.second);
		a.push_tail(n1);
	}
	return a;
}