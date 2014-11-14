#include "settings.h"
#include "ui_settings.h"
#include <QFontDialog>

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    //ui->setupUi(this);
    bool ok;
        QFont font = QFontDialog::getFont(
                        &ok, QFont( "Helvetica [Cronyx]", 10 ), this );
        if ( ok ) {
            // font is set to the font the user selected
           // QMainWin;
        } else {
            // the user cancelled the dialog; font is set to the initial
            // value, in this case Helvetica [Cronyx], 10
        }
}

Settings::~Settings()
{
    delete ui;
}
