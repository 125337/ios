// FUN_0073dca0 @ 0073dca0

void FUN_0073dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_48;
  int local_40;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  if (local_30 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
      local_40 = 1;
      goto LAB_0073deb4;
    }
  }
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    FUN_0073f088();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    uVar4 = 0;
    if (uVar2 == 0) {
LAB_0073de54:
      local_40 = 0;
    }
    else {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_30);
      uVar4 = uVar2 & 0xffffffff;
      if ((uVar2 & 1) == 0) goto LAB_0073de54;
      local_18 = 0;
      uVar4 = 1;
      local_40 = 1;
    }
    _objc_storeStrong(uVar4,&local_48,0);
    if (local_40 != 0) goto LAB_0073deb4;
  }
  uVar3 = local_20;
  (*DAT_028cc5d8)(local_20,local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 1;
  local_18 = uVar3;
LAB_0073deb4:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

