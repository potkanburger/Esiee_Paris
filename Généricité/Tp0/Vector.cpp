#include <cassert>
#include <iostream>
#include "Vector.h"

Vector::Vector(size_t taille){
	this->n_ = taille;
	this->data_ = new int[n_];
}


Vector::Vector(const Vector& vect){
	this->n_ = vect.getSize();
	this->data_ = new int[n_];
	for (size_t i = 0; i < this->n_; i++){
		this->data_[i] = vect[i];
	}
}

Vector::~Vector() {
	delete data_;
}


int Vector::operator[](size_t i) const{
	assert(i < this->n_);
	return this->data_[i];
}

int& Vector::operator[](size_t i) {
	assert(i < this->n_);
	return this->data_[i];
}

Vector& Vector::operator=(const Vector& vect){
	this->n_ = vect.getSize();
	this->data_ = new int[n_];

	for (size_t i = 0; i < this->n_; i++)
	{
		data_[i] = vect[i];
	}
	return *this;
}

size_t Vector::getSize() const{
	return this->n_;
}

int* Vector::getData() const{
	return this->data_;
}

void Vector::print() const{
	for (size_t i = 0; i < this->n_; i++){
		std::cout << this->data_[i] << std::endl;
	}
}