#include "ordermanage.h"
#include "ui_ordermanage.h"

ordermanage::ordermanage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ordermanage)
{
    ui->setupUi(this);
    setWindowTitle("5");

    ui->tableWidget->setColumnCount(8);
    QStringList header;
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
    header<<"编号"<<"工单单号"<<"产品名称"<<"总产量/个"<<"工序"<<"工艺参数"<<"计划产量/个"<<"完成产量/个";
    //设置表头背景和字体颜色
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{height:50px;}");
    ui->tableWidget->horizontalHeader()->setFont(QFont("Arial",12));

    //设置格子线
    ui->tableWidget->setShowGrid(true);

    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setColumnWidth(0,70);
    ui->tableWidget->setColumnWidth(1,140);
    ui->tableWidget->setColumnWidth(2,120);
    ui->tableWidget->setColumnWidth(3,120);
    ui->tableWidget->setColumnWidth(4,120);
    ui->tableWidget->setColumnWidth(5,120);
    ui->tableWidget->setColumnWidth(6,120);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(7,QHeaderView::Stretch);

    ui->tableWidget->verticalHeader()->setVisible(false);

    ui->tableWidget->setAlternatingRowColors(true);

    ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//隐藏滚动条

    insertTableItems();

}

ordermanage::~ordermanage()
{
    delete ui;
}

void ordermanage::insertTableItems(void)
{
    QTableWidgetItem *item[8];
    int i, nCount;

    for(i=0;i<6;i++){
       nCount = ui->tableWidget->rowCount();
       ui->tableWidget->insertRow(nCount);

       item[0] = new QTableWidgetItem(QString("%1").arg(i+1));
       ui->tableWidget->setItem(i,0,item[0]);

       item[1] = new QTableWidgetItem("RK-10086-2");
       ui->tableWidget->setItem(i,1,item[1]);

       item[2] = new QTableWidgetItem("高速钢铲钻");
       ui->tableWidget->setItem(i,2,item[2]);

       item[3] = new QTableWidgetItem("50");
       ui->tableWidget->setItem(i,3,item[3]);

       item[4] = new QTableWidgetItem("半精车头部");
       ui->tableWidget->setItem(i,4,item[4]);

       item[5] = new QTableWidgetItem("9.50mm");
       ui->tableWidget->setItem(i,5,item[5]);

       item[6] = new QTableWidgetItem("50");
       ui->tableWidget->setItem(i,6,item[6]);

       item[7] = new QTableWidgetItem("46");
       ui->tableWidget->setItem(i,7,item[7]);

       //让tableWidget内容中的每个元素居中

       for (int j=0;j<8;j++){
           ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
       }

    }
}

