// FUN_007d0288 @ 007d0288

void FUN_007d0288(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = DAT_028cccc8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = DAT_028cccc8,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0), uVar2 == 0)) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    uVar3 = DAT_028cccc8;
    FUN_007cc908();
    uVar2 = DAT_028cccc8;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_30 = 1;
    }
    else {
      uVar4 = local_20;
      FUN_007cccac();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = DAT_028cccc8;
      local_38 = uVar4;
      FUN_007cca08(DAT_028cccc8,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_30 = 1;
      local_18 = uVar2;
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

