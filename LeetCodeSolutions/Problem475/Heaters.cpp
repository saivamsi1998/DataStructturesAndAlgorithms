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
                auto low = lower_bound(heaters.begin(), heaters.end(), i),
                    high = upper_bound(heaters.begin(), heaters.end(), i);
                res = max(res, low != high ? 0 : min((long long)i - (long long)*(low - 1), (long long)*high - (long long)i));
            }

            return res;
        }
	};
}