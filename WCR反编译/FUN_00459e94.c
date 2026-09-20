// FUN_00459e94 @ 00459e94

void FUN_00459e94(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_2);
  puVar1 = local_18;
  FUN_0045c0b8(local_18,PTR_s_expressionButton_0269f470,"_expressionButton");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_30 = 1;
  }
  else {
    puVar2 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026e03a0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    FUN_0045c290();
    puVar1 = local_38;
    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) == 0) || (((ulong)puVar1 & 1) == 0)) {
      if ((((ulong)puVar2 & 1) == 0) && (((ulong)puVar1 & 1) == 0)) {
        local_30 = 1;
      }
      else {
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_removeGestureRecognizer__026ca808,local_38);
          _objc_setAssociatedObject(local_20,DAT_026e03a0,0,1);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
                     PTR_s_WCRLEHandleExpressionLongPress__026a3c18);
          puVar1 = local_38;
          local_38 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_023241b0,local_38,PTR_s_setMinimumPressDuration__026ca9c8);
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCancelsTouchesInView__026ca8b8,1);
          _objc_setAssociatedObject(local_20,DAT_026e03a0,local_38,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_addGestureRecognizer__026ca4a8,local_38);
        }
        local_30 = 0;
      }
    }
    else {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEnabled_026a0ef0);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEnabled__026ca938,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_minimumPressDuration_026a3e40);
      if (param_1 != 0.25) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_023241b0,local_38,PTR_s_setMinimumPressDuration__026ca9c8);
      }
      local_30 = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

