#pragma once
#include <iostream>
#include <string.h>

using namespace std;

	class Mystring {
	public:
		Mystring(const char* _str = "");
		Mystring(Mystring& _str);
		Mystring& operator=(Mystring& _str);
		Mystring& operator=(const char* _str);
		Mystring& operator+=(const Mystring& _str);
		Mystring& operator+=(const char* _str);
		Mystring  operator+(const Mystring& _str);
		char& operator[](const int index);
		friend std::ostream& operator<<(std::ostream & os, const Mystring& _str);
		friend std::istream& operator>>(std::istream & is, const Mystring& _str);
		friend Mystring operator+(const char* _str, const Mystring& m_str);
		friend Mystring operator+(const Mystring& m_str, const char* _str);
		friend Mystring operator+(const Mystring& m_str1, const Mystring& m_str2);
		friend bool operator==(const Mystring& m_str, const char* _str);
		friend bool operator==(const char* _str,const Mystring& m_str);
		friend bool operator==(const Mystring& m_str1, const Mystring& m_str2);
		friend bool operator!=(const Mystring& m_str, const char* _str);
		friend bool operator!=(const char* _str,const Mystring& m_str);
		friend bool operator!=(const Mystring& m_str1, const Mystring& m_str2);
		~Mystring();
	private:
		char* str;
		char* restr(const char* str);
	};
//}
