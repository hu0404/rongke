#include "checkquantity.h"
#include "productionreport.h"
#include "checkquantityreason.h"
#include "productionsop.h"
#include "ordermanage.h"
#include "check.h"
#include "form.h"
#include "checkfontpage.h"
#include "fontpage.h"
#include "repair.h"
#include "maintainance.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    maintainance w;
    w.show();
    return a.exec();
}
