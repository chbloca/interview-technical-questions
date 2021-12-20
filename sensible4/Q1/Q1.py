# -*- coding: utf-8 -*-
"""
Design a data structure that can, efficiently with respect
to time used, store, and check if the total of any three
successively added elements is equal to a given total.

For example, MovingTotal() creates an empty container with
no existing totals.
append([1, 2, 3]) appends elements [1, 2, 3], which means
that there is only one existing total (1+2+3 = 6).
append([4]) appends element 4 and creates an additional
total from [2, 3, 4]. There would now be two totals
(1+2+3=6 and 2+3+4=9). At this point contains(6) and contains(9)
should return True, while contains(7) should return False.
"""

class MovingTotal:
    def __init__(self):
        self.list = []
    
    def append(self, numbers):
        """
        Parameters
        ----------
        numbers: (list) The list of numbers
        """
        self.list.append(numbers)
    
    def contains(self, total):
        """
        Parameters
        ----------
        total: (int) The total to check for
        
        Returns
        -------
        (bool) If MovingTotal contains the total
        """
          
        concatenateElements = []

        # You can use the + operator to combine two arrays:

        # listone = [1, 2, 3]
        # listtwo = [4, 5, 6]

        # joinedlist = listone + listtwo

        # >>> joinedlist
        # [1, 2, 3, 4, 5, 6]
        
        for array in self.list:
            concatenateElements += array
                    
        lastThreeSum = concatenateElements[len(concatenateElements) - 1] + \
                       concatenateElements[len(concatenateElements) - 2] + \
                       concatenateElements[len(concatenateElements) - 3]
                       
        return lastThreeSum == total
    
if __name__ == "__main__":
    movingtotal = MovingTotal()
    
    movingtotal.append([1, 2, 3])
    print(movingtotal.contains(6))
    print(movingtotal.contains(9))
    
    movingtotal.append([4])
    print(movingtotal.contains(6))
    print(movingtotal.contains(9))


