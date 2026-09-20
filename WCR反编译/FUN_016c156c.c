// FUN_016c156c @ 016c156c

void FUN_016c156c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar5 = local_30;
  local_38 = (undefined *)0x0;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar5 & 1) != 0) {
    puVar4 = local_30;
    FUN_016aed70();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_38;
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
  if (local_38 != (undefined *)0x0) {
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isBeingDismissed_0269f460);
    bVar3 = true;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isViewLoaded_0269cde0);
      bVar3 = true;
      if (((ulong)puVar5 & 1) != 0) {
        local_50 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_60 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar3 = local_60 == (undefined *)0x0;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar3) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_38;
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    while( true ) {
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar5 == (undefined *)0x0) break;
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_38;
      local_38 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
  }
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
  if (local_38 != (undefined *)0x0) {
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isBeingDismissed_0269f460);
    bVar3 = true;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isViewLoaded_0269cde0);
      bVar3 = true;
      if (((ulong)puVar5 & 1) != 0) {
        local_70 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_80 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar3 = local_80 == (undefined *)0x0;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar5 = local_38;
  if (bVar3) {
    local_28 = (undefined *)0x0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

