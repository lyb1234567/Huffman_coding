#ifndef LINKED_H_
#define LINKED_H_
#include<string>
#include<iostream>
using namespace std;
class Node
{
public:
	char data;
	float prob;
	Node* next = NULL;
	Node* prev = NULL;
	Node(char dt, float pb)
	{
		prob = pb;
		data = dt;
	}
	Node()
	{
		data = NULL;
		prob = 0.0;
	}
};
class List
{
private:
	Node* head = NULL;
	Node* tail = NULL;
public:
	Node* get_end();
	string str();
	List(string& a);
	List(const char*);
	List() {};
	void push_head(char new_data);
	void print_list();
	void push_tail(char new_data);
	void push_tail(Node* node);
	List slice(int start, int end);
	bool remove(int n);
	bool remove(char a);
	Node* get_head() { return head; };
	char find(int index);
	int len();
};
#endif
#pragma once