// wcr_sheetPickRange: @ 01dd2750

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsViewController::wcr_sheetPickRange_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_dismissRangeSheet_026c55c0);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_applyTimeRange__026c5618,uVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

