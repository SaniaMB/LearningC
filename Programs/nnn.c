#include <stdio.h>

int main() {
    int n, i, j, maxFreqElement, minFreqElement;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[101] = {0}; // assuming elements are within the range 0-100

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    // Find the most frequent element (highest repeated)
    int maxFreq = 0;
    for(i = 0; i < 101; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxFreqElement = i;
        } else if(freq[i] == maxFreq && i > maxFreqElement) {
            maxFreqElement = i; // choose the greater number if frequencies match
        }
    }

    // Find the second least frequent element (second least repeated)
    int minFreq = n+1, secondMinFreq = n+1;
    for(i = 0; i < 101; i++) {
        if(freq[i] > 0 && freq[i] < minFreq) {
            secondMinFreq = minFreq;
            minFreq = freq[i];
            minFreqElement = i;
        } else if(freq[i] > 0 && freq[i] == minFreq && i > minFreqElement) {
            minFreqElement = i; // choose the greater number if frequencies match
        }
    }

    // Create the PIN
    int sumDigits = maxFreqElement + minFreqElement;
    int fourthDigit = sumDigits % 10;
    int fifthDigit = sumDigits / 10;

    printf("Generated PIN: %d%d%d%d\n", maxFreqElement, minFreqElement, fourthDigit, fifthDigit);

    return 0;
}
