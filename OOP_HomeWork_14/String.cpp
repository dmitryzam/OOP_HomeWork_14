#include "String.hpp"
#include<iostream>
#include<cstring>

String::String(size_t length){
	m_str = new char[length + 1];
	for (size_t i{}; i < m_length; ++i)
		m_str[i] = '\0';
	m_length = length;
}

String::String(){
	m_str = new char[1];
	m_str[0] = '\0';
	m_length = 0;
}

String::String(const char* str){
	m_length = strlen(str);	
	m_str = new char[m_length + 1];
	for (size_t i{}; i < m_length; ++i)
		m_str[i] = str[i];
	m_str[m_length] = '\0';
}

String::String(const String& obj){
	m_length = obj.length();
	m_str = new char[m_length + 1];
	for (size_t i{}; i < m_length; ++i)
		m_str[i] = obj[i];
	m_str[m_length] = '\0';
}

String::~String(){
	delete[] m_str;
	m_length = 0;
}

void String::clear(){
	if (m_length == 0)
		return;
	delete[] m_str;
	m_length = 0;
	m_str = new char[1];
	m_str[0] = '\0';
}

char& String::operator[](int ind){
	if (ind > m_length) {
		return m_str[m_length - 1];
	}
	return m_str[ind];	
}

char String::operator[](int ind) const{
	if (ind > m_length) {
		return m_str[m_length - 1];
	}
	return m_str[ind];	
}

String& String::operator=(const String& obj){
	if (this == &obj)
		return *this;
	delete[] m_str;
	m_length = obj.length();
	m_str = new char[m_length + 1];
	for (size_t i{}; i < m_length; ++i)
		m_str[i] = obj[i];
	m_str[m_length] = '\0';
	return *this;
}

String String::operator+(const String& obj){
	size_t tmp_length = m_length + obj.length();
	String tmp_str(tmp_length);
	size_t i, j;
	for (i = 0; i < m_length; ++i)
		tmp_str[i] = m_str[i];
	for (j = 0; j < obj.length(); ++j)
		tmp_str[i + j] = obj[j];
	tmp_str[tmp_length] = '\0';
	return tmp_str;
}
// TO DO: доделать перегрузку оператора вывода:
/*std::ostream operator<<(std::ostream& out, const String& obj) {
	for (size_t i{}; i < obj.length(); ++i) {
		out << obj[i];
	}	
	return out;
}*/
