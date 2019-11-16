#include "game2_scene.h"
#include <QImage>
#include <QDir>
#include <time.h>


game2_scene::game2_scene()
{

    QImage green;
    this->setSceneRect(0,0,900,900);



    if (green.load(QDir::currentPath() + "/Images/CardBackground.jpg"))
    {
        //green.scaled(1500,1500);
        this->setBackgroundBrush(QBrush(green.scaledToHeight(900).scaledToWidth(900)));
    }



    //the position of in the array represents the card's number + 1 and of the type of the array's name, if its position contains a 1
    //then it is available inside the pile
    for(int i = 0 ; i < 52; i++)
    {
        pile[i] = 1;
    }

    playerCards1 = new Cards();
    playerCards2 = new Cards();
    playerCards3 = new Cards();
    playerCards4 = new Cards();
    playerCards5 = new Cards();
    playerCards6 = new Cards();
    playerCards7 = new Cards();
    playerCards8 = new Cards();
    playerCards9 = new Cards();
    playerCards10 = new Cards();
    playerCards11 = new Cards();
    playerCards12= new Cards();

    fromPile = new Cards();
    toPile = new Cards();

    //set up here the initial position of the cards

    //player1
    playerCards1->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards1);
    playerCards1->setPos(325,600);

    playerCards2->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards2);
    playerCards2->setPos(450,600);

    playerCards3->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards3);
    playerCards3->setPos(325,725);

    playerCards4->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards4);
    playerCards4->setPos(450,725);

    //player2
    playerCards5->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards5);
    playerCards5->setPos(150,0);

    playerCards6->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards6);
    playerCards6->setPos(275,0);

    playerCards7->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards7);
    playerCards7->setPos(150,125);

    playerCards8->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards8);
    playerCards8->setPos(275,125);


    //player3
    playerCards9->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards9);
    playerCards9->setPos(500,0);

    playerCards10->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards10);
    playerCards10->setPos(625,0);

    playerCards11->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards11);
    playerCards11->setPos(500,125);

    playerCards12->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(playerCards12);
    playerCards12->setPos(625,125);

    //from pile
    fromPile->setPixmap((QPixmap(QDir::currentPath() + "/Images/CardBack.png")).scaled(125,125));
    this->addItem(fromPile);
    fromPile->setPos(387.5,387.5);


    srand(time(0));
    int j[12] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

    for(int i = 0 ; i < 12; i ++)
    {
        while(j[i] == -1)
        {
            int x = 1 + rand()%52;

            if(pile[x] == 1)
            {
                j[i] = x;
                pile[x] = 0;
            }

        }
    }
}
