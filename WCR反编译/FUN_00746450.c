// FUN_00746450 @ 00746450

void FUN_00746450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined4 local_30;
  ulong local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_18 == (undefined *)0x0) ||
      (puVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tag_026cab98),
      puVar1 != (undefined *)0x2c63a)) || (uVar2 = local_20, FUN_00744a5c(0), (uVar2 & 1) == 0)) {
    local_30 = 1;
  }
  else {
    puVar1 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f45c0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithTarget_action__026ca718,local_20,
                 PTR_s_WCRSSHandleSmallSignalAttachment_026a7c08);
      puVar1 = local_38;
      local_38 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,local_38,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCancelsTouchesInView__026ca8b8,0);
      _objc_setAssociatedObject(local_18,DAT_026f45c0,local_38,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addGestureRecognizer__026ca4a8,local_38);
    }
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

