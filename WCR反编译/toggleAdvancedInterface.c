// toggleAdvancedInterface @ 017e967c

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::toggleAdvancedInterface(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showAdvancedInterface_026b52c8);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setShowAdvancedInterface__026b55a0,(uint)IVar1 ^ 1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

