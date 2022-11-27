#include "giftinformation.h"
#include <QString>

GiftInformation::GiftInformation() {
    moneyinf = (GiftInformation*)calloc(size, sizeof(GiftInformation));
    for (int i = 0; i < size; i++) {
        int f = 0;
    }
}

GiftInformation::~GiftInformation() {
    free(moneyinf);
}

void GiftInformation::slotgift(QString i, QString i2)
{
    int rublesum = 0;
    int pennysum = 0;
    int index;
    int kol = 0;
    QString is = "";
    for (int i = 0; i < birthdayindex.length(); i++) {
        while (birthdayindex[i] >= '0' && birthdayindex[i] <= '9') {
            is = is + birthdayindex[i];
            i++;
            }
        index = is.toInt();
        if (index == kol){
            rublesum = rublesum + i.toInt();
            pennysum = pennysum + i2.toInt();
         }
            is = to_string(index);
            is = "";
    }

    if (pennysum >= 100) {
        rublesum = rublesum + (pennysum / 100);
        pennysum = pennysum % 100;
    }

    kol++;
}
