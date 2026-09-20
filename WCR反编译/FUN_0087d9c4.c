// FUN_0087d9c4 @ 0087d9c4

void FUN_0087d9c4(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  ulong local_40;
  int local_38;
  char *local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = "MMTitleView";
  _objc_getClass();
  uVar1 = local_20;
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_18 = 0;
    iVar4 = 1;
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar1;
    while (local_40 != 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_28);
      uVar1 = local_40;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_38 = 1;
        goto LAB_0087db20;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_38 = 2;
LAB_0087db20:
    _objc_storeStrong(&local_40,0);
    iVar4 = local_38 + -2;
    if (iVar4 == 0) {
      local_18 = 0;
      iVar4 = 1;
      local_38 = 1;
    }
  }
  _objc_storeStrong(iVar4,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

