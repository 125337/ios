// FUN_000397a0 @ 000397a0

void FUN_000397a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long local_38;
  undefined4 local_2c;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    FUN_0003bc68();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      FUN_0003bd70(lVar1,PTR_s_m_uiPaySubType_0269d6e8);
      if (lVar1 == 3) {
        pcVar2 = local_20;
        FUN_0003bec0(0,local_20,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

