#pragma once
#include <iostream>
class iModel {
public:
	virtual void setData(std::string data) = 0;
	virtual std::string getData() = 0;
private:
	std::string _data;
	ModelObserver observer;
};

