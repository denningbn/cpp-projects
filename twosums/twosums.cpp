#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> output = {-1, -1};

		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = 0; j < nums.size(); j++)
			{
				if ((j != i) && (nums[i] + nums[j] == target))
				{
					output = {i, j};
				}
			}
		}


		return output;
	}
};

int main()
{
	Solution sol;

	vector<int> input = {1, 2, 3};
	int target = 4;

	vector<int> output = sol.twoSum(input, target);

	for (auto i = output.begin(); i != output.end(); ++i){
		std::cout << *i << std::endl;
        }
	return 0;
}
