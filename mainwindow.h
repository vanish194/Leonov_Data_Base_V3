#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QFileDialog>
#include <QWidget>
#include <dialog.h>
#include <QMessageBox>
#include <mytablemodel.h>
#include <QProperty>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnADD_clicked();

    void on_BtnREMOVE_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_BtnQuerryINPUT_clicked();

    void on_BtnSearch_clicked();

    void on_OpenDataBase_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    MyTableModel *model;
    int currentRow;
    int currentColomn;
    QString PathDb;
    Dialog *dialog;
public slots:
    void takeData(MyTableModel*);


};


#endif // MAINWINDOW_H
