// FUN_00953d78 @ 00953d78

void FUN_00953d78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *local_90;
  undefined *local_70;
  char *local_60;
  char *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_31 = 0;
  local_70 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_70 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_70;
  }
  local_31 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_70;
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_28 == (undefined *)0x0) {
    local_38 = 1;
  }
  else {
    while( true ) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar1 == (undefined *)0x0) break;
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_28;
      local_28 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = PTR_WCRefineClipboardSettingsViewController_026ceac0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineClipboardSettingsViewController_026ceac0,PTR_s_new_0269d288);
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_90 = "MMUINavigationController";
      _objc_getClass();
      if (local_90 == (char *)0x0) {
        local_90 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_58 = local_90;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_60,1);
      _objc_storeStrong(&local_60,0);
      local_38 = 0;
    }
    else {
      pcVar3 = &cf_PushViewController_animated_;
      _NSSelectorFromString();
      puVar1 = local_48;
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_pushViewController_animated__0269d590,local_40,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_40,1);
      }
      local_38 = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

