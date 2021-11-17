#include "timeseries.h"
#include <map>
#include <fstream>
//#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

TimeSeries::TimeSeries(const char* CSVfileName) {

    fileName = CSVfileName;
    ifstream inFileStream(fileName);
    string strLine, feature;
    char delim = ',';
    getline(inFileStream, strLine);
    istringstream issLine(strLine);

    while (getline(issLine, feature, delim)) {
        vector<float> values;
        featuresMap[feature] = values;
    }

    map<string,vector<float>>::iterator it = featuresMap.begin();
    while (getline(inFileStream, strLine)) {
        istringstream issLine(strLine);
        string strValue;
        while (getline(issLine, strValue, delim)) {
            it->second.push_back(stof(strValue));
        }
    }
}

map<string,vector<float>>TimeSeries::getMap()const{
    return featuresMap;
}

int TimeSeries::size() const{
    return 2;
}

int TimeSeries::length() const{
    return 2;
}