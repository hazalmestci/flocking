//
//  Particles.hpp
//  flocking
//
//  Created by Hazal Mestci on 3/10/17.
//
//

#pragma once
#include "ofMain.h"


class Particle{
public:
    
    Particle();
    
    void init();
    void bounding();
    void draw();
    void update( vector<Particle> &particles, ofPoint mousePos);
    
    
    //make them vectors because has more functionality
    ofPoint cohesion(vector<Particle> &particles);
    ofPoint separation(vector<Particle> &particles);
    ofPoint allignment(vector<Particle> &particles);
    ofPoint followMouse(ofPoint mousePos);
    
    ofPoint pos;
    ofPoint vel;
    int radius;
    
    
};
