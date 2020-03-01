#include "central_widget.h"
#include <QIcon>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTranslator>

ui::CentralWidget::CentralWidget(QWidget *parent)
    : QWidget(parent),
      m_lblOutputInfo(nullptr),
      m_pbCalculate(nullptr),
      m_leInputSubstance(nullptr)
{
    m_pbCalculate = new QPushButton(this);
    m_pbCalculate->setText(tr("Calculate"));

    m_leInputSubstance = new QLineEdit(this);

    QHBoxLayout* hblInputLine = new QHBoxLayout();
    QLabel* lblInputSubstance = new QLabel(tr("Input substance: "), this);
    hblInputLine->addWidget(lblInputSubstance);
    hblInputLine->addWidget(m_leInputSubstance);
    hblInputLine->addWidget(m_pbCalculate);

    m_lblOutputInfo = new QLabel(this);

    QVBoxLayout* vblInputLine = new QVBoxLayout();
    vblInputLine->addLayout(hblInputLine);
    vblInputLine->addWidget(m_lblOutputInfo);

    setLayout(vblInputLine);
}
