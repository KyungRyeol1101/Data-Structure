#include "LinkedManager.h"

void main() {
	int menu = 0;

	std::cout << "�ڷᱸ���� �����Ͻðڽ��ϱ�?" << std::endl << std::endl;
	std::cout << "1.�̱۸�ũ�帮��Ʈ\n2.����ũ�帮��Ʈ\n3.����\n4.ť\n5.Ʈ��\n\n�Է� : ";
	std::cin >> menu;

	switch (menu)
	{ 
	case CHOICELINDED::SLL:
		std::cout << "\nSingle Liked List" << std::endl;
		CLinkedManager::GetInstance()->SingleRun();
		break;
	case CHOICELINDED::DLL:
		std::cout << "\nDouble Liked List" << std::endl;
		CLinkedManager::GetInstance()->DoubleRun();
		break;
	default:
		break;
	}
}