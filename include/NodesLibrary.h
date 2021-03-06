// NodesLibreary.h 
//
// Contains the definitions of the nodes that make up the parse tree

//#include "stdafx.h"
#include <string>
#include <vector>
#include <memory>

using namespace std;

enum hc_token {horn_clause,head,body,predicate,name,symbol,label,number};

class Node {
private:
	string data;
	hc_token id;
	vector<std::shared_ptr<Node>> node_ptrs;

public:
	Node(string data,hc_token id);
	string get_data();
	hc_token get_id();
	void add_node(shared_ptr<Node> new_node);

	vector<shared_ptr<Node>> get_leaves();
};
