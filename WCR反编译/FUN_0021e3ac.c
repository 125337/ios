// FUN_0021e3ac @ 0021e3ac

byte FUN_0021e3ac(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong local_50;
  char *local_48;
  char *local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    iVar5 = 1;
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = "MMMsgTipsMixedListExpandView";
    _objc_getClass();
    pcVar2 = "MMMsgTipsExpandView";
    local_30 = pcVar1;
    _objc_getClass();
    uVar3 = local_20;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    while (local_50 != 0) {
      if (((local_30 != (char *)0x0) &&
          (uVar3 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_30),
          (uVar3 & 1) != 0)) ||
         ((local_48 != (char *)0x0 &&
          (uVar3 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_48),
          (uVar3 & 1) != 0)))) {
        local_11 = 1;
        local_24 = 1;
        goto LAB_0021e57c;
      }
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_24 = 2;
LAB_0021e57c:
    _objc_storeStrong(&local_50,0);
    iVar5 = local_24 + -2;
    if (iVar5 == 0) {
      iVar5 = 1;
      local_11 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(iVar5,&local_20,0);
  return local_11 & 1;
}

