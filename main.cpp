#include <iostream>
#include "string"

bool check_login(std::string user_name, std::string pwd) {
    //�˻�
    std::string name = "520zk";
    //����
    std::string password = "123456";
    std::cout << "�������˺ţ�" << std::endl;
    //�����˻�
    std::cin >> user_name;
    std::cout << "���������룺" << std::endl;
    //��������
    std::cin >> pwd;
    //�ж��û��������Ƿ���ȣ���ȷ�����
    if (user_name == name && password == pwd) return true;
    //���򷵻ؼټ����ݹ���ú���
    return false;

}

int main() {

    if (check_login("", "") == false) {
        std::cout << "�˺��������" << std::endl;
        check_login("", "");
    }
    std::cout << "��¼�ɹ�!" << std::endl;
    system("pause");
    return 0;
}

