// FUN_0021f5e4 @ 0021f5e4

void FUN_0021f5e4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long local_50;
  ulong local_48;
  ulong local_40 [3];
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UINavigationBar_026ce2a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationBar_026ce2a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      local_40[0] = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_40[0];
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(local_40,0);
      if (local_24 != 0) goto LAB_0021f8fc;
    }
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    for (local_50 = 0; uVar3 = local_48, local_48 != 0 && local_50 < 0x10; local_50 = local_50 + 1)
    {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar4 = local_48;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar4;
        goto LAB_0021f8ec;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_18 = 0;
LAB_0021f8ec:
    local_24 = 1;
    _objc_storeStrong(&local_48,0);
  }
LAB_0021f8fc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

