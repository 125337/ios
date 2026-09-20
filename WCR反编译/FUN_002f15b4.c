// FUN_002f15b4 @ 002f15b4

void FUN_002f15b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_50;
  long local_48;
  uint local_40;
  undefined1 local_29;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_gestureScreenshotTitleSwipeEnabl_026a1f68);
  local_29 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    local_40 = 1;
  }
  else {
    lVar2 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026dfda0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    if (lVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_wcrefine_handleGlobalTitleSwipe__026a1ec0);
      local_50 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setCancelsTouchesInView__026ca8b8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelaysTouchesEnded__026a1af8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelegate__026ca910,local_18);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addGestureRecognizer__026ca4a8,local_50);
      _objc_setAssociatedObject(local_18,DAT_026dfda0,local_50,1);
      _objc_storeStrong(&local_50,0);
    }
    local_40 = (uint)(lVar2 != 0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

