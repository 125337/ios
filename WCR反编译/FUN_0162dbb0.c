// FUN_0162dbb0 @ 0162dbb0

void FUN_0162dbb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (undefined *)0x0) {
    local_1c = 1;
  }
  else {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    FUN_0162be00();
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_28;
      local_28 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_28;
    FUN_01632e0c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      if (local_28 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRelSb);
        local_1c = 0;
      }
      else {
        pcVar3 = &cf_MMUINavigationController;
        _NSClassFromString();
        puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_38 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isSubclassOfClass__0269e590,puVar1);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          local_38 = pcVar3;
        }
        pcVar3 = local_38;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_40 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setModalPresentationStyle__0269d2a8);
        puVar1 = PTR__WCRSFPresentedDismissProxy_026cee68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__WCRSFPresentedDismissProxy_026cee68,PTR_s_new_0269d288);
        local_48 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHost__026a2518,local_40);
        _objc_setAssociatedObject(local_40,DAT_028c5ff8,local_48,1);
        puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
        local_1c = 1;
        _objc_storeStrong(&local_48,0);
        _objc_storeStrong(&local_40,0);
      }
    }
    else {
      FUN_01633184(puVar1,local_18);
      local_1c = 1;
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

