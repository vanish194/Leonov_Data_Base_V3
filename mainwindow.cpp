#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QMessageBox::about(this,"QT VERSION",qVersion(()));
    db=QSqlDatabase::addDatabase("QSQLITE");
    //For open Database, chance path to dp.
    db.setDatabaseName("./../TryV3/devices.db");
    if (db.open())
    {
        //Model
        ui->statusbar->showMessage("Seccessful connection to DB:" +db.databaseName());
        model = new MyTableModel ;
        model->setTable("mnemonics");
        model->setEditStrategy(QSqlTableModel::OnFieldChange);
        model->select();
        //View
        ui->tableView->setModel(model);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableView->setSortingEnabled(true);

        ui->tableView->setShowGrid(true);

    }
    else
    {
        ui->statusbar->showMessage("EROR CONNECTION "+ db.lastError().databaseText());
    }
    dialog = new Dialog;
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    connect (dialog,&Dialog::giveData,this,&MainWindow::takeData);
}

MainWindow::~MainWindow()
{
    delete model;
    delete dialog;
    delete ui;
}

void MainWindow::on_BtnADD_clicked()
{
    dialog->setModal(true);
    dialog->exec();
    model->select();
}

void MainWindow::takeData(MyTableModel* model)
{

    QSqlQuery querry;
    if (querry.exec(("INSERT INTO mnemonics (mnemonic_id,mnemonic,unit,description,typedevice_id,parent_mnemonic_id) \
VALUES ("+model->getmnemonicsId()+","+model->getmnemonic()+","+model->getunit()+",\
"+model->getdescription()+","+model->gettypedeviceId()+","+model->getparentMnemonicId()+")" )))
    {

        QMessageBox::about(this,"DATA ADDED","DATA SUCCEFULL ADDED");
        model->select();
    }
    else
    {
        QMessageBox::critical(this,"WRONG DATA","SOMETHING WRONG WITH DATA:\n"+querry.lastError().databaseText());

    }
    ;
}



void MainWindow::on_BtnREMOVE_clicked()
{
    if (RowSelectionFlag)
    {
        model->removeRow(currentRow);
        RowSelectionFlag=false;
    }
    model->select();
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    currentRow=index.row();
    currentColomn=index.column();
    RowSelectionFlag=true;
}


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    QString nameColomn;
    QString valuefromindex;
    nameColomn = model->headerData(currentColomn,Qt::Horizontal).toString();
    valuefromindex= ui->tableView->model()->data(ui->tableView->currentIndex()).toString();
    ui->QuerryLineEdit->setText(nameColomn+"=""\""+valuefromindex+"\"");
}


void MainWindow::on_BtnQuerryINPUT_clicked()
{
    QSqlQuery querry;
    QString querryline=ui->QuerryLineEdit->text();
    if (querry.exec(querryline))
    {
        QMessageBox::about(this,"DATA ADDED","DATA SUCCEFULL ADDED");
        model->select();
    }
    else
    {
        QMessageBox::critical(this,"WRONG DATA","SOMETHING WRONG WITH DATA:\n"+querry.lastError().databaseText());

    }

}


void MainWindow::on_BtnSearch_clicked()
{
    QString querryline=ui->QuerryLineEdit->text();
    model->setFilter(querryline);

    model->select();
}


void MainWindow::on_OpenDataBase_triggered()
{
    QString fileName=QFileDialog::getOpenFileName(this,"Chose file",QDir::homePath(),"*db");
    ui->statusbar->showMessage(fileName);
    db.setDatabaseName(fileName);
    if (db.open())
    {
        //Model
        ui->statusbar->showMessage("Seccessful connection to DB:" +db.databaseName());
        model = new MyTableModel ;
        model->setTable("mnemonics");
        model->setEditStrategy(QSqlTableModel::OnFieldChange);
        model->select();
        //View
        ui->tableView->setModel(model);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableView->setSortingEnabled(true);

        ui->tableView->setShowGrid(true);

    }
    else
    {
        ui->statusbar->showMessage("EROR CONNECTION "+ db.lastError().databaseText());
    }
}

