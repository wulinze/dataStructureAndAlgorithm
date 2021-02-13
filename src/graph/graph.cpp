#include<bits/stdc++.h>

typedef graph::node gnode;
typedef graph::edge gedge;

namespace graph{
    template<typename T>
    struct node{
        T val;
        // 邻接表
        std::vector<T*> adj_list;

        node(T val):this->val(val){}
    }

    struct edge{
        int from, to;
        double weight;
    };
}

template<typename T>
class graph{
private:
    std::vector<gnode<T>> nodes;
    std::vector<gedge> edges;

    std::vector<vector<double>> adj_matrix;
public:

};

