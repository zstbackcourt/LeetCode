/**
 * 
 * Copyright (c) 2018 NUAA Jiang Yang
 * 
 * @file
 * @author   姜阳 (j824544269@gmail.com)
 * @date     2018-08
 * @brief    
 * @version  0.0.1
 * 
 * Last Modified:  2018-08-06
 * Modified By:    姜阳 (j824544269@gmail.com)
 * 
 */
#include "headers.h"

int main()
{
    vector<int> digits = {9, 8, 7, 6, 5, 4, 3, 2, 1, 9};

    // for (int i = digits.size() - 1; i >= 0; i--)
    int i = digits.size();
    while (i-- > 0)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] += 1;
            break;
        }
    }
    for (auto it : digits)
    {
        cout << it << endl;
    }
    digits.insert(digits.begin(), 1);

    for (auto it : digits)
    {
        cout << it;
    }

    getchar();
    return 0;
}