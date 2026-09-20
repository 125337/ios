// FUN_008d1600 @ 008d1600

void FUN_008d1600(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38 [3];
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = local_18;
  FUN_008d3bd0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  local_20 = puVar1;
  _objc_getAssociatedObject(local_18,DAT_026f4ad8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) != 0) && ((long)local_38[0] - (long)local_20 != 0)) {
    FUN_008d3e74((long)local_38[0] - (long)local_20,local_38[0]);
    _objc_setAssociatedObject(local_18,DAT_026f4ad8,0,0);
  }
  puVar1 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_3c = 1;
  }
  else {
    puVar2 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026f4ae0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    FUN_008d402c();
    puVar1 = local_48;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_removeGestureRecognizer__026ca808,local_48);
        _objc_setAssociatedObject(local_20,DAT_026f4ae0,0,1);
        _objc_setAssociatedObject(local_18,DAT_026f4ad8,0,0);
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
                   PTR_s_WCRVPHandlePlusLongPress__026a9cf8);
        puVar1 = local_48;
        local_48 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c78,local_48,PTR_s_setMinimumPressDuration__026ca9c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCancelsTouchesInView__026ca8b8,0);
        _objc_setAssociatedObject(local_20,DAT_026f4ae0,local_48,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_addGestureRecognizer__026ca4a8,local_48);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEnabled__026ca938,1);
      _objc_setAssociatedObject(local_18,DAT_026f4ad8,local_20,0);
    }
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

