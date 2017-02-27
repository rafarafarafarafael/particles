//
//  Particles.cpp
//  particle_system
//
//  Created by Rafael on 2017-02-02.
//
//

#include "Particles.h"

Particle::Particle(){
    live = false;
}

ofPoint Particle::randomPointInCircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0, maxRad);
    float angle = ofRandom(0, M_TWO_PI);
    pnt.x = cos(angle) * rad;
    pnt.y = sin(angle) * rad;
    return pnt;
}

void Particle::setup(){
    pos =  param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live = true;
}

void Particle::update(float dt){
    if(live){
        // rotate vel
        vel.rotate(0, 0, param.rotate * dt);
        // update pos
        pos += vel * dt;    // euler method
        // update time and check if praticle should live
        time += dt;
        if(time >= lifeTime){
            live = false;
        }
    }
}

void Particle::draw(){
    if(live){
        // compute size
        float size = ofMap(fabs(time - lifeTime/2), 0, lifeTime/2, 3, 1);
        
        // compute color
        ofColor color = ofColor::red;
        float hue = ofMap(time, 0, lifeTime, 128, 255);
        color.setHue(hue);
        ofSetColor(color);
        
        // draw particle
        ofDrawCircle(pos.x, pos.y, size);
    }
}
