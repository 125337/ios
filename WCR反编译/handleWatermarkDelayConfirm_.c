// handleWatermarkDelayConfirm: @ 017fdc20

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::handleWatermarkDelayConfirm_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_98;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  int local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,PTR_s_handleWatermarkDelayCancel__026b5a78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &::cf___;
    if ((local_48 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_98 = &::cf___;
      }
      _objc_storeStrong(&local_50,local_98);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_18;
    _objc_getAssociatedObject(local_18,PTR_s_handleWatermarkDelayConfirm__026b5a70);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)pcVar1->field2_0x10)(pcVar1,local_50);
    }
    _objc_setAssociatedObject(local_18,PTR_s_handleWatermarkDelayConfirm__026b5a70,0,1);
    _objc_setAssociatedObject(local_18,PTR_s_handleWatermarkDelayCancel__026b5a78,0,1);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (local_40 == 0) {
    local_40 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

