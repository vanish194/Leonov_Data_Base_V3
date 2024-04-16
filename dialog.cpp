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
    delete model2;
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
    datastorage* model2=new datastorage{};
    model2->setmnemonicsId(ui->lbmnemonicId->text());
    model2->setmnemonic(ui->lbmnemonic->text());
    model2->setunit(ui->lbunit->text());
    model2->setdescription(ui->lbdescription->text());
    model2->settypedeviceId(ui->lbtypedeviceId->text());
    model2->setparentMnemonicId(ui->lbparentMnemonicId->text());

    emit giveData(model2);
    ui->lbmnemonicId->setText("");
    ui->lbmnemonic->setText("");
    ui->lbunit->setText("");
    ui->lbdescription->setText("");
    ui->lbtypedeviceId->setText("");
    ui->lbparentMnemonicId->setText("");
}

