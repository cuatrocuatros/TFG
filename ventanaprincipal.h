#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <QObject>
#include <QUrl>
#include "csound.hpp"

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::VentanaPrincipal *ui;
};

#endif // VENTANAPRINCIPAL_H
