#pragma once
class menu {
private:

public:
	menu() {
		// Constructor
	};
	~menu() {
		//	Destructor
	};
	/*	Khai báo hàm mẫu (Declare function prototypes)	*/
	void ShowMenu();
	int SelectOption();
	void ProcessOption(int option);
};

