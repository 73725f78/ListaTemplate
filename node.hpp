#pragma once

#include<iostream>
using namespace std;

template <typename T>
class Node{
	public: 
		T data;
		Node<T> *next;

		friend ostream& operator<< <T>(ostream& os, const Node& node);
};
