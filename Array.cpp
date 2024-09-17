/*
 * Array.cpp
 *
 *  Created on: Mar 27, 2023
 *      Author: saad
 	i220835
 */

#include "Array.h"
#include<iostream>

Array::Array() {
	sizeA=0;
	array = nullptr;
}
//
Array::Array(int s){
	sizeA=s;
	array=new int[sizeA];
	for(int i=0;i<sizeA;i++){
		array[i]=0;
	}



}

//
Array::Array(int *arr, int s){
	sizeA=s;
	array=new int[sizeA];
	for(int i=0;i<sizeA;i++){
		array[i]=arr[i];
	}
}
//
Array::Array(const Array &other){
	sizeA=other.sizeA;
	array=new int[sizeA];
	for(int i=0;i<sizeA;i++){
		array[i]=other.array[i];
	}
}


//Array::Array operator+(const Array&){
//	Array* temp;
//}
const Array & Array:: operator=(const Array& other){
//	Array temp;
//	temp.sizeA=other.sizeA;
//	for(int i=0;i<sizeA;i++){
//		(temp.array[i])=(other.array[i]);
//	}
//	return temp;
	sizeA=other.sizeA;
	for(int i=0;i<sizeA;i++){
		array[i]=other.array[i];
	}
	return other;

}

Array Array:: operator+(const Array& other){
	Array temp(other);
	for(int i=0;i<sizeA;i++){
		(temp.array[i])+=array[i];
	}
	return temp;
}

Array Array:: operator-(const Array& other){

	Array temp(other);
	for(int i=0;i<sizeA;i++){
		(temp.array[i])=array[i]-temp.array[i];
	}
	return temp;

}
//
Array Array::operator++(){
	for(int i=0;i<sizeA;i++){
		array[i]=array[i]+1;
	}
	Array temp(array,sizeA);
	return temp;
}
//
Array Array:: operator++(int ){
	for(int i=0;i<sizeA;i++){
			array[i]=array[i]+1;
		}
		Array temp(array,sizeA);
		return temp;
}
//
Array& Array:: operator--(int ){
	Array* temp=new Array(nullptr,0);
	for(int i=0;i<sizeA;i++){
		temp->array[i]=array[i];
		array[i]=array[i]-1;
	}
	return (*temp);

}

bool Array::operator==(const Array& other)const{
	bool flag =true;
	for(int i=0;i<sizeA;i++){
		if(array[i]!=other.array[i]){
			flag=false;
		}
	}
	return flag;
}

bool Array::operator!(){
	bool flag =false;
	if(array==nullptr){
		flag =true;
	}
	return flag;
}

void Array::operator+=(const Array& other){
	for(int i=0;i<sizeA;i++){
		(array[i])+=other.array[i];
	}
}
void Array::operator-=(const Array& other){
	for(int i=0;i<sizeA;i++){
		(array[i])-=other.array[i];
	}
}
int Array::operator()(int idx, int val){
	int x=-1;
	if(array[idx]==val){
		x=1;
		array[idx]=0;
	}
	return x;
}

Array::~Array() {
	delete [] array;
}

ostream& operator<<(ostream& input, const Array& other){
	for(int i=0;i<other.getSize();i++){
		input<<other.getArray()[i];
	}
	return input;
}

istream& operator>>(istream& ouput, Array& other){
	for(int i=0;i<other.getSize();i++){
		ouput>>other.getArray()[i];
	}
	return ouput;
}



