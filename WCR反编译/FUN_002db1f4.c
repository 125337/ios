// FUN_002db1f4 @ 002db1f4

byte FUN_002db1f4(undefined8 param_1)

{
  cfstringStruct **ppcVar1;
  cfstringStruct *local_98;
  long *local_70;
  long *local_48;
  long *local_40;
  long *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  byte local_11;
  
  ppcVar1 = &local_20;
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar1,param_1);
  FUN_002d50e0();
  if (((ulong)ppcVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    FUN_002d5b2c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = (long *)ppcVar1;
    FUN_002b7bc4();
    _objc_retainAutoreleasedReturnValue();
    local_70 = (long *)ppcVar1;
    if (ppcVar1 == (cfstringStruct **)0x0) {
      local_48 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tabBar_0269e518);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_70;
    if (ppcVar1 == (cfstringStruct **)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(ppcVar1);
    if (((cfstringStruct **)local_38 == (cfstringStruct **)0x0) ||
       ((cfstringStruct **)local_40 == (cfstringStruct **)0x0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_40,PTR_s_setAlpha__026ca860);
      if (local_20 == (cfstringStruct *)0x0) {
        local_98 = &cf_moments;
      }
      else {
        local_98 = local_20;
      }
      FUN_002d77c4(local_38,0,local_98);
      FUN_002bb194(local_40,local_38,0);
      local_11 = 1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

