#include "oilprices.h"
#include "ui_oilprices.h"

OilPrices::OilPrices(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OilPrices)
{
    ui->setupUi(this);
}

OilPrices::~OilPrices()
{
    delete ui;
}

void OilPrices::setOilLabelFont(QFont& font)
{
    ui->oliLabel->setFont(font);
}
