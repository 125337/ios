// FUN_017af13c @ 017af13c

void FUN_017af13c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *local_40 [3];
  char *local_28;
  undefined4 local_1c;
  char *local_18;
  
  if (DAT_028e41d8 == (char *)0x0) {
    pcVar1 = "WCRefineHelper";
    _objc_getClass();
    DAT_028e41d8 = pcVar1;
  }
  pcVar1 = DAT_028e41d8;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_1c = 1;
  }
  else {
    if (DAT_028e41e8 == (char *)0x0) {
      pcVar1 = "WCRefineFileManagerViewController";
      _objc_getClass();
      DAT_028e41e8 = pcVar1;
    }
    pcVar1 = DAT_028e41e8;
    _objc_retainAutoreleaseReturnValue();
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithDirectory_title__026b2df8,0);
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar1 == (char *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_28);
      local_40[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_40[0],1,0);
      _objc_storeStrong(local_40,0);
    }
    else {
      pcVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

