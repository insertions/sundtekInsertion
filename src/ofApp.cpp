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
    
    
    //before executing this, you need to make sure the media server is working fine
    //root@Macintosh-291:/opt/bin$ ./rtspd
    
    mainOutputSyphonServer.setName("Insertion Output");
    
    //player.loadMovie("http://localhost:22000/stream/CBMT-DT");
    //player.loadMovie("http://localhost:22000/stream/CJNT");
    //player.loadMovie("http://localhost:22000/stream/CIVM-HD");
    
    player.play();
    
    //setupGui();
    
    //ofSetFrameRate(60);
    ofSetFrameRate(30);
}


/*
//--------------------------------------------------------------
void ofApp::setupGui() {
    gui.setup();
    //gui.add(show_debug_tgl.setup("show debug info", true));
    //gui.add(load_video_btn.setup("reload url from file"));
    
    int ui_width = gui.getWidth();
    gui.setSize(ui_width, gui.getHeight());
    show_debug_tgl.setSize(ui_width, show_debug_tgl.getHeight());
    load_video_btn.setSize(ui_width, load_video_btn.getHeight());
    
    //show_debug_tgl.addListener(this, &ofApp::show_debug_changed);
    //load_video_btn.addListener(this, &ofApp::load_video_pressed);
    
    gui.setPosition( ofGetWidth() - ui_width - 5, 5);
}
 */

//--------------------------------------------------------------
void ofApp::update(){
    player.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    player.draw(0,0, ofGetWidth(), ofGetHeight());
    //player.draw(0,0);
    
    
    //gui.draw();
    //drawDebug();
    //drawSubImage();
    
    mainOutputSyphonServer.publishScreen();
    
    int xpos = (int) (ofGetWidth()/2)-175;
    int ypos = (int) (ofGetHeight()/2)-25;
    ofDrawBitmapStringHighlight("Insertions - Testing Sundtek streams", xpos, ypos, ofColor(ofColor::black, 90),ofColor::yellow);
    
}


//--------------------------------------------------------------
void ofApp::drawSubImage() {
    ofTexture test = player.getTextureReference();
    
    test.drawSubsection(0, 0, 200, 200, mouseX, mouseY);
    
    //int xpos = (int) (ofGetWidth()/2)-175;
    //int ypos = (int) (ofGetHeight()/2)-25;
    //ofDrawBitmapStringHighlight("test", xpos, ypos, ofColor(ofColor::black, 90),ofColor::yellow);
    
}
 


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    player.stop();

    switch(key) {
    case '1':
        player.loadMovie("http://localhost:22000/stream/CBMT-DT");
        cout << "changing channel to 1" << endl;
        break;
    case '2':
        player.loadMovie("http://localhost:22000/stream/CJNT");
        cout << "changing channel to 2" << endl;
        break;
    case '3':
        player.loadMovie("http://localhost:22000/stream/CIVM-HD");
        cout << "changing channel to 3" << endl;
        break;
    }
    
    player.play();
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
