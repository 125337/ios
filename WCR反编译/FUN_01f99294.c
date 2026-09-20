// FUN_01f99294 @ 01f99294

void FUN_01f99294(undefined8 param_1)

{
  undefined *puVar1;
  char *local_68;
  char *local_50;
  char *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    local_2c = 1;
  }
  else {
    puVar1 = PTR_WCRefineVoicePackSettingsViewController_026cea18;
    _objc_alloc_init();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setPageSheetMode__026c9830,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHostSheet__026c8ee0,0);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_68 = "MMUINavigationController";
      _objc_getClass();
      if (local_68 == (char *)0x0) {
        local_68 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_48 = local_68;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setModalPresentationStyle__0269d2a8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
      _objc_storeStrong(&local_50,0);
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_pushViewController_animated__0269d590,local_38,1);
      local_2c = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

