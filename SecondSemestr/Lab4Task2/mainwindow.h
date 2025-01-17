#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void getVarsData();
    void showVarsData();

    int* getObjsAndVarsData();
    void showObjsAndVarsData(int* nums);

    void getFunctionsData();
    void showFunctionsData();

    void coordinatesOfChanges();
    void localsCoordinates();
    void overloadsCoordinates();
    void depthOfBranches();
    void logicalErrors();

private slots:
    void on_fileButton_clicked();

    void on_codeButton_clicked();

    void on_comboBox_currentIndexChanged(int index);
    void keyPressEvent(QKeyEvent *e);

private:
    Ui::MainWindow *ui;
    QString code;
    QString spare;
    std::string temp;
    std::vector<std::string> variables_names;
    std::vector<std::string> variables_data;
    std::vector<std::string> classes_names;
    std::vector<std::pair<std::string, std::string>> objects_names;
    std::vector<std::string> arrays_names;
    std::vector<std::string> functions_names;
    std::vector<std::string> functions_data;
    std::vector<size_t> functions_positions;
};
#endif // MAINWINDOW_H
