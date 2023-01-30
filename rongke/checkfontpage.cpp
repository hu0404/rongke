#include "checkfontpage.h"
#include "ui_checkfontpage.h"

checkfontpage::checkfontpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::checkfontpage)
{
    ui->setupUi(this);
    setWindowTitle("4");
}

checkfontpage::~checkfontpage()
{
    delete ui;
}
