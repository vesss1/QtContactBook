#include "contactbook.h"
#include "ui_contactbook.h"

ContactBook::ContactBook(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContactBook)
{
    ui->setupUi(this);
    QStringList colTitles;
    ui->tableWidget->setColumnCount(4);
}

ContactBook::~ContactBook()
{
    delete ui;
}
