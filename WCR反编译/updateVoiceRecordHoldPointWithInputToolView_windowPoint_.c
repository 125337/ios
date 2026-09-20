// updateVoiceRecordHoldPointWithInputToolView:windowPoint: @ 00fed4a8

/* Function Stack Size: 0x28 bytes */

void __thiscall
WCRefineInputBoxGestureSupport::updateVoiceRecordHoldPointWithInputToolView_windowPoint_
          (WCRefineInputBoxGestureSupport *this,ID param_1,SEL param_2,ID param_3,CGPoint param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined *local_68;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  local_20 = in_d0;
  local_18 = in_d1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  if ((DAT_028e30d0 & 1) == 0) {
    local_3c = 1;
  }
  else {
    bVar1 = local_38 == (undefined *)0x0;
    if (bVar1) {
      local_68 = &DAT_028e30a8;
      _objc_loadWeakRetained();
      local_50 = local_68;
    }
    else {
      local_68 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_68;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (local_48 == (undefined *)0x0) {
      local_3c = 1;
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setPointInScreen__026ad558);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,local_18,local_48,PTR_s_setPointInScreen__026ad558);
      }
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

