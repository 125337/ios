// FUN_0043b6d0 @ 0043b6d0

void FUN_0043b6d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_a8;
  undefined *local_88;
  undefined *local_68;
  undefined *local_60;
  uint local_58;
  byte local_51;
  undefined *local_50;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIResponder_026ce050;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIResponder_026ce050,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_88 = (undefined *)0x0;
  }
  else {
    local_88 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_88;
  do {
    puVar2 = local_38;
    if (local_38 == (undefined *)0x0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      FUN_0043bbe4();
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_58 = 1;
LAB_0043bb8c:
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
      _objc_autoreleaseReturnValue(local_28);
      return;
    }
    local_51 = 0;
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_a8 = 0;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a8 = (uint)puVar2;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    puVar2 = local_38;
    if ((local_a8 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_58 = 1;
      goto LAB_0043bb8c;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetCurrentViewController_0269d2d0);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_GetCurrentViewController_0269d2d0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar2 & 1) == 0) {
LAB_0043ba88:
        local_58 = 0;
      }
      else {
        puVar2 = local_60;
        FUN_0043bbe4();
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar2;
        if (puVar2 != (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar2;
        }
        local_58 = (uint)(puVar2 != (undefined *)0x0);
        _objc_storeStrong(&local_68,0);
        if (local_58 == 0) goto LAB_0043ba88;
      }
      _objc_storeStrong(&local_60,0);
      if (local_58 != 0) goto LAB_0043bb8c;
    }
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  } while( true );
}

