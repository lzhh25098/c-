#include <iostream>
#include "string"

bool check_login(std::string user_name, std::string pwd) {
    //账户
    std::string name = "520zk";
    //密码
    std::string password = "123456";
    std::cout << "请输入账号：" << std::endl;
    //输入账户
    std::cin >> user_name;
    std::cout << "请输入密码：" << std::endl;
    //输入密码
    std::cin >> pwd;
    //判断用户名密码是否相等，相等返回真
    if (user_name == name && password == pwd) return true;
    //否则返回假继续递归调用函数
    return false;

}

int main() {

    if (check_login("", "") == false) {
        std::cout << "账号密码错误" << std::endl;
        check_login("", "");
    }
    std::cout << "登录成功!" << std::endl;
    system("pause");
    return 0;
}

