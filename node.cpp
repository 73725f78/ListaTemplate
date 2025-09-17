#include "node.hpp"


template <typename T>
ostream& operator<< <T>(ostream& os, const Node<T>& node){
	return os << node.data;
}

