#include "Media.h"
#include <sstream>
using namespace std;

// :: scope resolutio operator

Media::Media(string title, int sizeInBytes)
    : title(title), sizeInBytes(sizeInBytes) 
{/*
        this->title = title
        this->sizeInBytes = sizeInBytes
*/}

string Media::getTitle() {
  return title;
}

int Media::getSizeInBytes() {
  return sizeInBytes;
}

double Media::getSizeInKB() {
  return getSizeInBytes() / 1024.0;
}

double Media::getSizeInMB() {
  return getSizeInKB() / 1024.0;
}

double Media::getSizeInGB() {
  return getSizeInMB() / 1024.0;
}

string Media::infoMedia(){
  stringstream str;
  double size ;
  string sizeUnit;
  if (size < 1) {
    size = getSizeInMB();
    sizeUnit = "MB";
  } 
  if (size < 1) {
    size = getSizeInKB();
    sizeUnit = "KB";
  }
  str << getTitle() << " (" << size << sizeUnit << ")";
  return str.str();
}