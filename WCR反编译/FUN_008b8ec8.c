// FUN_008b8ec8 @ 008b8ec8

void FUN_008b8ec8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    if (uVar2 != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
      goto LAB_008b8ff0;
    }
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar2;
LAB_008b8ff0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

