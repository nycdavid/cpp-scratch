// vector<int> arr = { 0, 1, 2 }
// isUnique(arr, 0, 2);

bool isUnique(const vector<int> arr, int startIdx, int endIdx) {
  if (startIdx >= endIdx) {
    return true;
  }

  if (!isUnique(arr, startIdx, endIdx - 1)) {
    return false;
  }

  if (!isUnique(arr, startIdx + 1, endIdx)) {
    return false;
  }

  return (arr[startIdx] != arr[endIdx]);
}
