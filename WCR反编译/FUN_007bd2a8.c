// FUN_007bd2a8 @ 007bd2a8

void FUN_007bd2a8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_40;
  undefined *local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_007bd624();
  FUN_007ac894();
  if (((uVar2 & 1) == 0) || (FUN_007ae358(), uVar2 == 0)) {
    local_28 = 1;
  }
  else {
    local_30 = 0;
    FUN_007ae358();
    if (uVar2 == 2) {
      uVar3 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026f4658);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    bVar1 = local_30 != 0;
    if (bVar1) {
      puVar4 = PTR_WCRTGSwipeSwitchDelegate_026ce960;
      _objc_alloc_init();
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setMainFrame__026a8330,local_18);
      puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_wcr_tgHandleSwipeSwitch__026a8200);
      local_40 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDelegate__026ca910,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelaysTouchesEnded__026a1af8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMaximumNumberOfTouches__026ca9c0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addGestureRecognizer__026ca4a8,local_40);
      _objc_setAssociatedObject(local_18,DAT_026f4680,local_40,1);
      _objc_setAssociatedObject(local_18,DAT_026f46a8,local_38,1);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    local_28 = (uint)!bVar1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

