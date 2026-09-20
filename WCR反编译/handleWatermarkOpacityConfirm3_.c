// handleWatermarkOpacityConfirm3: @ 01800794

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::handleWatermarkOpacityConfirm3_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_a8;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  int local_50;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = PTR_s_handleWatermarkOpacityConfirm3__026b5ac8;
  local_38 = PTR_s_handleWatermarkOpacityCancel3__026b5ad0;
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,PTR_s_handleWatermarkOpacityCancel3__026b5ad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &::cf___;
    if ((local_58 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_a8 = &::cf___;
      }
      _objc_storeStrong(&local_60,local_a8);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_18;
    _objc_getAssociatedObject(local_18,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)pcVar1->field2_0x10)(pcVar1,local_60);
    }
    _objc_setAssociatedObject(local_18,local_30,0,1);
    _objc_setAssociatedObject(local_18,local_38,0,1);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

