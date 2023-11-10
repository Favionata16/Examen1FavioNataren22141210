#include "cframe.h"
#include "ui_cframe.h"

Cframe::Cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cframe)
{
    ui->setupUi(this);
}

Cframe::~Cframe()
{
    delete ui;
}





void Cframe::on_btn_aceptarAgregarDios_clicked()
{
    if(ui->tb_general ->isActiveWindow()){
        if(ui->tb_agregaDios->isActiveWindow()){


    }
    }

}

