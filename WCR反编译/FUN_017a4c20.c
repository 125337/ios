// FUN_017a4c20 @ 017a4c20

void FUN_017a4c20(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (DAT_028e41f0 == (char *)0x0) {
    pcVar1 = "ThemeExchangeViewController";
    _objc_getClass();
    DAT_028e41f0 = pcVar1;
  }
  pcVar1 = DAT_028e41f0;
  _objc_retainAutoreleaseReturnValue();
  _objc_alloc_init();
  local_28 = pcVar1;
  if (DAT_028e41d8 == (char *)0x0) {
    pcVar1 = "WCRefineHelper";
    _objc_getClass();
    DAT_028e41d8 = pcVar1;
  }
  pcVar1 = DAT_028e41d8;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_40 = 1;
  }
  else {
    FUN_017af468();
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar1 == (char *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_28);
        local_50 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1,0);
        _objc_storeStrong(&local_50,0);
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_28);
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
      _objc_storeStrong(&local_48,0);
    }
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

