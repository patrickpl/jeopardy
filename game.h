#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game : public QObject
{
    Q_OBJECT

public:
    Game();
    void getAnswer(int, int);
    QColor getPlayer1Color();
    QColor getPlayer2Color();
    QColor getPlayer3Color();
};

#endif // GAME_H
