// voiceRecordHoldDidStopOrCancelWithInputToolView: @ 00fed048

/* Function Stack Size: 0x18 bytes */

void WCRefineInputBoxGestureSupport::voiceRecordHoldDidStopOrCancelWithInputToolView_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *local_40;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar2 = false;
  bVar1 = false;
  bVar4 = true;
  if ((DAT_028e30f1 & 1) != 0) {
    local_30 = &DAT_028e30b8;
    _objc_loadWeakRetained();
    puVar3 = local_28;
    bVar2 = true;
    bVar4 = false;
    bVar1 = local_30 != (undefined *)0x0;
    if (bVar1) {
      local_40 = &DAT_028e30b8;
      _objc_loadWeakRetained();
      bVar4 = puVar3 != local_40;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar4) {
    DAT_028e30f2 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

