// FUN_001419f8 @ 001419f8

void FUN_001419f8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  undefined *local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  FUN_00148b88();
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_70 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_70 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  local_41 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_70;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_28 == (undefined *)0x0) {
    local_48 = 1;
  }
  else {
    puVar1 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026df910);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_WCRAttachHandleLongPressToOpenSe_0269f358);
      puVar1 = local_50;
      local_50 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,local_50,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCancelsTouchesInView__026ca8b8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelegate__026ca910,local_18);
      _objc_setAssociatedObject(local_18,DAT_026df910,local_50,1);
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 != puVar1) {
      puVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,local_50);
    }
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

