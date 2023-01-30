#include "fontpage.h"
#include "ui_fontpage.h"

fontpage::fontpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fontpage)
{
    ui->setupUi(this);
    setWindowTitle("4");
}

fontpage::~fontpage()
{
    delete ui;
}
