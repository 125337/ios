// FUN_015c34d4 @ 015c34d4

void FUN_015c34d4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint local_54;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = 0;
  local_54 = 1;
  if (local_18 != 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b30);
    _objc_retainAutoreleasedReturnValue();
    local_21 = 1;
    local_20 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)uVar1 ^ 1;
  }
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  if ((local_54 & 1) == 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b31);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,uVar1);
    }
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b32);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    if ((local_38 != 0) && (uVar2 != 0)) {
      FUN_015c58ac();
      if ((uVar2 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setClipsToBounds__026ca8c8,uVar1);
        uVar1 = local_18;
        _objc_getAssociatedObject(local_18,&DAT_028e3b33);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        local_48 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        if ((local_48 != 0) && (uVar2 != 0)) {
          FUN_015c58ac();
          if ((uVar2 & 1) == 0) {
            uVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_boolValue_026ca540);
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,uVar1);
          }
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
      }
    }
    _objc_setAssociatedObject(local_18,&DAT_028e3b30);
    _objc_setAssociatedObject(local_18,&DAT_028e3b31,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028e3b32,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028e3b33,0,1);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  else {
    local_28 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

