// FUN_0034a17c @ 0034a17c

void FUN_0034a17c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  uint local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (undefined *)0x0) {
    local_1c = 1;
  }
  else {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_28;
      local_28 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_28 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      local_1c = 1;
    }
    else {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_WCRefineHomeAvatarStripSettingsViewController_026ce588;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeAvatarStripSettingsViewController_026ce588,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = ((ulong)puVar3 & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        puVar3 = PTR_WCRefineHomeAvatarStripSettingsViewController_026ce588;
        _objc_alloc_init();
        local_38 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
        puVar2 = local_28;
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_68 = PTR___NSConcreteGlobalBlock_02578658;
        local_60 = 0xd0800000;
        local_5c = 0;
        local_58 = FUN_00352354;
        local_50 = &DAT_0257ab20;
        (*(code *)PTR__objc_retain_02578638)();
        puVar4 = local_38;
        local_48 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_68);
        _objc_storeStrong(&local_40);
        _objc_storeStrong(&local_48,0);
        _objc_storeStrong(&local_38,0);
      }
      local_1c = (uint)!bVar1;
      _objc_storeStrong(&local_30,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

