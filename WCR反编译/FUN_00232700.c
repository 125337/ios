// FUN_00232700 @ 00232700

void FUN_00232700(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long local_50;
  ulong local_48 [3];
  char *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = "MMHeadImageView";
    _objc_getClass();
    uVar2 = local_20;
    local_30 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar2;
      for (local_50 = 0; local_48[0] != 0 && local_50 < 8; local_50 = local_50 + 1) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30);
        local_18 = local_48[0];
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          goto LAB_002328b0;
        }
        uVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48[0];
        local_48[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_18 = 0;
LAB_002328b0:
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

