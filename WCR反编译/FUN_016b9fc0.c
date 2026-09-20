// FUN_016b9fc0 @ 016b9fc0

void FUN_016b9fc0(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_41;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028e3eea);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  bVar2 = false;
  uVar1 = uVar3 != 0;
  local_28 = uVar3;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 != 0;
    local_41 = uVar1;
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  uVar3 = local_28;
  if (bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_48 = 1;
  }
  else {
    if (local_28 != 0) {
      _objc_setAssociatedObject(local_20,&DAT_028e3eea,0,1);
    }
    local_50 = 0;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getBgImageView_0269f0e0);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getBgImageView_0269f0e0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_50 != 0) {
      _objc_setAssociatedObject(local_20,&DAT_028e3eea,local_50,1);
    }
    uVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

