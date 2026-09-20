// FUN_01d1edfc @ 01d1edfc

void FUN_01d1edfc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *local_78;
  undefined *local_60;
  char *local_50;
  char *local_48;
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
  local_60 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_60 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_60;
  }
  local_31 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_28 == (undefined *)0x0) {
    local_38 = 1;
  }
  else {
    puVar1 = PTR_WCRefineQuickReplyListViewController_026ced10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineQuickReplyListViewController_026ced10,PTR_s_new_0269d288);
    local_78 = "MMUINavigationController";
    local_40 = puVar1;
    _objc_getClass();
    if (local_78 == (char *)0x0) {
      local_78 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_48 = local_78;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_50 = local_78;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setModalPresentationStyle__0269d2a8,1);
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
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

