// wcr_dismissRangeSheet @ 01dd0168

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_dismissRangeSheet(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rangeSheet_026c55b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setRangeSheet__026c55b8,0);
  return;
}

