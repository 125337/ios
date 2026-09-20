// FUN_0085603c @ 0085603c

void FUN_0085603c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [67];
  undefined1 local_1d;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f48e8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_1d = (undefined1)uVar2;
    if ((uVar2 & 1) == 0) {
      local_1c = 1;
    }
    else {
      _memcpy(auStack_60,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar1 = local_18;
      _memcpy(auStack_90,auStack_60,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_90);
      _objc_setAssociatedObject(local_18,DAT_026f48e8,0,1);
      local_1c = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

