// FUN_0071f028 @ 0071f028

void FUN_0071f028(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  long local_38;
  uint local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_0071f3b4();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 == 0) {
    local_30 = 1;
  }
  else {
    _objc_getAssociatedObject(lVar1,&DAT_02324278);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_wcr_onSendCaptrueLongPress__026a77c8);
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd6666666666666,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addGestureRecognizer__026ca4a8,local_40);
      _objc_setAssociatedObject(local_20,&DAT_02324278,local_40,1);
      _objc_storeStrong(&local_40,0);
    }
    lVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_02324279);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_wcr_onSendCaptrueSwipeUp__026a77d0);
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setCancelsTouchesInView__026ca8b8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setMaximumNumberOfTouches__026ca9c0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addGestureRecognizer__026ca4a8,local_50);
      _objc_setAssociatedObject(local_20,&DAT_02324279,local_50,1);
      _objc_storeStrong(&local_50,0);
    }
    local_30 = (uint)(lVar1 != 0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

