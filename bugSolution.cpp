std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { //Corrected: Iterate up to vec.size() -1
    std::cout << vec[i] << " ";
}
std::cout << std::endl;