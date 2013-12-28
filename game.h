#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game : public QObject
{
    Q_OBJECT

public:
    Game();
    void getAnswer(int, int);
};

#endif // GAME_H
