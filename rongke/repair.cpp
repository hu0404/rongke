#include "repair.h"
#include "ui_repair.h"

repair::repair(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::repair)
{
    ui->setupUi(this);
    setWindowTitle("8");
}

repair::~repair()
{
    delete ui;
}
