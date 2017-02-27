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
    history  = 0.995;
    
    time0 = ofGetElapsedTimef();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
