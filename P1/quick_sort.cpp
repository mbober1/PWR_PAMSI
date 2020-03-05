#pragma once
#include "utils.cpp"

template <typename T>
void quicksort(T A[], int left, int right)
{
    if (left < right)
    {
        int m = left; //wypieramy pivot
        for(int i=left+1; i<=right; i++) { //przypisujemy liczby do lewej lub prawej części (pivot, mniejsze, większe)
            if (A[i] < A[left]) {
                m++;
                swap(A,i,m);
            }
        }
        swap(A,left,m); //zamiana pivota z ostatnim mniejszym
        quicksort(A, left, m-1);
        quicksort(A, m+1, right);
    }
}