#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AdditionalFiles/settings.h"

#include "Units/Temperature/temperature.h"
#include "Charts/oilprices.h"
#include "Charts/rubleinterbank.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // ui->menuBar->setNativeMenuBar(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_settings_triggered()
{
//    Settings formSettings;
//    formSettings.setModal(true);
//    formSettings.exec();
    bool ok;
        QFont font = QFontDialog::getFont(
                        &ok, QFont( "Helvetica [Cronyx]", 10 ), this );
        if ( ok ) {
            // font is set to the font the user selected
           // QMainWin;
            ui->iceDev->setFont(font);
            formOilPrices->setOilLabelFont(font);

        } else {
            // the user cancelled the dialog; font is set to the initial
            // value, in this case Helvetica [Cronyx], 10
        }
}


void MainWindow::on_action_Widget_you_triggered()
{

}

void MainWindow::on_action_Widget_you_2_triggered()
{
    modal_window* formmodal_window = new modal_window(this); // указываем новое имя класса
    formmodal_window->setModal(false); // говорим форме что она модальна
    childWindows.append(formmodal_window);
    formmodal_window->show();
}

void MainWindow::on_actionTemperature_triggered()
{
    Temperature* formTemperature = new Temperature (this);
//    formTemperature->show();
    if(!mdiArea)
    {
        mdiArea = new QMdiArea();
    }
    mdiArea->addSubWindow(formTemperature);
//    formTemperature -> show();ow
}

void MainWindow::on_action_Oil_Charts_triggered()
{
       formOilPrices = new OilPrices(this);
       formOilPrices->show();


}

void MainWindow::on_action_Currency_triggered()
{
    formrubleInterbank = new rubleInterbank(this);
    formrubleInterbank->show();
}
