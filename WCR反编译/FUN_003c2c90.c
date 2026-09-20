// FUN_003c2c90 @ 003c2c90

void FUN_003c2c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_70;
  bool local_41;
  undefined8 local_40;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = local_30, FUN_003c32ec(), (uVar2 & 1) == 0)) {
    local_41 = DAT_028ca1c0 == (code *)0x0;
    if (local_41) {
      local_70 = 0;
    }
    else {
      local_70 = local_20;
      (*DAT_028ca1c0)(local_20,local_28,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_70;
    }
    local_41 = !local_41;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

