#include <iostream>
#include <numeric>

//1
bool czyPierwsza(int n) {
    if (n < 2) {
        return false;
    }

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    if (czyPierwsza(liczba)) {
        std::cout << "Liczba pierwsza" << std::endl;
    } else {
        std::cout << "Nie jest pierwsza" << std::endl;
    }
    return 0;
}

//2
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5 ,6 ,7 ,8};
    int mini = *std::min_element(v.begin(), v.end());
    int maks = *std::max_element(v.begin(), v.end());

    std::cout << "Min: " << mini << ", Max: " << maks << std::endl; 
    return 0;
}

//3
int main() {
    std::vector<double> v = {1, 1.5, 2, 2.5, 3, 4, 10};
    int suma = std::accumulate(v.begin(), v.end(), 0);
    int mean = static_cast<double>(suma) / v.size();
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > mean) {
            std::cout << v[i] << std::endl;
        }
    }
}

//4
bool palindrom(std::string s) {
    int l = 0;
    int r = static_cast<int>(s.size()) - 1;

    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        } 
        l++;
        r--;
    }
    return true;
}

int main() {
    std::string napis;
    std::cout << "Podaj napis: ";
    std::getline(std::cin, napis);
    if (palindrom(napis)) {
        std::cout << "palindrom" << std::endl;
    } else {
        std::cout << "nie palindrom" << std::endl;
    }
    return 0;
}

