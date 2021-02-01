#include <bits/stdc++.h>
#include "graph.cpp"

typedef tree::node tnode;

namespace tree{
    template<typename T>
    struct node{
        T val;
        
        std::vector<node*> children;

        node(const T& val)this->val(val){}
        node(const T& val, const std::vector<node*>& children)this->val(val), children(children){}
    };
}
class tree{
private:
    std::vector<tnode> nodes;
    std::vector<gedge> edges;
public:
    void addNode(tnode node);
    void addedge(gedge edge);
    void delNode(int index);
    void deledge(int index);
    void deledge(int from, int to);
};
 