#include<iostream>
#include "tst.h"
using namespace std;

int main() {

    //TernarySearchTrie t;

    //TSTNode *n1 = t.getOrCreateNode("中国人民大学");
    //n1->data = "中国人民大学";
    //
    //TSTNode *n2 = t.getOrCreateNode("中国人");
    //n2->data = "中国人";

    //TSTNode *n3 = t.getOrCreateNode("中国人民");
    //n3->data = "中国人民";

    //TSTNode *nr = t.getNode("中国人民大学");

    //cout << nr->data << endl;
    
    TernarySearchTrie t;

    char fname[] = "./dic/coreDict.txt";
    t.loadBaseDict(fname);



    return 0;
}
