/*
  Video_t.cpp

  Test program for class Video
*/

#include <cassert>

#include "Video.hpp"

int main() {

  // regular video
  {
    Video video("A", Video::REGULAR);

    assert(video.getTitle() == "A");
    assert(video.getPriceCode() == Video::REGULAR);
  }

  // new release
  {
    Video video("A", Video::NEW_RELEASE);

    assert(video.getTitle() == "A");
    assert(video.getPriceCode() == Video::NEW_RELEASE);
  }

  // childrens
  {
    Video video("A", Video::CHILDRENS);

    assert(video.getTitle() == "A");
    assert(video.getPriceCode() == Video::CHILDRENS);
  }

  // longer title
  {
    Video video("A B", Video::REGULAR);

    assert(video.getTitle() == "A B");
    assert(video.getPriceCode() == Video::REGULAR);
  }

  // change price
  {
    Video video("A", Video::NEW_RELEASE);

    assert(video.getTitle() == "A");
    assert(video.getPriceCode() == Video::NEW_RELEASE);

    video.setPriceCode(Video::REGULAR);
    assert(video.getPriceCode() == Video::REGULAR);
  }

  return 0;
}
