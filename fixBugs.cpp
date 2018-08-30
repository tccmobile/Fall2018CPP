//
// Created by William Smith on 8/30/18.
//

#include <iostream>
using namespace std;

int main() {
    int numBeans;
    int numJar;
    int totalBeans;

    numBeans = 500;
    numJar = 3;

    cout << numBeans << " beans in ";
    cout << numJar   << " jars yields ";
    totalBeans = numBeans * numJar;
    cout << totalBeans << " total"<< endl;

    return 0;
}