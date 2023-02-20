#include<iostream>
#include<fstream>
using namespace std;

struct User {
    string name;
    string password;
};

int main(){
    string regname;
    string regpassword;
    string user_name;
    string user_password;
    bool flag = true;  // 設置一個標誌，跳出無限迴圈
    while(flag) {
        int i=0;
        cout << "1.register" << endl << "2.login" << endl<<"3.exit" << "your choice: ";
        cin >> i;
        if (i == 1) {
            cout << "select a user_name:" << endl;
            cin >> regname;
            cout << "select user_password:" << endl;
            cin >> regpassword;

            // 检查用户是否已经存在
            ifstream check;
            check.open(regname + ".txt");
            if (check) {
                cout << "User already exists." << endl;
                check.close();
                continue;
            }
            check.close();

            // 写入用户信息到文件中
            ofstream newFile;
            newFile.open(regname + ".txt", ios::out);
            newFile << regname << endl << regpassword;
            newFile.close();
            cout << "Registration successful." << endl;
        }
        else if (i == 2) {
            cout << "enter user_name:" << endl;
            cin >> user_name;
            cout << "enter user_password:" << endl;
            cin >> user_password;

            // 从文件中读取用户信息
            ifstream read;
            read.open(user_name + ".txt");
            if(!read.is_open()) {
                cout << "User does not exist." << endl;
                continue;
            }
            User user;
            getline(read, user.name);
            getline(read, user.password);

            // 验证用户名和密码是否匹配
            if (user_password != user.password) {
                cout << "Incorrect password." << endl;
            }
            else {
                cout << "Welcome, " << user.name << "!" << endl;
            }
            read.close();       
        }
        else if(i==3){
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
   
}