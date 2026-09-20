// FUN_0007f980 @ 0007f980

void FUN_0007f980(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_58;
  long local_50;
  ulong local_48;
  uint local_40;
  long local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_3;
  if ((local_20 == 0) ||
     (lVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar2 = local_20, lVar3 == 0)) {
    local_18 = 0;
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    for (local_50 = 0; local_48 != 0 && local_50 < local_30; local_50 = local_50 + 1) {
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsString__0269d0b0,local_28);
      uVar2 = local_48;
      bVar1 = (uVar4 & 1) == 0;
      if (bVar1) {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_40 = (uint)!bVar1;
      _objc_storeStrong(&local_58,0);
      if (local_40 != 0) goto LAB_0007fbc4;
    }
    local_18 = 0;
    local_40 = 1;
LAB_0007fbc4:
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

