#include<iostream>
#include<vector>
#include<algorithm>
#include"used_function.h"
bool comp(pair<char, int>& a, pair<char, int>& b)
{
	return a.second>b.second;
}