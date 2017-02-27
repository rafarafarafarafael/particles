//
//  Params.cpp
//  particle_system
//
//  Created by Rafael on 2017-02-02.
//
//

#include "Params.h"

void Params::setup(){
    eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    eRad = 50;
    velRad = 200;
    lifeTime = 1.0;
    rotate = 90;
}
