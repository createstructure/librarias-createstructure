/**
 * positive.cpp
 * 
 * Library for checking if a string is positive or negative.
 * 
 * @author Castellani Davide (@DavideC03)
 */

// Dependencies
#include "positive.hpp"

// Definitions
// #define DEBUG

bool Positive::isPositive(string str)
{
    /**
     * Check if the string is positive
     * 
     * @param str string to check
     * @return true if the string is positive, false otherwise
     */
    // Vector with all the possible positive options
    vector<string> positive = {"Y", "y", "Yes", "yes", "YES", "1"};

    // Check if the string is in the vector
    return find(positive.begin(), positive.end(), str) != positive.end();
}

bool Positive::isNegative(string str)
{
    /**
     * Check if the string is negative
     * 
     * @param str string to check
     * @return true if the string is negative, false otherwise
     */
    // Vector with all the possible negative options
    vector<string> negative = {"N", "n", "No", "no", "NO", "0"};

    // Check if the string is in the vector
    return find(negative.begin(), negative.end(), str) != negative.end();
}

#undef DEBUG