#include "dialog2.h"
#include "ui_dialog2.h"


/* *** a fantastic guide about pointers:
 * https://medium.com/young-coder/an-illustrated-guide-to-memory-the-stack-the-heap-and-pointers-40a604f7bc53
 * **** */

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_buttonBox_accepted()
{
    this->accept();
}

void Dialog2::on_buttonBox_rejected()
{
    this->reject();
}
