// FUN_005d6900 @ 005d6900

void FUN_005d6900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = local_18;
  local_31 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  _objc_getAssociatedObject(local_18,param_3);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if ((local_31 & 1) == 0) {
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_setAssociatedObject(local_18,local_28,0,1);
  }
  else {
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_WCRefine_showDetailSwipeAction__026a5890);
      puVar1 = local_40;
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDirection__026a5bf0,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCancelsTouchesInView__026ca8b8,0);
      _objc_setAssociatedObject(local_18,local_28,local_40,1);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_20;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 != puVar1) {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addGestureRecognizer__026ca4a8,local_40);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

