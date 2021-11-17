#ifndef TIMESERIES_H_
#define TIMESERIES_H_

#include <vector>
#include <map>
#include <string>

using namespace std;

class TimeSeries {

    const char* fileName;
    map<string, vector<float>> featuresMap;

public:
    TimeSeries(const char *CSVfileName);
    map<string, vector<float>> getMap()const;
    int size() const;
    int length() const;
};


#endif /* TIMESERIES_H_ */
