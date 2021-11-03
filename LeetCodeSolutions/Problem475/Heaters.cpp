#include <vector>
#include <algorithm>
namespace leetcode
{
    using namespace std;
	class problem475
	{
	public:
        int findRadius(vector<int>& houses, vector<int>& heaters)
        {
            sort(houses.begin(), houses.end());
            sort(heaters.begin(), heaters.end());


            long long res = INT_MIN;
            heaters.insert(heaters.begin(), INT_MIN);
            heaters.push_back(INT_MAX);

            for (auto i : houses)
            {
                auto it = lower_bound(heaters.begin(), heaters.end(), i);
                res = max(res, *it == i ? 0 : min((long long)i - (long long)*(it - 1), (long long)*it - (long long)i));
            }

            return res;
        }
	};
}