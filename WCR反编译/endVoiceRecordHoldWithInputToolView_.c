// endVoiceRecordHoldWithInputToolView: @ 00fec8ec

/* Function Stack Size: 0x18 bytes */

void WCRefineInputBoxGestureSupport::endVoiceRecordHoldWithInputToolView_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_48 = &DAT_028e30a8;
    _objc_loadWeakRetained();
    local_30 = local_48;
  }
  else {
    local_48 = local_28;
  }
  FUN_00fec9bc(local_48,0);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

