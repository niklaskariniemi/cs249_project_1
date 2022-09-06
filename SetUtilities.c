// header files
#include "SetUtilities.h"

// function implementations 

void copyArray( int *dest, const int *source, int sourceSize )
{

}

void displaySet( const char *setName, const int *setArr, int setArrSize )
{

}

int findIntersection( int *intersectArray, 
                             const int *oneArray, int oneArrSize, 
                                      const int *otherArray, int otherArrSize )
{
    return 0; // temp return
}

int findUnion( int *unionArray,
                             const int *oneArray, int oneArrSize, 
                                      const int *otherArray, int otherArrSize )
{
    return 0; // temp return
}

void initializeSetArray( int *intArray, 
                     int startVal, int numItems, DataSelections dataContained )
{
    // initialize variables
    int index = 0, value = startVal;

    // conduct processing

        // check data selection flag
        switch ( dataContained )
        {
        case EVEN:
            // create array with even values
            for ( index = 0; index <= numItems; index++)
                {
                    // add value to array
                    intArray[ index ] = value;

                    // create new even value
                    value =+ 2;
                }
            break;
        case ODD:
            // create array with odd values
            for ( index = 0; index <= numItems; index++)
                {
                    // add value to array
                    intArray[ index ] = value;

                    // create new odd value
                    value =+ 2;
                }
            break;
        case INCREMENTED:
            // create array with incremented values
            for ( index = 0; index <= numItems; index++)
                {
                    // add value to array
                    intArray[ index ] = value;

                    // create new incremented value
                    value =+ 1;
                }
            break;
        default:
            break;
        }
}

bool isInSet( const int *setArray, int size, int searchVal )
{
    return true; //temp return
}

bool isSubSetOf( const int *oneSet, int oneSetArrSize, 
                          const int *psbleSubset, int psbleSubsetArrSize )
{
    return true; //temp return
}