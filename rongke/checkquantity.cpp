#include "checkquantity.h"
#include "ui_checkquantity.h"

checkQuantity::checkQuantity(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::checkQuantity)
{
    ui->setupUi(this);
    setWindowTitle("2");

    ui->tableWidget->setColumnCount(7);
    QStringList header;
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
    header<<"编号"<<"工单单号"<<"工序"<<"工艺参数"<<"计划数量"<<"合格数量"<<"操作";
    //设置表头背景和字体颜色
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{height:50px;}");
    ui->tableWidget->horizontalHeader()->setFont(QFont("Arial",14));

    //设置格子线
    ui->tableWidget->setShowGrid(true);

    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setColumnWidth(0,70);
    ui->tableWidget->setColumnWidth(1,160);
    ui->tableWidget->setColumnWidth(2,160);
    ui->tableWidget->setColumnWidth(3,160);
    ui->tableWidget->setColumnWidth(4,120);
    ui->tableWidget->setColumnWidth(5,160);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(6,QHeaderView::Stretch);

    ui->tableWidget->verticalHeader()->setVisible(false);

    ui->tableWidget->setAlternatingRowColors(true);

    ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//隐藏滚动条

    insertTableItems();

}

checkQuantity::~checkQuantity()
{
    delete ui;
}

void checkQuantity::insertTableItems(void)
{
    QTableWidgetItem *item[6];
    int i, nCount;

    for(i=0;i<8;i++){
       nCount = ui->tableWidget->rowCount();
       ui->tableWidget->insertRow(nCount);

       item[0] = new QTableWidgetItem(QString("%1").arg(i+1));
       ui->tableWidget->setItem(i,0,item[0]);

       item[1] = new QTableWidgetItem("RK-10086-2");
       ui->tableWidget->setItem(i,1,item[1]);

       item[2] = new QTableWidgetItem("深孔钻床");
       ui->tableWidget->setItem(i,2,item[2]);

       item[3] = new QTableWidgetItem("10.3mm");
       ui->tableWidget->setItem(i,3,item[3]);

       item[4] = new QTableWidgetItem("22");
       ui->tableWidget->setItem(i,4,item[4]);

       item[5] = new QTableWidgetItem("20");
       ui->tableWidget->setItem(i,5,item[5]);

       //让tableWidget内容中的每个元素居中

       for (int j=0;j<6;j++){
           ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
       }

    }
}
