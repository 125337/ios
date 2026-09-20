// setShowAdvancedInterface: @ 017ea494

/* Function Stack Size: 0x14 bytes */

void WCRefineAISettingsViewController::setShowAdvancedInterface_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showAdvancedInterface) = (byte)param_3 & 1;
  return;
}

