#include <iostream>
#include "AlleyCat.h"
#include "PersianCat.h"
#include "SiameseCat.h"
#include "Cat.h"

int main() {
    AlleyCat monChatDeGoutiere("Hamid");
    SiameseCat monChatSiamois("Michel");
    PersianCat monChatPersan("Prince", 'A');

    monChatDeGoutiere.display();
    monChatPersan.display();
    monChatSiamois.display();
    return 0;
}