#include "LinkedManager.h"

CLinkedManager* CLinkedManager::m_pInstance = NULL;

CLinkedManager::CLinkedManager() : m_Menu(0)
{
	Single = new CSLL;
	Double = new CDLL;
}


CLinkedManager::~CLinkedManager()
{
	delete Single;
	delete Double;
}

void CLinkedManager::SingleRun()
{
	while (true)
	{
		std::cout << "1.�߰� 2.���� 3.��� 4.��ü���� 5.��� �� ���� 6.ã��\n�Է� : ";
		std::cin >> m_Menu;

		switch (m_Menu)
		{
		case INSERT:
			break;
		case DEL:
			break;
		case PRINT:
			break;
		case ALL_DEL:
			break;
		default:
			break;
		}
	}
}

void CLinkedManager::DoubleRun()
{
	while (true)
	{
		std::cout << "1.�߰� 2.���� 3.��� 4.��ü���� 5.��� �� ����\n6.ã�� 7.�������� 8.�������� 9.������ 10.��ũ�� ������\n�Է� : ";
		std::cin >> m_Menu;

		switch (m_Menu)
		{
		case INSERT:
			break;
		case DEL:
			break;
		case PRINT:
			break;
		case ALL_DEL:
			break;
		default:
			break;
		}
	}
}
