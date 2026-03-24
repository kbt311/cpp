#include "Addressbook.h"

int main() {
	int select = 0;
	Addressbooks abs;
	abs.m_Size = 0;
	while (true) {
		abs.showmenu();
		cin >> select;
		switch (select) {
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		case 1:
			abs.addPerson();
			break;
		case 2:
			abs.showPerson();
			break;
		case 3:
			abs.deletePerson();
			break;
		case 4:
			abs.findPerson();
			break;
		case 5:
			abs.modifyPerson();
			break;
		case 6:
			abs.clearPerson();
			break;
		}
	}
}