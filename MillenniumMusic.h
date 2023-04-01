#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MillenniumMusic.h"

class MillenniumMusic : public QMainWindow
{
    Q_OBJECT

public:
    MillenniumMusic(QWidget *parent = nullptr);
    ~MillenniumMusic();

private:
    Ui::MillenniumMusicClass ui;
};
