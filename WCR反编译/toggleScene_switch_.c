// toggleScene:switch: @ 01c328f0

/* Function Stack Size: 0x20 bytes */

void WCRefineNameplateBeautifyViewController::toggleScene_switch_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
  IVar1 = local_18;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setEnabled_forScene__026c1960,uVar2,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postSettingsChanged_026c1808);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30,0);
  return;
}

