#pragma once
#include <vector>
#include <string>
#include <conio.h>
#include <iostream>
#include "my_output.h"

using namespace std;

class Addons {
public: 
	size_t Split(const string& str, vector<string>& v, char ch);
	bool Access();
	int GetWindowSize();
};