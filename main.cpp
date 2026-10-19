#include "AlleyCat.h"
#include "PersianCat.h"
#include "SiameseCat.h"

void main(){
    Cat monChatDeGoutiere = AlleyCat("Hamid");
    Cat monChatSiamois = SiameseCat("Michel");
    Cat monChatPersan = PersianCat("Prince",'A');

    monChatDeGoutiere.display();
    monChatPersan.display();
    monChatSiamois.display();
}