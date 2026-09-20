// FUN_0162d930 @ 0162d930

void FUN_0162d930(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineSuperFloatButtonConfigViewController_026cee60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSuperFloatButtonConfigViewController_026cee60,PTR_s_new_0269d288);
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  FUN_0162be00();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
    iVar1 = 2;
    ___isPlatformVersionAtLeast(2,0xf,0);
    if (iVar1 != 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sheetPresentationController_026af2b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (local_20 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRelSb);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1,0);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    FUN_0162dbb0(local_18);
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

