#include "timeseries.h"
//#include "SimpleAnomalyDetector.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    TimeSeries ts("hi.csv");
    map<string, vector<float>> featuresMap = ts.getMap();
    map<string, vector<float>>::iterator it = featuresMap.begin();
    for (; it != featuresMap.end(); it++) {
        cout << "feature " << it->first << ", values: ";
        for (float f : it->second)
            cout << f << " ";
        cout << endl;
    }


    return 0;
}
