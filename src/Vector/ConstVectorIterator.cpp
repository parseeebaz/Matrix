//
// Created by mfbut on 11/14/2019.
//

#include "ConstVectorIterator.h"
#include "BaseVector.h"

Matrix::ConstVectorIterator::ConstVectorIterator(const ConstBaseVector* vector, int pos){
  //create iterator over vector starting at pos
  myVec = vector;
  myPos = pos;
}

Matrix::Vector getVec(){
  return myVec;
}

const Matrix::ConstVectorIterator::value_type& Matrix::ConstVectorIterator::operator*() const {
  //return a reference of valuetype to the current element
  return *myPos;
}

const Matrix::ConstVectorIterator::value_type& Matrix::ConstVectorIterator::operator[](int offset) const {
  //return a reference of valuetype to the element that is offset past the current element
  return myVec.at(myPos + offset);
}

Matrix::ConstVectorIterator& Matrix::ConstVectorIterator::operator++() {
  //copy from vector iterator
  ++myPos;
  return this*;
}

const Matrix::ConstVectorIterator Matrix::ConstVectorIterator::operator++(int) {
  //copy from vector iterator
  VectorIterator temp = *this;
  ++(*this);
  return temp;
}

Matrix::ConstVectorIterator& Matrix::ConstVectorIterator::operator--() {
  //copy from vector iterator
  --myPos;
  return this*;
}

const Matrix::ConstVectorIterator Matrix::ConstVectorIterator::operator--(int) {
  //copy from vector iterator
  VectorIterator temp = *this;
  --(*this);
  return temp;
}

Matrix::ConstVectorIterator& Matrix::ConstVectorIterator::operator+=(int amount) {
  //copy from vector iterator
  myPos + amount;
  return this;
}

Matrix::ConstVectorIterator Matrix::ConstVectorIterator::operator+(int amount) const {
  //copy from vector iterator
  myPos + amount;
  return this;
}

Matrix::ConstVectorIterator& Matrix::ConstVectorIterator::operator-=(int amount) {
  //copy from vector iterator
  myPos - amount;
  return this;
}

Matrix::ConstVectorIterator Matrix::ConstVectorIterator::operator-(int amount) const {
  //copy from vector iterator
  myPos - amount;
  return this;
}

Matrix::ConstVectorIterator::difference_type Matrix::ConstVectorIterator::operator-(const ConstVectorIterator& rhs) {
  //copy from vector iterator
  return (myPos - rhs);
}

bool Matrix::ConstVectorIterator::operator==(const ConstVectorIterator& rhs) const {
  //copy from vector iterator
  if(this->getVec() == rhs.getVec()){
    if(rhs* == this*){
      return true;
    }
  }
  return false;
}

bool Matrix::ConstVectorIterator::operator!=(const ConstVectorIterator& rhs) const {
  //copy from vector iterator
  if(this->getVec() != rhs.getVec()){
    return true;
  }
  if(rhs* != this*){
    return true;
  }
  return false;
}

bool Matrix::ConstVectorIterator::operator<(const ConstVectorIterator& rhs) const {
  //copy from vector iterator
  if(rhs* > this*){
    return true;
  }
  return false;
}

bool Matrix::ConstVectorIterator::operator<=(const ConstVectorIterator& rhs) const {
  //copy from vector iterator
  if(rhs* >= this*){
    return true;
  }
  return false;
}

bool Matrix::ConstVectorIterator::operator>(const ConstVectorIterator& rhs) const {
  //copy from vector iterator
  if(rhs* < this*){
    return true;
  }
  return false;
}

bool Matrix::ConstVectorIterator::operator>=(const ConstVectorIterator& rhs) const {
  //copy from vector iterator
  if(rhs* <= this*){
    return true;
  }
  return false;
}
