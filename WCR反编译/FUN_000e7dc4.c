// FUN_000e7dc4 @ 000e7dc4

void FUN_000e7dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined1 local_39;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_000e799c();
    FUN_000e9b50();
    local_39 = local_18 != 0 && uVar2 != 0;
    local_38 = uVar2;
    if ((bool)local_39) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setUserInteractionEnabled__026caad8,1);
      puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_WCRefine_onChatTopBarMoreButtonL_0269e948);
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c98,puVar1,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,local_48,PTR_s_setAllowableMovement__0269e520);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      puVar1 = local_48;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar1,&DAT_028c839e,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addGestureRecognizer__026ca4a8,local_48);
      _objc_storeStrong(&local_48,0);
      local_30 = 0;
    }
    else {
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

