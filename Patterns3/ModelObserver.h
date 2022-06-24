#pragma once
#include <iostream>
#include "Observer.h"
class ModelObserver {
public: 
	void subscribe(std::string payload);
	void publish(std::string payload);
};
