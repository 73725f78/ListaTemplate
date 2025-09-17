#pragma once

#include "node.hpp"

template <typename T>
class Lista{
	private:
		Node<T>* head;
	public:
		void insert(T data){
			Node<T>* temp = new Node<T>();
			temp->data = data;

			if(head){
				temp->next = head;
				head = temp;
			}else
				head = next;
				
		}

		friend ostream& operator<<(ostream& os, const Lista<T> &lista);
};


template <typename T>
ostream& operator<< <T>(ostream& os, const Lista<T> &lista){
	Node<T> *temp = lista.head;

	while(temp){
		os << temp << "->";
		temp = temp->next;
	}
	return os << "nullptr";
	
}
