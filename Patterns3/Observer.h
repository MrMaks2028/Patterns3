#pragma once
#include <iostream>
class Observer {
public:
	virtual void subscribe(std::string payload) = 0;
	virtual void publish(std::string payload) = 0;
};
