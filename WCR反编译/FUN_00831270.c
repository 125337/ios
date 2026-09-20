// FUN_00831270 @ 00831270

void FUN_00831270(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  int local_44;
  ulong local_40 [3];
  char *local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = "MainTabBarViewController";
  _objc_getClass();
  uVar1 = local_20;
  local_28 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = uVar1;
  do {
    if (local_40[0] == 0) {
      local_44 = 2;
LAB_008313bc:
      _objc_storeStrong(local_40,0);
      local_44 = local_44 + -2;
      if (local_44 == 0) {
        local_18 = 0;
        local_44 = 1;
      }
      _objc_storeStrong(local_44,&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    if (local_28 != (char *)0x0) {
      uVar3 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_isKindOfClass__0269cd68,local_28);
      uVar1 = local_40[0];
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_44 = 1;
        goto LAB_008313bc;
      }
    }
    uVar3 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40[0];
    local_40[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}

