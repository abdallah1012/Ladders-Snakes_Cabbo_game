#ifndef PLAYERS_H
#define PLAYERS_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>

class players : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit players(QObject *parent = nullptr);
    int cell;
    double limit;
    double limitup;
    double limitback;
    QTimer * timer;
    bool active;
    int steps;
    bool notFirst; //since to my misfortune, there is a ladder on 0 and 0 is a possible die roll :D

public slots:
    void MoveUp();
    void activate();
    void MoveRight();
    void MoveLeft();
    void activateRight();
    void activateLeft();
    void MoveP(int);
    int FindCell();
    void MovePExtra(int);
    void MovePCust(int);
    void activateRU();
    void MoveRU();
    void activateLU();
    void MoveLU();
    void activateLUR();
    void activateRUL();
    void MoveLUR();
    void MoveRUL();

};

#endif // PLAYERS_H
