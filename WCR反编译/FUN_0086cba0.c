// FUN_0086cba0 @ 0086cba0

void FUN_0086cba0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_0088a01c();
  uVar2 = local_28;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    uVar2 = local_18;
    FUN_0087bb34(local_18,local_28);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_28;
      FUN_0087bdc8();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        FUN_0087d28c();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar2;
        if ((uVar2 != 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_28),
           (uVar2 & 1) == 0)) {
          _objc_storeStrong(&local_40,local_48);
        }
        _objc_storeStrong(&local_48,0);
      }
      else {
        FUN_0087c02c(local_18);
        _objc_storeStrong(&local_40,&cf___);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setAlpha__026ca860);
      }
    }
    (*DAT_028cd6b0)(local_18,local_20,local_40);
    FUN_0087b4e4(local_18,&cf_MMUILabel_setText);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  else {
    (*DAT_028cd6b0)(local_18,local_20,local_28);
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

