#ifndef WIN_H
#define WIN_H

#include <QWidget>

class Win : public QWidget
{
    Q_OBJECT

public:
    Win(QWidget *parent = nullptr);
    ~Win();
};
#endif // WIN_H
