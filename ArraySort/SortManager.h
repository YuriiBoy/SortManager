#pragma once

class SortManager
{
protected:
	int size;
	int a;
	int b;
	std::vector<int> Array;
	
public:
	SortManager();
	SortManager(int size, int a, int b, std::vector<int> Array);
	virtual void setArray();
	virtual void display();
	virtual void message() = 0;
};

