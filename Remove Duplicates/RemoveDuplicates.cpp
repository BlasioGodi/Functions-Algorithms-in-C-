#include <iostream>
#include <vector>

using namespace std;

class Duplication {
public:

  void RemoveDuplicates(vector<int>& nums)
	{
		vector <int> newArray;
		int i, j, c= 0;
		int length = nums.size();

		for (i = 0; i < length; i++) {
			for (j = i + 1; j < length; j++) {
				if (nums[i] == nums[j]){
					c++;
					break;
				}
			}

			if (j == length) {
				newArray.push_back(nums[i]);
			}
		}

		for (auto i : newArray)
			cout << i;
	}
};

int main()
{
	Duplication nameless;

	vector <int> numbers {1, 2, 2, 2, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5};

	nameless.RemoveDuplicates(numbers);

	return 0;
}