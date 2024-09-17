/*
 * BigInt.cpp
 *
 *  Created on: Apr 2, 2023
 *      Author: saad
 i220835
 */

#include "BigInt.h"
#include<iostream>
#include<string>
using namespace std;

//string BigInt:: text="";
BigInt::BigInt() {
	size=0;
	arr=nullptr;
}

BigInt::BigInt(int val){
	size=0;
	int x=val;
	while(x!=0){
		x=x/10;
		size++;
	}
	arr=new int[size];
	for(int i=size-1;i>=0;i--){
		arr[i]=val%10;
		val=val/10;
	}
}

BigInt::BigInt(const string& text){
	size=text.length();
	arr=new int[size];
//	for(int i=0;i<size;i++){
//		arr[i]=i;
//	}
//	cout<<text;
//	cout<<"string"<<endl;
	for(int i=0;i<size;i++){
		arr[i]=text[i]-'0';
	}
//	cout<<"Array"<<endl;

//	for(int i=0;i<size;i++){
//				cout<<arr[i]<<" ";
//			}
}

BigInt::BigInt(const BigInt& copy){
	size=copy.size;
	arr=new int[size];
	for(int i=0;i<size;i++){
		arr[i]=copy.arr[i];
	}
}

BigInt BigInt ::operator+(const BigInt& val) const{
	BigInt temp(0);
	int y;
	int carry=0;
	if(size>val.size){
		y=size;
	}
	else{
		y=val.size;
	}
	temp.size=y;
	int sum;

	for(int i=y-1;i>=0;i--){
		sum=arr[i]+val.arr[i]+carry;
		carry=0;
		if(sum>9){
			sum=sum%10;
			carry=1;
		}
		temp.arr[i]=sum;
	}
	if(carry==1){
		int array[y];
		for(int i=0;i<y;i++){
			array[y]=temp.arr[y];
		}
		delete temp.arr;
		temp.arr=new int[y+1];
		temp.arr[0]=1;
		for(int i=1;i<y+1;i++)
			temp.arr[y]=array[y-1];
	}
	return temp;
}

BigInt BigInt ::operator+(int val) const{
	BigInt temp(0);
	int y=0,carry=0,val1=val,x,sum;
	while(val1!=0){
		val=val1/10;
		y=y+1;
	}
	if(size>y){
		x=size;
	}
	else{
		x=y;
	}
	for(int i=x-1;i>=0;i--){
		sum=arr[i]+val%10+carry;
		carry=0;
		if(sum>9){
			sum=sum%10;
			carry=1;
		}
		temp.arr[i]=sum;
		val=val/10;
	}

	if(carry==1){
			int array[x];
			for(int i=0;i<x;i++){
				array[x]=temp.arr[x];
			}
			delete temp.arr;
			temp.arr=new int[x+1];
			temp.arr[0]=1;
			for(int i=1;i<x+1;i++)
				temp.arr[x]=array[x-1];
		}
	return temp;
}

bool BigInt::operator==(const BigInt& val) const{
	int x=0;
	bool flag=true;
	if(size>val.size){
		x=size;
	}
	else if(size<val.size){
		x=val.size;
	}
	for(int i=0;i<x;i++){
		if(arr[i]!=val.arr[i]){
			flag=false;
		}
	}
	return flag;

}

bool BigInt::operator==(const char* val) const{
	bool flag=true;
	int x=0;
	int sizeA;
	while(val[x]!='\0'){
		x++;
	}

	if(size>x){
		sizeA=size;
	}
	else if(size<=x){
		sizeA=x;
	}

	for(int i=0;i<=sizeA-1;i++){
		if(arr[i]!=(val[i]-48)){
			flag=false;
		}
	}

	return flag;


}

bool BigInt::operator!=(const BigInt& val) const{
	int x=0;
	bool flag=true;
	if(size>val.size){
		x=size;
	}
	else if(size<val.size){
		x=val.size;
	}
	for(int i=0;i<x;i++){
		if(arr[i]!=val.arr[i]){
			flag=false;
		}
	}
	return !flag;
}

bool BigInt::operator<(const BigInt& val) const{
	int x=0;
	bool flag=true;
	if(size>val.size){
		x=size;
		flag=false;
	}
	else if(size<val.size){
		x=val.size;
		flag=true;
	}
	for(int i=0;i<x;i++){
		if(arr[i]<val.arr[i]){
			flag=true;
			break;
		}
	}
	return flag;

}

bool BigInt::operator<=(const BigInt& val) const{
	int x=0;
	bool flag=true;
	if(size>val.size){
		x=size;
		flag=false;
	}
	else if(size<=val.size){
		x=val.size;
		flag=true;
	}
	for(int i=0;i<x;i++){
		if(arr[i]<=val.arr[i]){
			flag=true;
		}
	}
	return flag;

}

bool BigInt::operator>(const BigInt& val) const{
	int x=0;
	bool flag=true;
	if(size>val.size){
		x=size;
		flag=false;
	}
	else if(size<val.size){
		x=val.size;
		flag=true;
	}
	for(int i=0;i<x;i++){
		if(arr[i]<val.arr[i]){
			flag=true;
			break;
		}
	}
	return !flag;
}
bool BigInt:: operator>=(const BigInt& val) const{
	int x=0;
	bool flag=true;
	if(size>val.size){
		x=size;
		flag=false;
	}
	else if(size<val.size){
		x=val.size;
		flag=true;
	}
	for(int i=0;i<x;i++){
		if(arr[i]<val.arr[i]){
			flag=true;
			break;
		}
	}
	return !flag;
}

//BigInt& BigInt::operator++(){
//	BigInt *temp;
//	temp=new BigInt(0);
//	temp->size=size;
//	int carry=0;
////	arr[size]++;
//	for(int i=size-1;i>=0;i--){
//		temp->arr[i]=arr[i]+carry;
//		carry=0;
//		if(temp->arr[i]>9){
//			carry=1;
//			temp->arr[i]=10-temp->arr[i];
////			temp->arr[i-1]=carry;
//		}
//	}
//
//	if(carry==1){
//		int array[size];
//		for(int i=0;i<size;i++){
//			array[i]=temp->arr[i];
//		}
//		delete temp->arr;
//		temp->arr=new int[size+1];
//		temp->arr[0]=1;
//		for(int i=1;i<size+1;i++){
//			temp->arr[i]=array[i];
//		}
//	}
//	return (*temp);
//}


//BigInt BigInt:: operator-(const BigInt& val) const{
//	BigInt temp;
//	int sub=0,power=0;
//	for(int i=size-1;i>=0;i--){
//		sub=arr[i]-val.arr[i];
//		if(sub<0){
//			arr[i-1]--;
//			sub+=10;
//		}
//		temp.arr[i]=sub;
//	}
//	return temp;
//}
////
BigInt::operator string(){
	string s;

//	cout<<"Array \n";
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;

	for(int i=0;i<size;i++){
		s.push_back(arr[i]+'0');

	}
//	cout<<s;

	return s;
}

ostream& operator<<(ostream& output, const BigInt& val){
//	for(int i=0;i<val.getSize();i++){
	output<<val.getArr();
	return output;
}

istream& operator>>(istream& input, BigInt& val){
	string s1;
	input>>s1;
	val=BigInt(s1);
	return input;
}
//
BigInt::operator int(){
	return size;
}

BigInt::~BigInt() {
	delete arr;
}



