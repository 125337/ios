// FUN_007d0450 @ 007d0450

void FUN_007d0450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = DAT_028cccd0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = DAT_028cccd0,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd0,PTR_s_length_0269cca0), uVar2 == 0)) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    uVar2 = DAT_028cccd0;
    FUN_007cc908();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      FUN_007cc680(local_20,DAT_028cccd0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = 1;
      local_18 = uVar2;
    }
    else {
      uVar3 = local_28;
      FUN_007d2e10();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = DAT_028cccd0;
      local_40 = uVar3;
      FUN_007cca08(DAT_028cccd0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_38 = 1;
      local_18 = uVar2;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

