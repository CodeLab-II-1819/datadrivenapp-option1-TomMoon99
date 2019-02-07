#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	icon.load("icon.jpg");
	search.load("search.png");
	searchbar.load("searchbar.jpg");
	parisdreamworks.load("parisdreamworks.jpg");
	politicsbrexit.load("politicsbrexit.jpg");
	ubermoney.load("ubermoney.jpg");
	catsdogs.load("catsdogs.jpg");
	counttweets.load("counttweets.jpg");
	football.load("football.jpg");
	searchresults.load("searchresults.jpg");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundColor(255, 255, 255);// set background white
	ofSetColor(0, 132, 180);// set colour blue
	ofDrawRectangle(10, 10, 1070, 300); //base outline top
	ofDrawRectangle(10, 10, 300, 1910);//base outline side
	ofSetColor(255, 255, 255); // set color white
	parisdreamworks.draw(20, 310, 280, 280); // Paris/Dreamworks box top left
	politicsbrexit.draw(20, 600, 280, 280 ); //politics, Brexit
	ubermoney.draw(20, 890, 280, 280); //Uber, money
	catsdogs.draw(20, 1180, 280, 280); // cats,dogs
	counttweets.draw(20, 1470,280,280); //count tweets
	football.draw(20, 1760, 280, 150);//football 

	icon.draw(20, 20, 280, 280);// twitter icon top left
	search.draw(400, 90, 140, 140);//search glass
	ofDrawRectRounded(600, 110, 400, 100, 100); // search bar
	searchbar.draw(615, 125, 370, 70); // search bar writing
	searchresults.draw(550, 890, 280,280); // search results
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
