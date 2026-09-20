// FUN_0087d760 @ 0087d760

byte FUN_0087d760(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_48 [3];
  char *local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    iVar4 = 1;
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = "MMTitleView";
    _objc_getClass();
    uVar2 = local_20;
    local_30 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      iVar4 = 1;
      local_11 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar2;
      while (local_48[0] != 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30);
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          local_24 = 1;
          goto LAB_0087d8e0;
        }
        uVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48[0];
        local_48[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_24 = 2;
LAB_0087d8e0:
      _objc_storeStrong(local_48,0);
      iVar4 = local_24 + -2;
      if (iVar4 == 0) {
        iVar4 = 1;
        local_11 = 0;
        local_24 = 1;
      }
    }
  }
  _objc_storeStrong(iVar4,&local_20,0);
  return local_11 & 1;
}

