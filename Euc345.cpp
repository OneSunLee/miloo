// miloo.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <utility>
#include <queue>

constexpr int barrelA{ 4 }, barrelB{ 5 }, water{ 3 };

auto BFS()
{
	bool statesMap[barrelA * barrelB + 1][barrelA * barrelB + 1];//TODO 每个点上放上一步的pair来获得最终解决方案
	std::queue<std::pair<int, int>> BFS_queue;
	BFS_queue.push({ barrelA, barrelB });

	while (!BFS_queue.empty())
	{
		auto [tempA, tempB] = BFS_queue.front();
		if (tempA == water || tempB == water)
		{
			std::cout << "We have solution now!";
			break;
		}
		if (!statesMap[0][tempB])//clear left
		{
			statesMap[0][tempB] = true;
			BFS_queue.push({ 0, tempB });
		}
		else if (!statesMap[tempA][0])//clear right
		{
			statesMap[tempA][0] = true;
			BFS_queue.push({ tempA, 0 });
		}
		else if (!statesMap[barrelA][tempB])//pour left fully
		{
			statesMap[barrelA][tempB] = true;
			BFS_queue.push({ barrelA, tempB });
		}
		else if (statesMap[tempA][barrelB])//pour right fully
		{
			statesMap[tempA][barrelB] = true;
			BFS_queue.push({ tempA, barrelB });
		}
		else if (statesMap[tempA + tempB - barrelB][barrelB])//pour from left to right
		{
			statesMap[tempA + tempB - barrelB][barrelB] = true;
			BFS_queue.push({ tempA + tempB - barrelB,barrelB });
		}
		else if (statesMap[barrelA][tempA + tempB - barrelA])//pour from right to left
		{
			statesMap[barrelA][tempA + tempB - barrelA] = true;
			BFS_queue.push({ barrelA,tempA + tempB - barrelA });
		}
		BFS_queue.pop();
	}

	vec_pair[0].push_back({ barrelA, barrelB });
	std::vector<std::pair<int, int>> vec_pair;
	return vec_pair;
}


int main()
{
	auto vec_pair = BFS();//TODO: vec_pair 
	int index{ 0 };
	for (auto i : vec_pair)
	{
		std::cout << "第" << ++index << "种解法：\n";
		for (auto j : i)
			std::cout << j.first << " " << j.second << "\n";
	}
	std::cout << "共" << index << "种解法" << std::endl;
	return 0;
}


