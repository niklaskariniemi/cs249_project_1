// header files
#include "SetUtilities.h"

// function implementations 

void copyArray( int *dest, const int *source, int sourceSize )
{

}

void displaySet( const char *setName, const int *setArr, int setArrSize )
{
    // initialize variables
    int index;

    // conduct processing

        // display title
        printf( "%s Set Data Display\n", setName );
      
        // loop through array and display
        for ( index = 0; index < setArrSize; index++)
        {
            printf(" %d,", setArr[ index ]);
        }

        // go to next line
        printf( "\n\n" );
}

/*
Name: findIntersection
Process: finds the set intersection between two set arrays,
         assigns to another array,
         loop to find intersection must end when common value found
Function Input/Parameters: sets one and two arrays (const int *),
                           sets one and two array sizes (int)
Function Output/Parameters: found intersection set array (int *)
Function Output/Returned: size of found intersection set array (int)
Device Input/---: none
Device Output/---: none
Dependencies: none
*/

int findIntersection( int *intersectArray, 
                             const int *oneArray, int oneArrSize, 
                                      const int *otherArray, int otherArrSize )
{
    // initialize variables
    int indexOne, indexTwo, intersectArraySize = 0;

    // conduct processing
    for ( indexOne = 0; indexOne < oneArrSize; indexOne++ )
        {
        for ( indexTwo = 0; indexTwo < otherArrSize; indexTwo++ )
            {
            if ( oneArray[ indexOne ] == otherArray[ indexTwo ])
                {
                    intersectArray[ intersectArraySize ] = oneArray[ indexOne ];
                    intersectArraySize++;
                }
            }
        }

    // return size of intersection array
    return intersectArraySize;
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
    int incrementTwo = 2, incrementOne = 1;

    // conduct processing

        // check data selection flag
        switch ( dataContained )
        {
        case EVEN:
            // create array with even values
            for ( index = 0; index < numItems; index++)
            {
                // add value to array
                intArray[ index ] = value;

                // create new even value
                value += incrementTwo;
            }
            break;
        case ODD:

            // create odd initial value
            value += 1;
            // create array with odd values
            for ( index = 0; index < numItems; index++)
            {
                // add value to array
                intArray[ index ] = value;

                // create new odd value
                value += incrementTwo;
            }
            break;
        case INCREMENTED:
            // create array with incremented values
            for ( index = 0; index < numItems; index++)
            {
                // add value to array
                intArray[ index ] = value;

                // create new incremented value
                value += incrementOne;
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