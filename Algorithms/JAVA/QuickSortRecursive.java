import java.util.Arrays;
import java.util.Scanner;

/**
 * Quicksort is based on the divide-and-conquer paradigm. The algorithm chooses
 * a pivot element and rearranges the elements of the interval in such a way
 * that all elements lesser than the pivot go to the left part of the array and
 * all elements greater than the pivot, go to the right part of the array. Then
 * it recursively sorts the left and the right parts. Notice that if the list
 * has length == 1, it is already sorted.
 */

public class QuickSortRecursive<T extends Comparable<T>> {

	public void sort(T[] array, int leftIndex, int rightIndex) {
		if (array != null && leftIndex < rightIndex && array.length > 0 && rightIndex < array.length
				&& leftIndex >= 0) {

			if (leftIndex < rightIndex) {
				int p = partition(array, leftIndex, rightIndex);
				sort(array, leftIndex, p - 1);
				sort(array, p + 1, rightIndex);
			}
		}
	}

	private int partition(T[] array, int leftIndex, int rightIndex) {
		T pivot = array[leftIndex];

		int i = leftIndex;

		for (int j = i + 1; j <= rightIndex; j++) {
			if (array[j].compareTo(pivot) <= 0) {
				i++;
				swap(array, i, j);
			}
		}

		swap(array, leftIndex, i);
		return i;

	}
	
	private static void swap(Object[] array, int i, int j) {
		if (array == null)
			throw new IllegalArgumentException();

		Object temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        Integer[] arr = new Integer[n];
        for (int i = 0; i < n; i++) {
          arr[i] = scn.nextInt();
        }
        scn.close();
        QuickSortRecursive<Integer> quickimpl =  new QuickSortRecursive<Integer>();
        // it works for any comparable object
        quickimpl.sort((Integer[]) arr, 0, arr.length - 1);
        System.out.println(Arrays.toString(arr));
      }
}