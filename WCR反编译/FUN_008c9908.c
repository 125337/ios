// FUN_008c9908 @ 008c9908

void FUN_008c9908(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  uint local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UITouch_026cea08;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITouch_026cea08,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_20;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_anyObject_026a4b10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UITouch_026cea08;
      local_38 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITouch_026cea08,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_38;
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_30 = (uint)bVar1;
      _objc_storeStrong(&local_38,0);
      if (local_30 != 0) goto LAB_008c9b18;
    }
    local_18 = 0;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar4;
    local_30 = 1;
  }
LAB_008c9b18:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

