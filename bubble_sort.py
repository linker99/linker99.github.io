#!/usr/bin/env python

def bubble_sort(alist):
    for i in xrange(len(alist)):
        print(alist)
        for j in xrange(1, len(alist) - i):
            if alist[j - 1] > alist[j]:
                alist[j - 1], alist[j] = alist[j], alist[j - 1]

    return alist

unsorted_list = [8, 7, 6, 5, 4, 3, 2, 1]
print(bubble_sort(unsorted_list))
