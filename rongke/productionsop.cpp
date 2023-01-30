#include "productionsop.h"
#include "ui_productionsop.h"

productionsop::productionsop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::productionsop)
{
    ui->setupUi(this);
    setWindowTitle("3");

    ui->tableWidget_2->setColumnCount(6);
    QStringList header;
    ui->tableWidget_2->verticalHeader()->setDefaultSectionSize(50);
    header<<"编号"<<"工单单号"<<"工序"<<"缺陷类型"<<"工艺参数"<<"实测数据"<<"原因"<<"数量"<<"状态";
    //设置表头背景和字体颜色
    ui->tableWidget_2->horizontalHeader()->setStyleSheet("QHeaderView::section{height:50px;}");
    ui->tableWidget_2->horizontalHeader()->setFont(QFont("Arial",14));

    //设置格子线
    ui->tableWidget_2->setShowGrid(true);

    ui->tableWidget_2->setHorizontalHeaderLabels(header);
    ui->tableWidget_2->setColumnWidth(0,135);
    ui->tableWidget_2->setColumnWidth(1,203);
    ui->tableWidget_2->setColumnWidth(2,135);
    ui->tableWidget_2->setColumnWidth(3,202);
    ui->tableWidget_2->setColumnWidth(4,135);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(5,QHeaderView::Stretch);

    ui->tableWidget_2->verticalHeader()->setVisible(false);

    ui->tableWidget_2->setAlternatingRowColors(true);

    ui->tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//隐藏滚动条

    insertTableItems();
}

productionsop::~productionsop()
{
    delete ui;
}

void productionsop::insertTableItems(void)
{
    QTableWidgetItem *item[6];
    int i, nCount;

    for(i=0;i<5;i++){
       nCount = ui->tableWidget_2->rowCount();
       ui->tableWidget_2->insertRow(nCount);

       item[0] = new QTableWidgetItem("产品名称");
       ui->tableWidget_2->setItem(i,0,item[0]);

       item[1] = new QTableWidgetItem("高速钢铲钻");
       ui->tableWidget_2->setItem(i,1,item[1]);

       item[2] = new QTableWidgetItem("产品型号");
       ui->tableWidget_2->setItem(i,2,item[2]);

       item[3] = new QTableWidgetItem("9.50mmS2STA");
       ui->tableWidget_2->setItem(i,3,item[3]);

       item[4] = new QTableWidgetItem("总产量/个");
       ui->tableWidget_2->setItem(i,4,item[4]);

       item[5] = new QTableWidgetItem("50");
       ui->tableWidget_2->setItem(i,5,item[5]);

       //让tableWidget内容中的每个元素居中

       for (int j=0;j<6;j++){
           ui->tableWidget_2->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
       }

    }
}

