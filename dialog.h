#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <mytablemodel.h>
#include <QMessageBox>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_BtnCancel_clicked();

    void on_BtnApply_clicked();

private:
    Ui::Dialog *ui;
    MyTableModel *model2;
signals:
    void giveData(MyTableModel*);
};

#endif // DIALOG_H
