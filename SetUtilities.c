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
    // initialize variables
    int indexOne, indexTwo, indexThree;
    int indexTemp = 0, unionArraySize = oneArrSize;
    int tempArr[ MAX_SET_CAPACITY ];

    // conduct processing

        // loop through and find common values then remove
        for ( indexOne = 0; indexOne < oneArrSize; indexOne++ )
        {
            // place frst array into new array
            unionArray[ indexOne ] = oneArray[ indexOne ];

            for ( indexTwo = 0; indexTwo < otherArrSize; indexTwo++ )
            {
                if ( oneArray[ indexOne ] != otherArray[ indexTwo ])
                {
                    // place into temp array
                    tempArr[ indexTemp ] = oneArray[ indexOne ];
                    indexTemp++;
                    unionArraySize++;
                }

            }
        }

        // add temp array into union array
        for ( indexThree = oneArrSize; indexThree < unionArraySize; 
                                                                  indexThree++ )
        {
            unionArray[ indexThree ] = tempArr[ indexThree ];
        }

    // return size of array
    return unionArraySize;
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

/*
Name: isSubsetOf
Process: compares two set arrays to find if one is a subset of the other,
         returns Boolean result of test,
         loop to find subset item must end when common value found
         and function must return false as soon as a subset value is not found
Function Input/Parameters: two set arrays (const int *),
                           sizes of each set array (int)
Function Output/Parameters: none
Function Output/Returned: Boolean result of test, as specified
Device Input/---: none
Device Output/---: none
Dependencies: none
*/

bool isSubSetOf( const int *oneSet, int oneSetArrSize, 
                          const int *psbleSubset, int psbleSubsetArrSize )
{
    // initialize variables
    int indexOne, indexTwo, testResultValue = 0;

    // conduct processing

        // loop through first array
        for ( indexOne = 0; indexOne < oneSetArrSize; indexOne++ )
        {
            // look through second array
            for ( indexTwo = 0; indexTwo < psbleSubsetArrSize; indexTwo++ )
            {
                // check if value the same
                if ( oneSet[ indexOne ] == psbleSubset[ indexTwo ] )
                {
                    testResultValue++;
                }
            }
        }

        // check if all values in set
        if ( testResultValue == psbleSubsetArrSize )
        {
            return true;
        }
        else
        {
            return false;
        }

}