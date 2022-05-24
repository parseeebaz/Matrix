//
// Created by mfbut on 11/14/2019.
//

#include "VectorIterator.h"
#include "ConstColumnIterator.h"

Matrix::VectorIterator::VectorIterator(BaseVector* vector, int pos) {
  myVec = vector;
  myPos = pos;
}

Matrix::VectorIterator::operator ConstVectorIterator() const {

}

Matrix::VectorIterator::value_type& Matrix::VectorIterator::operator*() {
  return *myPos;
}

const Matrix::VectorIterator::value_type& Matrix::VectorIterator::operator*() const {

}

Matrix::VectorIterator::value_type& Matrix::VectorIterator::operator[](int offset) {
  return myVec.at(myPos + offset);
}

const Matrix::VectorIterator::value_type& Matrix::VectorIterator::operator[](int offset) const {

}

Matrix::VectorIterator& Matrix::VectorIterator::operator++() {
  ++myPos;
  return this*;
}

const Matrix::VectorIterator Matrix::VectorIterator::operator++(int) {
  VectorIterator temp = *this;
  ++(*this);
  return temp;
}

Matrix::VectorIterator& Matrix::VectorIterator::operator--() {
  --myPos;
  return this*;
}

const Matrix::VectorIterator Matrix::VectorIterator::operator--(int) {
  VectorIterator temp = *this;
  --(*this);
  return temp;
}

Matrix::VectorIterator& Matrix::VectorIterator::operator+=(int amount) {
  return myPos + amount;
}

Matrix::VectorIterator Matrix::VectorIterator::operator+(int amount) const {
  return myPos + amount;
}

Matrix::VectorIterator& Matrix::VectorIterator::operator-=(int amount) {
  return myPos - amount;
}

Matrix::VectorIterator Matrix::VectorIterator::operator-(int amount) const {
  return myPos - amount;
}

Matrix::VectorIterator::difference_type Matrix::VectorIterator::operator-(const VectorIterator& rhs) {
  return (myPos - rhs*);
}

bool Matrix::VectorIterator::operator==(const VectorIterator& rhs) const {

}

bool Matrix::VectorIterator::operator!=(const VectorIterator& rhs) const {

}

bool Matrix::VectorIterator::operator<(const VectorIterator& rhs) const {
  if(rhs* > this*){
    return true;
  }
  return false;
}

bool Matrix::VectorIterator::operator<=(const VectorIterator& rhs) const {
  if(rhs* >= this*){
    return true;
  }
  return false;
}

bool Matrix::VectorIterator::operator>(const VectorIterator& rhs) const {
  if(rhs* < this*){
    return true;
  }
  return false;
}

bool Matrix::VectorIterator::operator>=(const VectorIterator& rhs) const {
  if(rhs* <= this*){
    return true;
  }
  return false;
}






