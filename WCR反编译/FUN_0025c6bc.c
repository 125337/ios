// FUN_0025c6bc @ 0025c6bc

void FUN_0025c6bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_a0;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  int local_4c;
  byte local_45;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  do {
    if (local_30 == (undefined *)0x0) break;
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_a0 = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_ContextMenu)
      ;
      local_a0 = 1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_containsString__0269d0b0,&cf_PreviewMenu);
        local_a0 = 1;
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_containsString__0269d0b0,&cf_UIEditingOverlay);
          local_a0 = (uint)puVar1;
        }
      }
    }
    local_45 = (byte)local_a0 & 1;
    if ((local_a0 & 1) == 0) {
      local_4c = 3;
    }
    else {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar1 == (undefined *)0x0) {
        local_4c = 3;
      }
      else {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_30;
        local_30 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_4c = 2;
      }
    }
    _objc_storeStrong(&local_38,0);
  } while (local_4c == 2);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_4c = 1;
    local_28 = puVar1;
    goto LAB_0025cfa0;
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_parentViewController_0269e500);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  while (local_60 != (undefined *)0x0) {
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_60;
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_4c = 1;
      local_28 = puVar1;
      goto LAB_0025cb98;
    }
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_60;
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_4c = 1;
      goto LAB_0025cb98;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_4c = 4;
LAB_0025cb98:
  _objc_storeStrong(&local_60,0);
  if (local_4c != 4) goto LAB_0025cfa0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_70;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_selectedViewController_0269d610);
      if (((ulong)puVar1 & 1) != 0) {
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_78 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        puVar1 = local_78;
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar1 == (undefined *)0x0) {
            local_4c = 0;
          }
          else {
            puVar1 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            local_4c = 1;
            local_28 = puVar1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar1;
          local_4c = 1;
        }
        _objc_storeStrong(&local_78,0);
        if (local_4c != 0) goto LAB_0025cf60;
      }
      local_28 = (undefined *)0x0;
      local_4c = 1;
    }
    else {
      puVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_4c = 1;
      local_28 = puVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
    local_4c = 1;
  }
LAB_0025cf60:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
LAB_0025cfa0:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

