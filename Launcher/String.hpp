#pragma once
#include <apiquery2.h>
#include <string>

using namespace std;
class String
{
	char        _content[0x10];
	int         _contentLength = 0;
	int         _maxContentLength = 0;

public:
	operator std::string(void)
	{
		return std::string(Get());
	}

	char* Get(void)
	{
		if (DWORD(this) <= 0x1000)
			return (char*)"";

		return _maxContentLength >= 0x10
			? *reinterpret_cast<char**>(_content)
			: _content;
	}
private:
	operator const char* (void)
	{
		return Get();
	}
};
