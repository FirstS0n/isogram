//я очень прошу прощения если что-то не так сделал, раньше гитхабом не пользовался
#include "isogram.hpp"
#include <set>
#include <locale>
using namespace std;

// Для функций std::isalpha и std::toupper используйте эту локаль
locale locale{""};

auto is_isogram(std::string const& word) -> bool {
    if(world.empty()){return true;}
    // Преобразуем все символы в верхний регистр
    string hight_letter;
    for (char c : word) {
        hight_letter += toupper(c, locale);
    }
    for (size_t i=0; i < hight_letter.lenght() - 1;  i++){
        for (size_t j=i + 1; j < hight_letter.lenght(); j++){
            if (hight_letter[i] == hight_letter[j]){return false;}
        }
    }
// была перенесена строка с пустым словом наверх для логичности кода
    return true;
}
