#include "Manager.h"

enum Linked {
	D = 1,
	S = 2,
	Q = 3,
	T = 4,
};

void main() {
	Manager *manager = new Manager;

	int menu = 0;
	cout << "1.����ũ�帮��Ʈ\n2.����\n3.����ť\n4.Ʈ��\n�Է� : ";
	cin >> menu;
	switch (menu)
	{
	case D:
		manager->Doublerun();
		delete manager;
		break;
	case S:
		manager->StackRun();
		delete manager;
		break;
	case Q:
		manager->QueueRun();
		delete manager;
		break;
	case T:
		manager->TreeRun();
		delete manager;
		break;
	default:
		break;
	}
}