// FUN_00ee4b18 @ 00ee4b18

void FUN_00ee4b18(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  if (local_20 == 0) {
    uVar1 = *(ulong *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_00eebbec();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      FUN_00ee9250();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      uVar1 = local_20;
      FUN_00ee9250();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

