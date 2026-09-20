// wcrGrouping_deleteSessionCell:atSection:withUser: @ 0038090c

/* Function Stack Size: 0x24 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_deleteSessionCell_atSection_withUser_
               (ID param_1,SEL param_2,unsigned_int param_3,long_long param_4,ID param_5)

{
  ID IVar1;
  undefined8 local_38;
  long_long local_30;
  unsigned_int local_24;
  SEL local_20;
  ID local_18;
  
  local_38 = 0;
  local_30 = param_4;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_38,param_5);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_active_026a2a40);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrGrouping_deleteSessionCell_at_026a2a30,local_24,local_30,local_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_deleteSessionCell);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

