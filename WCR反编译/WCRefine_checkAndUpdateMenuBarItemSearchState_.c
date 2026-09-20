// WCRefine_checkAndUpdateMenuBarItemSearchState: @ 004cc31c

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::WCRefine_checkAndUpdateMenuBarItemSearchState_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar1,param_3);
  FUN_004ca9dc();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_004caafc();
    if (((ulong)puVar1 & 1) != 0) {
      IVar2 = local_18;
      FUN_004cab6c();
      if ((IVar2 & 1) != 0) {
        FUN_004cabc8(local_18,0);
        goto LAB_004cc3d8;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefine_checkAndUpdateMenuBarIt_026a4098,local_28);
  }
  else {
    FUN_004ca9f8(local_18,0);
  }
LAB_004cc3d8:
  _objc_storeStrong(&local_28,0);
  return;
}

