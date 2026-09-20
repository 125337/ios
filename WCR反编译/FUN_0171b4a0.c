// FUN_0171b4a0 @ 0171b4a0

void FUN_0171b4a0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_48;
  int local_40;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = param_1;
  while (puVar1 = local_30, local_30 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_30;
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_40 = 1;
      goto LAB_0171b81c;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_48 != (undefined *)0x0) {
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_50;
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar1 == (undefined *)0x0) {
        local_40 = 0;
      }
      else {
        puVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_40 = 1;
        local_18 = puVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_40 = 1;
    }
    _objc_storeStrong(&local_50,0);
    if (local_40 != 0) goto LAB_0171b7fc;
  }
  local_18 = (undefined *)0x0;
  local_40 = 1;
LAB_0171b7fc:
  _objc_storeStrong(&local_48,0);
LAB_0171b81c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

