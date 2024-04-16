#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
    delete data2;
}

void Dialog::on_BtnCancel_clicked()
{
    ui->lbmnemonicId->setText("");
    ui->lbmnemonic->setText("");
    ui->lbunit->setText("");
    ui->lbdescription->setText("");
    ui->lbtypedeviceId->setText("");
    ui->lbparentMnemonicId->setText("");

}


void Dialog::on_BtnApply_clicked()
{
    datastorage* data2=new datastorage{};
    data2->setmnemonicsId(ui->lbmnemonicId->text());
    data2->setmnemonic(ui->lbmnemonic->text());
    data2->setunit(ui->lbunit->text());
    data2->setdescription(ui->lbdescription->text());
    data2->settypedeviceId(ui->lbtypedeviceId->text());
    data2->setparentMnemonicId(ui->lbparentMnemonicId->text());

    emit giveData(data2);
    delete data2;
    ui->lbmnemonicId->setText("");
    ui->lbmnemonic->setText("");
    ui->lbunit->setText("");
    ui->lbdescription->setText("");
    ui->lbtypedeviceId->setText("");
    ui->lbparentMnemonicId->setText("");
}

