/*
 * Node.h
 *
 *  Created on: Mar 13, 2018
 *      Author: ben
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_

#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
	Node(vector<Node>& previousLayer, vector<Node>& nextLayer);
	Node(vector<Node>& previousLayer, vector<Node>& nextLayer, vector<double> weights);
	Node();
	virtual ~Node();
	vector<Node>* getNextLayer();
	void setNextLayer(vector<Node>& layer);
	vector<Node>* getPreviousLayer();
	void setPreviousLayer(vector<Node>& layer);
	vector<double> getWeights();
	void setWeights(vector<double>);
private:
	vector<Node> nextLayer;
	vector<Node> previousLayer;
	vector<double> weights;
};

#endif /* MODEL_NODE_H_ */
