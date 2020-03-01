#ifndef SUBSTANCE_CALCULATOR_CENTRAL_WIDGET_H
#define SUBSTANCE_CALCULATOR_CENTRAL_WIDGET_H

#include <QWidget>
class QLabel;
class QPushButton;
class QLineEdit;

namespace ui {
    class CentralWidget : public QWidget {
            Q_OBJECT
        public:
            CentralWidget(QWidget *parent = nullptr);

        signals:

        public slots:

        private:
            QLabel* m_lblOutputInfo;
            QPushButton* m_pbCalculate;
            QLineEdit* m_leInputSubstance;
    };
}


#endif // SUBSTANCE_CALCULATOR_CENTRAL_WIDGET_H
