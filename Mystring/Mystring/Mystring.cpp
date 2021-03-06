#include "stdafx.h"
#include "Mystring.h"

Mystring::Mystring(const char* _str) {
	str = restr(_str);
}
Mystring::Mystring(Mystring & _str) {
	str = restr(_str.str);
}
char* Mystring::restr(const char* _str) {
	int len = strlen(_str) + sizeof(char);
	char* newStr=new char[len];
	strcpy_s(newStr,len,_str);
	return newStr;
}
Mystring& Mystring::operator=(Mystring& _str) {
	delete[] str;
	str = restr(_str.str);
	return *this;
}
Mystring & Mystring::operator=(const char * _str)
{
	delete[] str;
	str = restr(_str);
	return *this;
	// TODO: 在此处插入 return 语句
}
Mystring & Mystring::operator+=(const Mystring & _str)
{
	int len = strlen(str) + strlen(_str.str) + sizeof(char);
	char *pstr = new char[len];
	memset(pstr, 0, len);
	strcat_s(pstr,len, str);
	strcat_s(pstr,len, _str.str);
	delete[]str;
	str= pstr;
	return *this;
	// TODO: 在此处插入 return 语句
}
Mystring & Mystring::operator+=(const char * _str)
{
	int len = strlen(str) + strlen(_str) + sizeof(char);
	char *pstr = new char[len];
	memset(pstr, 0, len);
	strcat_s(pstr, len, str);
	strcat_s(pstr, len, _str);
	delete[]str;
	str = pstr;
	return *this;
	// TODO: 在此处插入 return 语句
}
Mystring Mystring::operator+(const Mystring & _str)
{
	Mystring temp = *this;
	temp += _str;
	return temp;
}
char & Mystring::operator[](const int index)
{
	return str[index];
	// TODO: 在此处插入 return 语句
}
Mystring::~Mystring() {
	delete[] str;
	str = NULL;
}

std::ostream & operator<<(std::ostream & os, const Mystring & _str) {
	os << _str.str;
	return os;
	// TODO: 在此处插入 return 语句
};

std::istream & operator>>(std::istream & is, const Mystring & _str) {
	is >> _str.str;
	return is;
	// TODO: 在此处插入 return 语句
}

Mystring operator+(const char * _str, const Mystring & m_str)
{
	Mystring temp(_str);
	temp +=m_str;
	return temp;
}
Mystring operator+(const Mystring & m_str,const char * _str)
{
	Mystring temp(_str);
	temp += m_str;
	return temp;
}

Mystring operator+(const Mystring & m_str1, const Mystring & m_str2)
{
	Mystring temp(m_str2.str);
	temp += m_str1;
	return temp;
}

bool operator==(const Mystring & m_str, const char * _str)
{
	return strcmp(m_str.str, _str)==0;
}

bool operator==(const char * _str, const Mystring & m_str)
{
	return strcmp(m_str.str, _str) == 0;
}

bool operator==(const Mystring & m_str1, const Mystring & m_str2)
{
	return  strcmp(m_str1.str,m_str2.str) == 0;
}

bool operator!=(const Mystring & m_str, const char * _str)
{
	return strcmp(m_str.str, _str) != 0;
}

bool operator!=(const char * _str, const Mystring & m_str)
{
	return strcmp(m_str.str, _str) != 0;
}

bool operator!=(const Mystring & m_str1, const Mystring & m_str2)
{
	return strcmp(m_str1.str, m_str2.str) != 0;
}

