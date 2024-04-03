#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ui->lbmnemonic_id->setText("");
    ui->lbmnemonic->setText("");
    ui->lbunit->setText("");
    ui->lbdescription->setText("");
    ui->lbtypedevice_id->setText("");
    ui->lbparent_mnemonic_id->setText("");
}

Dialog2::~Dialog2()
{
    delete ui;


}
