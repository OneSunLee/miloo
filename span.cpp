#include <algorithm>
#include <iostream>
#include <vector>
#include <span>

//VS: Project -> Properties -> General -> c++ standard
//mutidimensional array span is in cpp23. std::mdspan 
//Debug mode would tell you there are many errors. it is from debug tool itself that doesn't support cpp20 yet.

void show(std::span<bool> arr)
{
	for (auto i : arr)
	{
		std::cout << std::boolalpha << i<< ' ';
	}
	std::cout << '\n';
}

int main()
{
	bool arr[4] = { true,false,true,false };
	std::span span_arr{ arr };
	show(span_arr);
	return 0;
}