#pragma once

#include "Tree.h"

template <class T>
class TreeIterator
{
public:
	Tree<T>* node;
	DListIterator<Tree<T>*> childIter;

	TreeIterator(Tree<T>* root);
	void resetIterator();
	void root();
	void up();
	void down();
	void childBack();
	void childForth();
	void childStart();
	void childEnd();
	void appendChild(T item);
	void prependChild(T item);
	void insertChildBefore(T item);
	void insertChildAfter(T item);
	void removeChild();
	bool childValid();
	T childItem();
	T item();
};
template <class T>
TreeIterator<T>::TreeIterator(Tree<T>* root)
{
	node = root;
	resetIterator();
}

template <class T>
void TreeIterator<T>::resetIterator()
{

}

template <class T>
void TreeIterator<T>::root()
{

}

template <class T>
void TreeIterator<T>::up()
{

}

template <class T>
void TreeIterator<T>::down()
{


}

template <class T>
void TreeIterator<T>::childBack()
{

}

template <class T>
void TreeIterator<T>::childForth()
{

}

template <class T>
void TreeIterator<T>::childStart()
{

}

template <class T>
void TreeIterator<T>::childEnd()
{

}

template <class T>
void TreeIterator<T>::appendChild(T item)
{

}

template <class T>
void TreeIterator<T>::prependChild(T item)
{

}

template <class T>
void TreeIterator<T>::insertChildBefore(T item)
{



}

template <class T>
void TreeIterator<T>::insertChildAfter(T item)
{



}

template <class T>
void TreeIterator<T>::removeChild()
{


}

template <class T>
bool TreeIterator<T>::childValid()
{
	return childIter.isValid();
}

template <class T>
T TreeIterator<T>::childItem()
{
	return childIter->node->data;
}

template <class T>
T TreeIterator<T>::item()
{
	return node->data;
}
