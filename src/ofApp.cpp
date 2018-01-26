#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetWindowTitle("ofxVLCVideoPlayer example");
    
    //ofSetFrameRate(60); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.
    
    //player.loadMovie("test.mov");
    //player.loadMovie("http://devimages.apple.com/iphone/samples/bipbop/bipbopall.m3u8");
    //player.loadMovie("https://www.hdpvrcapture.com/hdpvrcapturev3/samples/20131211_102729-1920x1080p30.ts");
    //player.loadMovie("https://www.hdpvrcapture.com/hdpvrcapturev3/samples/20131211_103918-1280x720p60.ts");
    
    player.loadMovie("http://localhost:22000/stream/CBFT%2DDT%09");
    
    player.play();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    player.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //player.draw(0,0, ofGetWidth(), ofGetHeight());
    player.draw(0,0);
}


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased  (int key){
    
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
