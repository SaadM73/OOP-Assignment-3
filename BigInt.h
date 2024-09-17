/*
 * BigInt.h
 *
 *  Created on: Apr 2, 2023
 *      Author: saad
 */

#ifndef BIGINT_H_
#define BIGINT_H_
#include<string>
#include<iostream>
using namespace std;

class BigInt {
	int size;
	int* arr;
public:
	BigInt();
	BigInt(int val);
	BigInt(const string& text);
	BigInt(const BigInt& copy);

	BigInt operator+(const BigInt& val) const;
	BigInt operator+(int val) const;
	BigInt operator-(const BigInt& val) const;
	BigInt operator-(int val) const;

	bool operator==(const BigInt& val) const;
	bool operator==(const char* val) const;
	bool operator!=(const BigInt& val) const;
	bool operator<(const BigInt& val) const;
	bool operator<=(const BigInt& val) const;
	bool operator>(const BigInt& val) const;
	bool operator>=(const BigInt& val) const;


	BigInt& operator++(); // Pre-increment Operator
	BigInt operator++(int); // Post-increment Operator
	BigInt& operator--(); // Pre-decrement Operator
	BigInt operator--( int ); // Post-decrement Operator


	~BigInt();

//
	operator string();
	operator int();

	int* getArr() const {
		return arr;
	}

	void setArr(int *arr) {
		this->arr = arr;
	}

	int getSize() const {
		return size;
	}

	void setSize(int size) {
		this->size = size;
	}
};

ostream& operator<<(ostream& output, const BigInt& val); // outputs the BigInt
istream& operator>>(istream& input, BigInt& val); // inputs the BigInt

#endif /* BIGINT_H_ */
