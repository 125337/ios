// toggleExpandScene: @ 01c32b30

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateBeautifyViewController::toggleExpandScene_
               (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHaptic_026bab98);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sceneExpanded__026c18f8,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setScene_expanded__026c1968,param_3,(uint)IVar1 ^ 1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

