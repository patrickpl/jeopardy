#include "game.h"
#include <QMessageBox>
#include <QString>
#include <QColor>

Game::Game()
{
}

void Game::getAnswer(int value, int category)
{

    QString valueString = QString::number(value);
    //QString categoryString = std::to_string(category);
    QMessageBox msgBox;
    msgBox.setText("The document has been modified." + valueString);
    msgBox.exec();
}

QColor Game::getPlayer1Color() {
    return QColor(255,0,0);
}

QColor Game::getPlayer2Color() {
    return QColor(0,255,0);
}

QColor Game::getPlayer3Color() {
    return QColor(0,255,255);
}

