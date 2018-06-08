#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jun  8 23:09:43 2018

@author: candice
"""

class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        record = []
        sq_sum = 0
        se_n = n

        while se_n != 1:
            sq_sum = 0
            while se_n > 0:
                sq_sum = sq_sum + (se_n % 10) * (se_n % 10)
                se_n = se_n / 10
            if sq_sum in record:
                return False
            record.append(sq_sum)
            se_n = sq_sum

        return True
        