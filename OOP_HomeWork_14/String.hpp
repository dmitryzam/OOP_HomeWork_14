#pragma once
#include<iostream>

class String {
private:
	char* m_str;
	size_t m_length;
	String(size_t length);
public:
	String();
	String(const char* str);
	String(const String& obj);
	~String();
	// метод получения длины строки:
	size_t length()const { return m_length; }
	// метод очистки строки:
	void clear();
	// Перегрузка операторов:

	char& operator[](int ind);
	char operator[](int ind)const;
	String& operator=(const String& obj);
	String operator+(const String& obj);
	friend std::ostream operator<<(std::ostream& out, const String& obj);
	// TO DO: добавить перегрузку операторов равентсва (==) и неравенства (!=)

	// TO DO: добавить дочерний класс BitString
};