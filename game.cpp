#include "game.h"
#include <QMessageBox>
#include <QString>

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
