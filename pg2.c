#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main() 
{
std::vector<std::string> v = {"95", "96", "9", "54", "56", "5", "55", "556", "554", "1", "2", "3"};
std::sort(v.begin(), v.end(),[](const std::string &lhs, const std::string &rhs)
{
// reverse the order of comparison to sort in descending order,
// otherwise we'll get the "big" numbers at the end of the vector
return rhs+lhs < lhs+rhs;
});
for (size_t i = 0; i < v.size(); ++i)
{
std::cout << v[i] << ' ';
}
}
