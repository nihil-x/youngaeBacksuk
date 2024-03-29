#pragma once
#include <bitset>
#define KEYMAX 256

#define KEYMANAGER		KeyManager::GetInstance()

class KeyManager
{
	SINGLETONE(KeyManager)

private:
	bitset<KEYMAX> _keyUp;
	bitset<KEYMAX> _keyDown;

public:
	bool isOnceKeyDown(int key);
	bool isOnceKeyUp(int key);
	bool isStayKeyDown(int key);
	bool isToggleKey(int key);
};

