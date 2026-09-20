// FUN_0045d5fc @ 0045d5fc

byte FUN_0045d5fc(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *local_b8;
  undefined *local_78;
  undefined *local_70;
  int local_68;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48 [3];
  undefined *local_30;
  byte local_21;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineLocalEmoticonLibraryViewController_026ce6c8;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonLibraryViewController_026ce6c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_61 = 0;
    local_b8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_b8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b8;
    }
    local_61 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = local_b8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_48[0] == (undefined *)0x0) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar5 = puVar4 + -1;
      if (puVar4 == (undefined *)0x0 || puVar5 == (undefined1 *)0x0) {
        local_68 = 0;
      }
      else {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        local_21 = 1;
        local_68 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
      puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      local_21 = 1;
      local_68 = 1;
    }
    _objc_storeStrong(puVar5,local_48,0);
    if (local_68 != 0) goto LAB_0045ddd0;
  }
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_30;
  local_70 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) != 0) {
      _objc_storeStrong(&local_70,local_30);
    }
  }
  puVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewControllers_0269e348);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_78;
  puVar3 = PTR_WCRefineLocalEmoticonLibraryViewController_026ce6c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonLibraryViewController_026ce6c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = false;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (bVar1) {
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  local_68 = 1;
  local_21 = bVar1;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_0045ddd0:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

