// FUN_005ffd4c @ 005ffd4c

void FUN_005ffd4c(undefined *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_c0;
  undefined *local_a0;
  undefined *local_98;
  uint local_8c;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_69 = 0;
  local_79 = 0;
  local_c0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_c0 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_c0;
  }
  local_79 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_c0;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_88 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_88;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      local_98 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_98;
      bVar1 = ((ulong)puVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
      }
      local_8c = (uint)bVar1;
      _objc_storeStrong(&local_98,0);
      if (local_8c != 0) goto LAB_00600464;
    }
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_findTopViewController_026a5e08);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_a0;
      local_a0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      while( true ) {
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 == (undefined *)0x0) break;
        puVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_a0;
        local_a0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    while (local_a0 != (undefined *)0x0) {
      puVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 != (undefined *)0x0) {
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar2;
        goto LAB_00600454;
      }
      puVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_a0;
      local_a0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_28 = (undefined *)0x0;
LAB_00600454:
    local_8c = 1;
    _objc_storeStrong(&local_a0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_8c = 1;
  }
LAB_00600464:
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

