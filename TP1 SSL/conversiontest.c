#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

void testCelsius() {
    assert(Celsius(300.0) == 148.8);
    assert(Celsius(225.0) == 107.2);
    assert(Celsius(150.0) == 65.5);
    assert(Celsius(0.0) == -17.7);
}

void testFahrenheit() {
    assert(Fahrenheit(-17.7) == 0.0);
    assert(Fahrenheit(65.5) == 150.0);
    assert(Fahrenheit(107.2) == 225.0);
    assert(Fahrenheit(148.8) == 300.0);
}

int main() {
    testCelsius();
    testFahrenheit();
    printf("All tests passed!\n");
    return 0;
}