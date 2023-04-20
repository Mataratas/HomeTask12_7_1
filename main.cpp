#include <iostream>
//----------------------------------------------------------------------------------------------------------------------
auto search_period(const std::string& txt, const std::string& pat)->int{
 
    int m = pat.size();
    int n = txt.size();

    int count{}, s{}, j{};
    while (s < n)
    {
        while (j < m && pat[j] == txt[s]) {
            j++;
            s++;
        }

        if (j==m){
            count++;
        }else
            return count;

        j = 0;
    }

    return count;
}
//--------------------------------------------------------------------------------------------------------
auto IsKPeriodic(const std::string& txt, int k) -> bool {
	std::string ss;
	if (txt.size() % k)
		return false;
	else {
		for (int i = 0; i < k; i++)
			ss += txt[i];

        int i = search_period(txt, ss);
        if (i*k == txt.size())
            return true;
        else
            return false;
	}
}
//========================================================================================================
int main() {

	std::string txt{ "abcabcabcabc" };
    std::string txt1{ "abcabcabcabc" };

    int k{ 3 }, k1{6};

	if (IsKPeriodic(txt, k))
		std::cout << txt<<" is periodic:" << k << std::endl;
	else
		std::cout <<txt<<" is not periodic:" << k << std::endl;


    if (IsKPeriodic(txt1, k1))
        std::cout << txt1 << " is periodic:" << k1 << std::endl;
    else
        std::cout << txt1 << " is not periodic:" << k1 << std::endl;


	return 0;
}

