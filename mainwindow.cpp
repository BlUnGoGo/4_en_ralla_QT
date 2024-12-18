#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameboard.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Crear acciones para la barra de herramientas
    QAction *gameboardAction = new QAction("Jugar", this);
    //QWidged *Label = new QLabel("4 en ralla");


    // Agregar acciones a la barra de herramientas
    ui->toolBar->addAction(gameboardAction);
    ui->toolBar->addWidget(ui->label);

    // Conectar acciones con slots
    connect(gameboardAction, &QAction::triggered, this, &MainWindow::showGameboardWidget);


    //Mostrar inicialmete el gameboard
    //showGameboardWidget();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showGameboardWidget() {

    currentWidget = new GameBoard(this);
    setCentralWidget(currentWidget);
}
