// 两数之和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[j] == target - nums[i]) {
					//在result的最后一个元素后面，插入一个元素
					result.push_back(i);
					result.push_back(j);
					return result;
				}
			}
		}
		return result;
	}
	
};

int main() {
	Solution temp;
	int target = 9;
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(17);
	for (int i = 0; i < temp.twoSum(nums, target).size(); i++) {
		cout << temp.twoSum(nums, target)[i] << endl;
	}

}
