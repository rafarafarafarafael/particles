#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    // set frame rate
    ofSetFrameRate(60);
    
    // allocate framebuffer
    int w = ofGetWidth();
    int h = ofGetHeight();
    fbo.allocate(w, h, GL_RGB32F_ARB);
    
    // fill buffer with white collor
    fbo.begin();
    ofBackground(255);
    fbo.end();
    
    // set up parameters
    param.setup();
    history  = 0.95;
    
    time0 = ofGetElapsedTimef();
}

//--------------------------------------------------------------
void ofApp::update(){
    // compute dt
    float time = ofGetElapsedTimef();
    float dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    // if particle no active, activate it
    if(!p.live){
        p.setup();
    }
    
    // update the particle
    p.update(dt);

}

//--------------------------------------------------------------
void ofApp::draw(){
    // set background white
    ofBackground(255);
    
    // begin drawing to fbo
    fbo.begin();
    
    // draw semi-transparent white rectangle to fade particle trail
    ofEnableAlphaBlending();
    float alpha = (1 - history) * 255;
    ofSetColor(255, 255, 255, alpha);
    ofFill();
    ofDrawRectangle(ofPoint(0, 0), ofGetWidth(), ofGetHeight());
    ofDisableAlphaBlending();
    
    // draw particle
    ofFill();
    p.draw();
    
    fbo.end();
    
    // draw buffer to screen
    ofSetColor(255, 255, 255);
    fbo.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
