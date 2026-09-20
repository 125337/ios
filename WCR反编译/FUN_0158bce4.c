// FUN_0158bce4 @ 0158bce4

void FUN_0158bce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_deselectRowAtIndexPath_animated__0269e990);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_28,1);
  }
  FUN_01530038();
  local_30 = uVar1;
  if (uVar1 - 2 == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_0158bee4(uVar1 - 2,local_18,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    if (uVar2 == 0) {
      local_34 = 1;
    }
    else if (local_30 - 1 == 0) {
      FUN_01558bec(uVar2);
      local_34 = 1;
    }
    else {
      pcVar3 = &cf_JumpToChatRoom_;
      _NSSelectorFromString(local_30 - 1);
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar3);
      uVar1 = local_40;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        FUN_01560ee4(uVar1);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_34 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar3,local_40);
        local_34 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

