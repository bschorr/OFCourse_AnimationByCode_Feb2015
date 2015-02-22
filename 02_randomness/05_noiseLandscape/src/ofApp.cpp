#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    mult = 0.01;
    z = 0.0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    z += 0.01;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    
    for (int y = 50; y < ofGetHeight()-50; y += 20) {
        for (int x = 50; x < ofGetWidth()-50; x += 20) {
            
            float noise = ofNoise(x*mult, y*mult, z);
            ofRect(x, y, noise*25, noise*25);
            
        }
    }
    
    

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
