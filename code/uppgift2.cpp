/*
 * TND012, Lab6
 * Exercise 2: Decode a compressed image
 *
 */

/*
Example input file: uppgift-input-example.txt
  5  96  58  47  97  56  14   7   0  18   1   6   0   6   1   2   2   2   3   2
  2   2   1   2   0   4   1   2   3   2   4   2   3   2   1   2   0   4   1   2
  2   2   3   2   2   2   1   2   0   6   1   6   0  18

Generated output: uppgift-output-example.txt
``````````````
````::::::````
``:://aa//::``
``::aa88aa::``
``:://aa//::``
````::::::````
``````````````
*/

/*
* Input image files:
* "../code/uppgift2-input-example.txt"
* "../code/uppgift2-input-short.txt"
* "../code/uppgift2-input-large.txt"
*/

#include <iostream>
#include <fstream>

#include "image.h"

// ADD CODE: main