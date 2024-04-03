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
}

void Dialog::on_BtnCancel_clicked()
{
    ui->lbmnemonic_id->setText("");
    ui->lbmnemonic->setText("");
    ui->lbunit->setText("");
    ui->lbdescription->setText("");
    ui->lbtypedevice_id->setText("");
    ui->lbparent_mnemonic_id->setText("");

}


void Dialog::on_BtnApply_clicked()
{

    model2=new MyTableModel;
    model2->setmnemonics_id(ui->lbmnemonic_id->text());
    model2->setmnemonic(ui->lbmnemonic->text());
    model2->setunit(ui->lbunit->text());
    model2->setdescription(ui->lbdescription->text());
    model2->settypedevice_id(ui->lbtypedevice_id->text());
    model2->setparent_mnemonic_id(ui->lbparent_mnemonic_id->text());

    emit giveData(model2);
    ui->lbmnemonic_id->setText("");
    ui->lbmnemonic->setText("");
    ui->lbunit->setText("");
    ui->lbdescription->setText("");
    ui->lbtypedevice_id->setText("");
    ui->lbparent_mnemonic_id->setText("");
}

