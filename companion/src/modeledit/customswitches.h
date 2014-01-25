#ifndef CUSTOMSWITCHES_H
#define CUSTOMSWITCHES_H

#include "modelpanel.h"
#include <QComboBox>
#include <QDoubleSpinBox>

class CustomSwitchesPanel : public ModelPanel
{
    Q_OBJECT

  public:
    CustomSwitchesPanel(QWidget *parent, ModelData & model);
    virtual ~CustomSwitchesPanel();

    virtual void update();

  private slots:
    void edited();
    void csw_customContextMenuRequested(QPoint pos);
    void cswDelete();
    void cswCopy();
    void cswPaste();
    void cswCut();

  private:
    QComboBox * csw[C9X_NUM_CSW];
    QDoubleSpinBox  * cswitchValue[C9X_NUM_CSW];
    QDoubleSpinBox  * cswitchOffset[C9X_NUM_CSW];
    QComboBox * cswitchAnd[C9X_NUM_CSW];
    QDoubleSpinBox  * cswitchDuration[C9X_NUM_CSW];
    QDoubleSpinBox  * cswitchDelay[C9X_NUM_CSW];
    QComboBox * cswitchSource1[C9X_NUM_CSW];
    QComboBox * cswitchSource2[C9X_NUM_CSW];
    void setSwitchWidgetVisibility(int i);
    int selectedSwitch;

    void updateSelectedSwitch();

};

#endif // CUSTOMSWITCHES_H