#include <iostream>
#include <string>
#include "../Sources/Headers/menu.h"
#include "../Sources/Headers/cryptor.h"
#include "../Sources/Headers/animation.h"


/*	Tạo object từ classes (Create object from classes)	*/
cryptor CryptorMenuObj;
animation AnimationMenuObj;

/*	Định nghĩa các hàm class 'menu' (Define 'menu' class functions)	*/
void menu::ShowMenu() {
	std::cout << "1. Mã hoá file\n";
	std::cout << "2. Giải mã file\n";
	std::cout << "3. Thoát chương trình";
	std::cout << std::endl;
}

int menu::SelectOption() {
	int i;
	bool ValidOption = false;
	while (ValidOption == false) {
		system("cls");
		ShowMenu();
		std::cout << std::endl;
		std::cout << "Nhập lựa chọn: ";
		std::cin >> i;
		if (i > 0 && i < 4) {
			ValidOption = true;
		}
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	return i;
}

void menu::ProcessOption(int option) {
	switch (option) {
	case 1: {
		system("cls");
		ShowMenu();
		std::cout << std::endl;
		std::string filename;
		long long int pin;
		std::cout << "# Backup file gốc trước khi mã hoá tránh lỗi.\n";
		std::cout << "# Mã PIN phải là số nguyên (ví dụ: 9595)\n";
		std::cout << "# Mã hoá lại với số PIN thấp hơn nếu file bị lỗi và không thể giải mã\n";
		std::cout << std::endl;
		std::cout << "Nhập tên file: ";
		std::getline(std::cin, filename);
		std::cout << "Nhập pin mã hoá: ";
		std::cin >> pin;
		CryptorMenuObj.Encrypt(filename, pin);
		break; 
	}
	case 2: {
		system("cls");
		ShowMenu();
		std::cout << std::endl;
		std::string filename;
		long long int pin;
		std::cout << "# Backup file gốc trước khi giải mã tránh lỗi hoặc để thử lại nếu nhập sai mã.\n";
		std::cout << "# Nhập sai mã PIN sẽ dẫn tới file hỏng hoàn toàn\n";
		std::cout << std::endl;
		std::cout << "Nhập tên file: ";
		std::getline(std::cin, filename);
		std::cout << "Nhập pin mã hoá: ";
		std::cin >> pin;
		CryptorMenuObj.Decrypt(filename, pin);
		break; 
	}
	case 3:
		system("cls");
		ShowMenu();
		std::cout << std::endl;
		std::cout << "Đang thoát chương trình ";
		AnimationMenuObj.DotAnimation(100);
		exit(0);
		break;
	default:
		break;
	}
}
