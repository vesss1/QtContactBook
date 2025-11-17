#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class ContactBook;
}
QT_END_NAMESPACE

class ContactBook : public QDialog
{
    Q_OBJECT

public:
    ContactBook(QWidget *parent = nullptr);
    ~ContactBook();

private:
    Ui::ContactBook *ui;
};
#endif // CONTACTBOOK_H
