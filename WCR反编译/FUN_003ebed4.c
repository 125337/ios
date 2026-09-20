// FUN_003ebed4 @ 003ebed4

byte FUN_003ebed4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  for (local_30 = 0; local_30 < 0xc && local_28 != 0; local_30 = local_30 + 1) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_MMInputToolView);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_28 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      local_11 = 1;
    }
    _objc_storeStrong(&local_38,0);
    if (!bVar1) goto LAB_003ec098;
  }
  local_11 = 0;
LAB_003ec098:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

