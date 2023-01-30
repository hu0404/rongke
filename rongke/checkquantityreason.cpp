#include "checkquantityreason.h"
#include "ui_checkquantityreason.h"

checkquantityreason::checkquantityreason(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::checkquantityreason)
{
    ui->setupUi(this);
    setWindowTitle("3");

    ui->tableWidget_2->setColumnCount(9);
    QStringList header;
    ui->tableWidget_2->verticalHeader()->setDefaultSectionSize(50);
    header<<"编号"<<"工单单号"<<"工序"<<"缺陷类型"<<"工艺参数"<<"实测数据"<<"原因"<<"数量"<<"状态";
    //设置表头背景和字体颜色
    ui->tableWidget_2->horizontalHeader()->setStyleSheet("QHeaderView::section{height:50px;}");
    ui->tableWidget_2->horizontalHeader()->setFont(QFont("Arial",14));

    //设置格子线
    ui->tableWidget_2->setShowGrid(true);

    ui->tableWidget_2->setHorizontalHeaderLabels(header);
    ui->tableWidget_2->setColumnWidth(0,70);
    ui->tableWidget_2->setColumnWidth(1,140);
    ui->tableWidget_2->setColumnWidth(2,120);
    ui->tableWidget_2->setColumnWidth(3,100);
    ui->tableWidget_2->setColumnWidth(4,120);
    ui->tableWidget_2->setColumnWidth(5,100);
    ui->tableWidget_2->setColumnWidth(6,100);
    ui->tableWidget_2->setColumnWidth(7,80);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(8,QHeaderView::Stretch);

    ui->tableWidget_2->verticalHeader()->setVisible(false);

    ui->tableWidget_2->setAlternatingRowColors(true);

    ui->tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//隐藏滚动条

    insertTableItems();
}

checkquantityreason::~checkquantityreason()
{
    delete ui;
}

void checkquantityreason::insertTableItems(void)
{
    QTableWidgetItem *item[9];
    int i, nCount;

    for(i=0;i<5;i++){
       nCount = ui->tableWidget_2->rowCount();
       ui->tableWidget_2->insertRow(nCount);

       item[0] = new QTableWidgetItem(QString("%1").arg(i+1));
       ui->tableWidget_2->setItem(i,0,item[0]);

       item[1] = new QTableWidgetItem("RK-10086-2");
       ui->tableWidget_2->setItem(i,1,item[1]);

       item[2] = new QTableWidgetItem("深孔钻床");
       ui->tableWidget_2->setItem(i,2,item[2]);

       item[3] = new QTableWidgetItem("10.3mm");
       ui->tableWidget_2->setItem(i,3,item[3]);

       item[4] = new QTableWidgetItem("22");
       ui->tableWidget_2->setItem(i,4,item[4]);

       item[5] = new QTableWidgetItem("20");
       ui->tableWidget_2->setItem(i,5,item[5]);

       item[6] = new QTableWidgetItem("尺寸误差");
       ui->tableWidget_2->setItem(i,6,item[6]);

       item[7] = new QTableWidgetItem("1");
       ui->tableWidget_2->setItem(i,7,item[7]);

       item[8] = new QTableWidgetItem("报废");
       ui->tableWidget_2->setItem(i,8,item[8]);

       //让tableWidget内容中的每个元素居中

       for (int j=0;j<9;j++){
           ui->tableWidget_2->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
       }

    }
}
