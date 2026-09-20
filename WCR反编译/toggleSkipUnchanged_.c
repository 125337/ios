// toggleSkipUnchanged: @ 01863dac

/* Function Stack Size: 0x18 bytes */

void WCRefineBatchRemarkViewController::toggleSkipUnchanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSkipUnchanged__026b6a90,uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

