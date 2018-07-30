#pragma once
#include "Node.h"

class DoubleList
{
private:
	Node *Head;
	Node *Tail;
	int IDCount;
public:
	DoubleList();
	~DoubleList();

	Node *getHead() { return Head; }
	Node *getTail() { return Tail; }

	Node *ArrangeNode(int pos);

	void insertNode(int _data, int _location); //���� �߰� (��ġ �Է� ����)
	void delNode(int _location); //���� (��ġ �Է� ����)
	void displayNode(); //���
	void AllDel(); //��� ����
	int CountNode(); //���� ��� ����
	int Find(int _location); //��ġ�� ã�� ��� ������ ã��

	// Sort �˰���
	void BubbleSort();
	void InsertSort();
	void QuickSort(int Left, int Right);
	int Partition(int Left, int Right);
	void Swap(Node *tmp1, Node *tmp2);

	void Reverse();
};

