/*
 * ========================================================================
 *
 *       Filename:  bitset.cc
 *
 *    Description:  bitset example.
 *
 *        Created:  08/10/2013 08:05:22 AM
 *
 *         Author:  Fu Haiping (forhappy), haipingf@gmail.com
 *        Company:  ICT ( Institute Of Computing Technology, CAS )
 *
 * ========================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <algorithm>
#include <bitset>
#include <iostream>

/*
 * ===  FUNCTION  =========================================================
 *         Name:  main
 *  Description:  program entry routine.
 * ========================================================================
 */
int main(int argc, const char *argv[])
{
    // Construct.
    int value = 0x0101;
	std::bitset<32> bs1(value);
    std::cout << bs1 << std::endl;
    std::cout << bs1[0]  << " " << bs1[8] << std::endl;


    return EXIT_SUCCESS;
}  /* ----------  end of function main  ---------- */
