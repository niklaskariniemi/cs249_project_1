// header files
#include "SetUtilities.h"

// function implementations 

void copyArray( int *dest, const int *source, int sourceSize )
{

}

/*
Name: displaySet
Process: displays series of set values, or displays "Empty Set" if no values
Function Input/Parameters: name of set array (const char *),
                           set array (const int *, array size (int)
Function Output/Parameters: none
Function Output/Returned: none
Device Input/---: none
Device Output/monitor: data displayed as specified
Dependencies: printf
*/

void displaySet( const char *setName, const int *setArr, int setArrSize )
{
    // initialize variables
    int index;

    // conduct processing

        // display title
        printf( "%s Set Data Display\n", setName );

        // check if array empty
        if ( setArrSize < 1 )
            {
                printf( "  Empty Set  " );
            }
      
        // loop through array and display
        for ( index = 0; index < setArrSize; index++)
        {
            printf(" %d,", setArr[ index ]);
            
        }

        // go to next line
        printf( "\n\n" );
}

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