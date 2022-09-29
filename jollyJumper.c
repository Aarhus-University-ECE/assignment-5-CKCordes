#include <stdbool.h>
#include <malloc.h>

bool isJollyJumber(const int seq[], int size) {
    /*post: answer to exercise 7.a*/
    // Conditions for a jolly jumper:
    
    // no greater difference than the seq
    // no diffrences may be equal
    // a difference cannot be 0
    
    /*Array for checking the diffs*/
    bool diffs_found[size];
    /*array to find the actual differences, one smaller as there is one less difference than size*/
    int diff[size - 1];

    /*Calculating diffs. making sure it is a positive difference*/
    for(int i = 0; i < size - 1; i++) {
        diff[i] = seq[i] - seq[i+1];
        if (diff[i] < 0){
            diff[i] = -diff[i];
        }
    }
    /*making sure all iterations of diffs_found are set as false*/
    for(int i = 0; i < size; i++) {
        diffs_found[i] = false;
    }
    
    /*Checking conditions for jolly jumper*/
    for(int i = 0; i < size - 1; i++) {
        
        if (diffs_found[diff[i]] == false && diff[i] != 0 && diff[i] <= size) {
            diffs_found[diff[i]] = true;
        } else {
            return false;
        }
    } 
    return true;
}

