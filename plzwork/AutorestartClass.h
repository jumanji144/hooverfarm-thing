#pragma once
#include <string>
#include <vector>
#include <Windows.h>

class AutorestartClass
{
public:
	void start(bool);
	void unlockRoblox();
	bool findRoblox();
	void killRoblox();
	std::string SHA256(const char* str);

	void _usleep(int microseconds);
	void _sleep(int miliseconds);
	
private:
	std::vector<PROCESS_INFORMATION> robloxProcesses;
};
