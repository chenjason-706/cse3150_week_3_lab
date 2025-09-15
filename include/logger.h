#ifndef LOGGER_H
#define LOGGER_H

#include <string>

using std::string;

void addReading(const string& label, double value, string labels[], double values[], int& size, int capacity);

void updateValue(double* valuePtr, double newValue);

void printReading(const string& label, const double& value);

double average(const double values[], int size);

double minValue(const double vaules[], int size);

double maxValue(const double values[], int size);

#endif
