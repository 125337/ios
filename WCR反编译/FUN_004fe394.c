// FUN_004fe394 @ 004fe394

void FUN_004fe394(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_28;
  FUN_004fe694();
  pcVar1 = local_28;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_20;
    FUN_004fe8e0(local_20,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    FUN_004fe694();
    pcVar1 = local_38;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_20;
      FUN_004fe8e0(local_20,&cf_m_nsToUsr);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      FUN_004fe694();
      pcVar1 = local_40;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_2c = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

