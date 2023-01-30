#include "maintainance.h"
#include "ui_maintainance.h"

maintainance::maintainance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maintainance)
{
    ui->setupUi(this);
    setWindowTitle("7");
}

maintainance::~maintainance()
{
    delete ui;
}
