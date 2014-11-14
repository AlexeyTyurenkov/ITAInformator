#ifndef FONTSETTINGS_H
#define FONTSETTINGS_H

#include <QFontDialog>

class FontSettings : public QFontDialog
{
    Q_OBJECT
public:
    MainWindow* mainWindow;
    explicit FontSettings(QObject *parent = 0);

signals:

public slots:

};

#endif // FONTSETTINGS_H
