// FUN_015611fc @ 015611fc

void FUN_015611fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_98;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_20;
  local_20 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_20;
  if (local_20 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_49 = 0;
    local_59 = 0;
    local_98 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_98 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_98;
    }
    local_59 = puVar1 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_98;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_68;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_68;
        FUN_015616fc();
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar2;
        }
        else {
          puVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar2;
        }
        local_24 = 1;
        _objc_storeStrong(&local_78,0);
      }
      else {
        puVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        puVar2 = local_70;
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar2;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = puVar2;
        }
        local_24 = 1;
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_24 = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_24 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

