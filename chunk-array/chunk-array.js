/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    // Initialize an empty array to store the chunked subarrays
  var chunkedArray = [];

  // Initialize the starting index for slicing the array
  var index = 0;

  // Iterate over the array until the index reaches the end
  while (index < arr.length) {
    // Use the slice method to extract a subarray of length 'size' from the original array
    // and push it into the chunkedArray
    chunkedArray.push(arr.slice(index, index + size));

    // Increment the index by the chunk size to move to the next chunk
    index += size;
  }

  // Return the resulting chunked array
  return chunkedArray;
};