/*
 * Node.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: ben
 */

#include "Node.h"

Node::Node(vector<Node>& previousLayer, vector<Node>& nextLayer, vector<double> weights) {
	this->previousLayer = previousLayer;
	this->nextLayer = nextLayer;
	this->weights = weights;
}

Node::Node(vector<Node>& previousLayer, vector<Node>& nextLayer){
	//randomize weights
	for(int i=0; i<nextLayer.size(); i++){
		weights.push_back((rand()/RAND_MAX-1));
	}
}

vector<double> Node::getWeights(){
	return weights;
}

void Node::setWeights(vector<double> weightArr){
	this->weights = weightArr;
}

vector<Node>* Node::getPreviousLayer(){
	return &previousLayer;
}

vector<Node>* Node::getNextLayer(){
	return &nextLayer;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

