// FUN_006004bc @ 006004bc

void FUN_006004bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_a0;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  local_a0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_a0 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_a0;
  }
  local_71 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a0;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar1;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar1 = local_80;
        puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        puVar2 = local_80;
        if (((ulong)puVar1 & 1) == 0) break;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_80;
        local_80 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar2 & 1) == 0) break;
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_80;
      local_80 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_80;
    if (puVar2 == (undefined *)0x0) break;
    puVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_80;
    local_80 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

