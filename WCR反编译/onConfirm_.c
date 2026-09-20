// onConfirm: @ 01f83b30

/* Function Stack Size: 0x18 bytes */

void WCRVPPickTextAlertProxy::onConfirm_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_90;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &::cf___;
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alert_0269fb38);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if ((local_38 != (cfstringStruct *)0x0) &&
     (pcVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_90 = &::cf___;
    }
    _objc_storeStrong(&local_30,local_90);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_38,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_confirm_0269fb50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_confirm_0269fb50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)pcVar1->field2_0x10)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelfRef__0269fb58);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

