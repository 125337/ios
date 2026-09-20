// presentWeChatPicker @ 01959110

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::presentWeChatPicker(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_60;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "MMPickLocationViewController";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithSceneType_OnlyUseUserLoc_026b9c38), ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OpuNS_u);
    *(undefined8 *)(local_18 + (long)_pickMode) = 0;
  }
  else {
    pcVar1 = local_28;
    _objc_alloc();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_30 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_Sb);
      *(undefined8 *)(local_18 + (long)_pickMode) = 0;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLocationVC__026b9c40,local_30);
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelegate__026ca910,local_18);
      }
      local_60 = "MMUINavigationController";
      _objc_getClass();
      if (local_60 == (char *)0x0) {
        local_60 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_40 = local_60;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setModalPresentationStyle__0269d2a8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1);
      _objc_storeStrong(&local_48,0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

