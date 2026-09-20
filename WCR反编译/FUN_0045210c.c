// FUN_0045210c @ 0045210c

void FUN_0045210c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_innerTabItems_026a3ca8);
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
    goto LAB_004523a0;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_innerTabItems_026a3ca8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_38;
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setInnerTabItems__026a3cb0);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
        local_40 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setInnerTabItems__026a3cb0,uVar1);
        uVar1 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_30 = 1;
        _objc_storeStrong(&local_40,0);
        goto LAB_00452380;
      }
    }
    local_18 = 0;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_30 = 1;
  }
LAB_00452380:
  _objc_storeStrong(&local_38,0);
LAB_004523a0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

