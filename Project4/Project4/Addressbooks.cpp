#include "Addressbook.h"

void Addressbooks::showmenu() {
	cout << "**********************" << endl;
	cout << "*****1.添加联系人*****" << endl;
	cout << "*****2.显示联系人*****" << endl;
	cout << "*****3.删除联系人*****" << endl;
	cout << "*****4.查找联系人*****" << endl;
	cout << "*****5.修改联系人*****" << endl;
	cout << "*****6.清空联系人*****" << endl;
	cout << "*****0.退出通讯录*****" << endl;
	cout << "**********************" << endl;
}
void Addressbooks::addPerson() {
	if (m_Size >= MAX) {
		cout << "通讯录已满" << endl;
		return;
	}
	else {
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		personarray[m_Size].m_Name = name;

		int sex;
		cout << "请输入性别(男1/女2)" << endl;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				personarray[m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误" << endl;
		}

		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		personarray[m_Size].m_Age = age;

		string phone;
		cout << "请输入电话" << endl;
		cin >> phone;
		personarray[m_Size].m_Phone = phone;

		string address;
		cout << "请输入地址" << endl;
		cin >> address;
		personarray[m_Size].m_Address = address;

		m_Size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

void Addressbooks::showPerson() {
	if (m_Size == 0) {
		cout << "记录为空" << endl;
	}
	else {
		for (int i = 0;i < m_Size;i++) {
			cout << "姓名：" << personarray[i].m_Name << "\t";
			cout << "性别：" << ((personarray[i].m_Sex == 1) ? "男" : "女") << "\t";
			cout << "年龄：" << personarray[i].m_Age << "\t";
			cout << "电话：" << personarray[i].m_Phone << "\t";
			cout << "地址：" << personarray[i].m_Address << endl;
		}
		system("pause");
		system("cls");
	}
}

int Addressbooks::isExist(string name) {
	for (int i = 0;i < m_Size;i++) {
		if (personarray[i].m_Name == name) return i;
	}
	return -1;
}

void Addressbooks::deletePerson() {
	cout << "请输入删除人姓名" << endl;
	string name;
	cin >> name;
	if (isExist(name) == -1) cout << "查无此人" << endl;
	else {
		for (int i = isExist(name);i < m_Size - 1;i++) {
			personarray[i] = personarray[i + 1];
		}
		m_Size--;
		cout << "删除成功" << endl;
	}
}
void Addressbooks::findPerson() {
	cout << "请输入要查找的人" << endl;
	string name;
	cin >> name;
	int ret = isExist(name);
	if (ret == -1) cout << "查无此人" << endl;
	else {
		cout << "姓名：" << personarray[ret].m_Name << "\t";
		cout << "性别：" << ((personarray[ret].m_Sex == 1 ? "男" : "女")) << "\t";
		cout << "年龄：" << personarray[ret].m_Age << "\t";
		cout << "电话：" << personarray[ret].m_Phone << "\t";
		cout << "地址：" << personarray[ret].m_Address << "\n";
	}
	system("pause");
	system("cls");
}
void Addressbooks::modifyPerson() {
	cout << "请输入要修改的人" << endl;
	string name;
	cin >> name;
	int ret = isExist(name);
	if (ret == -1) cout << "查无此人" << endl;
	else {
		int cnt = 0;
		cout << "请选择修改模式" << endl;
		cout << "0.全部修改 1.选择修改" << endl;
		cin >> cnt;
		if (!cnt) {
			string name1;
			cout << "请输入姓名" << endl;
			cin >> name1;
			personarray[ret].m_Name = name1;

			int sex;
			cout << "请输入性别(男1/女2)" << endl;
			while (true) {
				cin >> sex;
				if (sex == 1 || sex == 2) {
					personarray[ret].m_Sex = sex;
					break;
				}
				cout << "输入有误" << endl;
			}

			int age;
			cout << "请输入年龄" << endl;
			cin >> age;
			personarray[ret].m_Age = age;

			string phone;
			cout << "请输入电话" << endl;
			cin >> phone;
			personarray[ret].m_Phone = phone;

			string address;
			cout << "请输入地址" << endl;
			cin >> address;
			personarray[ret].m_Address = address;
		}
		else {
			while (true) {
				int select = 0;
				cout << "请选择要修改的内容" << endl;
				cout << "1.姓名 2.性别 3.年龄 4.电话 5.地址 0.退出" << endl;
				cin >> select;
				switch (select) {
				case 1:
				{
					string name1;
					cout << "请输入姓名" << endl;
					cin >> name1;
					personarray[ret].m_Name = name1;
					break;
				}
				case 2: {
					int sex;
					cout << "请输入性别(男1/女2)" << endl;
					while (true) {
						cin >> sex;
						if (sex == 1 || sex == 2) {
							personarray[ret].m_Sex = sex;
							break;
						}
						cout << "输入有误" << endl;
					}
					break;
				}
				case 3: {
					int age;
					cout << "请输入年龄" << endl;
					cin >> age;
					personarray[ret].m_Age = age;
					break;
				}
				case 4: {
					string phone;
					cout << "请输入电话" << endl;
					cin >> phone;
					personarray[ret].m_Phone = phone;
					break;
				}
				case 5: {
					string address;
					cout << "请输入地址" << endl;
					cin >> address;
					personarray[ret].m_Address = address;
					break;
				}
				case 0:
					cout << "退出修改" << endl;
					break;
				default:
					cout << "无效数字" << endl;
					break;
				}
				if (select == 0) break;
			}
		}
	}
	system("pause");
	system("cls");
}
void Addressbooks::clearPerson() {
	cout << "是否确认清空 0.是 1.否" << endl;
	int cnt = 0;
	cin >> cnt;
	if (!cnt) {
		m_Size = 0;
		cout << "通讯录已清空" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "已取消清空" << endl;
	}
	system("pause");
	system("cls");
}