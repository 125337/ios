// FUN_016334a0 @ 016334a0

void FUN_016334a0(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_78;
  undefined *local_60;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_20 = param_1;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar4 & 1) == 0) {
      local_60 = (undefined *)0x0;
    }
    else {
      local_60 = *(undefined **)(param_1 + 0x28);
    }
    puVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_60;
    FUN_0162be00();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_38 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_78;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_28 != (undefined *)0x0) && (local_30 != (undefined *)0x0)) {
      pcVar2 = &cf_setPreviewControllerDelegate_;
      _NSSelectorFromString();
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2);
      puVar1 = local_28;
      if (((ulong)puVar3 & 1) != 0) {
        FUN_01633708();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_28,1,0);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

