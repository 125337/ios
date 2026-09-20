// FUN_003934d0 @ 003934d0

void FUN_003934d0(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78;
  ulong local_50;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar1,param_2);
  FUN_003d22c8();
  uVar3 = local_20;
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
      uVar3 = local_20;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
        goto LAB_003936c8;
      }
    }
    uVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_78 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_78 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_50 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_50 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
  }
LAB_003936c8:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

