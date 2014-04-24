/*
  Rental.hpp

  Include file for Rental class
*/

#ifndef RENTAL_H
#define RENTAL_H

#include "Video.hpp"

class Rental {
public:

    // constructor
    Rental(const Video& video, int days_rented);

    // days rented
    int getDaysRented() const;

    // video rented
    const Video& getVideo() const;

    // charge for the video
    double getCharge() const;

private:
    Video video;
    int days;
};

#endif
