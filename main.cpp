#include <iostream>
#include <vector>

//2023/11/18 02:47:58 let me write an ambigous judgement test example.
//template<typename T> class Container
//{
//    T a;
//	public:
//        Container(std::initializer_list<T> il);

//        template<typename Iter>
//        Container(Iter a, Iter b)
//        {}

//        struct iterator
//        {
//            using value_type = T;

//        };
//        iterator begin()
//        {
//            return iterator{};
//        }
//};

//int main()
//{
	//    auto it=Container<int>::iterator{};
	//    Container <int> input={1, 3, 5, 7};
	//    Container para(it, it);//ambiguous? no.
//}

//int main()
//{
//    std::vector<std::vector<int>>a = { {1,2},{1}, {1,2,3,4,5} };
//    for (int i = 0; i < a.size(); i++)
//        for (int j = 0; j < a[i].size(); j++)
//        {
//            std::cout << i << j << " " << &(a[i][j]) << " ";
//        }
//    std::cout << std::endl;


//    for (int i = 0; i < a.size(); i++)
//    {
//        std::cout << i << " " <<  &(a[i]) << " ";
//    }
//    std::cout << std::endl;

//    return 0;
//}

//上层vector，里面存了三个指针值 {begin1，end1，capacity1},{begin2，end2，capacity2}, ...这样的结构
//下层vector，每个vector存在不同的地方，互相不影响扩容
/*output result
0 007C4E60 1 007C4E6C 2 007C4E78
00 007C0098 01 007C009C 10 007BFF58 20 007C1388 21 007C138C 22 007C1390 23 007C1394 24 007C1398
*/

int main()
{
	return 0;
}
