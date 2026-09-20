// wcrGrouping_insertRow: @ 00380884

/* Function Stack Size: 0x14 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_insertRow_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_active_026a2a40);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_insertRow__026a2a28,param_3);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_insertRow);
  }
  return;
}

