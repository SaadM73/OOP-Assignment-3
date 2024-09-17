/*
 * Array.h
 *
 *  Created on: Mar 27, 2023
 *      Author: saad
 */

#ifndef ARRAY_H_
#define ARRAY_H_

#include<iostream>
using namespace std;
class Array {
	int sizeA;
	int* array;
public:

	Array();
	Array(int size);
	Array(int *arr, int size);
//	const Array & operator=(const Array&);
//
////	Array operator+(const Array&);
//
	~Array();
	Array(const Array &other);

	int& operator[](int i){
		return array[i];
	}

	int& operator[](int i)const{
		return array[i];
	}

	const Array & operator=(const Array&);
	Array operator+(const Array&);
	Array operator-(const Array&);
	Array operator++();
	Array operator++(int);
	Array& operator--(int);
	bool operator==(const Array&)const;
	bool operator!();
	void operator+=(const Array&);
	void operator-=(const Array&);
	int operator()(int idx, int val);



	int* getArray() const {
		return array;
	}

	void setArray(int *array) {
		this->array = array;
	}
	int size () {
			return sizeA;
	}
	int getSize() const {
		return sizeA;
	}

	void setSize(int size) {
		this->sizeA = size;
	}
};

#endif /* ARRAY_H_ */
