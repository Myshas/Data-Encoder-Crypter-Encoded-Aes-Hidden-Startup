#pragma once
class timer {
private:

public:
	DWORD start;
	DWORD end;
	double calc;
	timer() {
		//	Constructor
		start = 0;
		end = 0;
		calc = 0.0;
	}
	~timer() {
		//	Destructor
	}
	void Start();
	void End();
	void Calc();
};

