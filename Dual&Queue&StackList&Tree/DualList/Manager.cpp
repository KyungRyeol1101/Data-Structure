#include "Manager.h"

Manager::Manager()
{
	doublelist = new DoubleList;
	stack = new Stack;
	queue = new Queue;
	tree = new Tree;
}

Manager::~Manager()
{
}

void Manager::Doublerun() {
	int _menu = 0;
	int find = 0;
	int Num = 0;
	int _position = 0;

	while (true) {
		cout << "1.�߰� 2.���� 3.��� 4.��ü���� 5.��� �� ����\n6.ã�� 7.�������� 8.�������� 9.������ 10.��ũ�� ������\n�Է� : ";
		cin >> _menu;

		switch (_menu)
		{
		case INSERT:
			cout << "�߰��� ���� : ";
			cin >> Num;
			cout << "��ġ �Է� : ";
			cin >> _position;
			doublelist->insertNode(Num, _position);
			break;
		case DEL:
			if (doublelist->getHead() == NULL) {
				cout << "�����Ͱ� �����ϴ�." << endl << endl;
			}
			else {
				int _location = 0;
				cout << "������ ������ ��ġ : ";
				cin >> _location;
				doublelist->delNode(_location);
			}
			break;
		case COUT:
			if (doublelist->getHead() == NULL) {
				cout << "�����Ͱ� �����ϴ�." << endl << endl;
			}
			else {
				doublelist->displayNode();
			}
			break;
		case ALLDEL:
			if (doublelist->getHead() == NULL) {
				cout << "�����Ͱ� �����ϴ�." << endl << endl;
			}
			else {
				doublelist->AllDel();
			}
			break;
		case COUNTNODE:
			cout << "�� ���� : " << doublelist->CountNode() << endl;
			break;
		case SEARCH:
			if (doublelist->getHead() == NULL) {
				cout << "�����Ͱ� �����ϴ�." << endl << endl;
			}
			else {
				cout << "�� ��° ������ : ";
				cin >> find;
				cout << "����� ã�� ������ : " << doublelist->Find(find) << endl << endl;
			}
			break;
		case BUBBLESORT:
			cout << "�������� �� ��� : " << endl;
			doublelist->displayNode();
			doublelist->BubbleSort();
			cout << "�������� �� ��� : " << endl;
			doublelist->displayNode();
			break;
		case INSERTSORT:
			cout << "�������� �� ��� : " << endl;
			doublelist->displayNode();
			doublelist->InsertSort();
			cout << "�������� �� ��� : " << endl;
			doublelist->displayNode();
			break;
		case QUICKSORT:
			cout << "������ �� ��� : " << endl;
			doublelist->displayNode();
			doublelist->QuickSort(0, doublelist->CountNode() - 1);
			cout << "������ �� ��� : " << endl;
			doublelist->displayNode();
			break;
		case REVERSE:
			cout << "������ �� ��� : " << endl;
			doublelist->displayNode();
			doublelist->Reverse();
			cout << "������ �� ��� : " << endl;
			doublelist->displayNode();
			break;
		default:
			cout << "�ٽ� �Է����ּ���" << endl;
			break;
		}
	}
}

void Manager::StackRun() {
	int menu = 0;
	int _data = 0;

	while (true)
	{
		cout << "1.����\n2.��ȯ\n3.���\n�Է� : ";
		cin >> menu;

		switch (menu)
		{
		case INSERT:
			cout << "�߰� �� ������ : ";
			cin >> _data;
			stack->Push(_data, 0);
			stack->display();
			break;
		case DEL:
			stack->Pop(0);
			stack->display();
			break;
		case COUT:
			if (stack->getdouble()->getHead() == NULL) {
				cout << "�����Ͱ� �����ϴ�." << endl << endl;
			}
			else {
				stack->display();
			}
			break;
		default:
			break;
		}
	}
}

void Manager::QueueRun() {
	int menu = 0;
	int _data = 0;

	while (true)
	{
		cout << "1.����\n2.��ȯ\n3.���\n�Է� : ";
		cin >> menu;

		switch (menu)
		{
		case INSERT:
			cout << "�߰� �� ������ : ";
			cin >> _data;
			queue->enqueue(_data, -1);
			queue->display();
			break;
		case DEL:
			queue->dequeue(0);
			queue->display();
			break;
		case COUT:
			if (queue->getdouble()->getHead() == NULL) {
				cout << "�����Ͱ� �����ϴ�." << endl << endl;
			}
			else {
				queue->display();
			}
			break;
		default:
			break;
		}
	}
}

void Manager::TreeRun() {
	int menu = 0;
	int treedata = 0;

	while (true)
	{
		cout << "1.����\n2.��ü����\n3.���\n�Է� : ";
		cin >> menu;

		switch (menu)
		{
		case INSERT:
			cout << "�߰��� ������ : ";
			cin >> treedata;
			tree->createNode(treedata);
			break;
		case DEL:
			tree->delNode(tree->getBinaryTree());
			break;
		case COUT:
			tree->display(tree->getBinaryTree());
			break;
		default:
			break;
		}
	}
}