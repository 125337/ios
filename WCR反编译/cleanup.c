// cleanup @ 00ee77e8

/* Function Stack Size: 0x10 bytes */

void WCRChatRoomPickerBridge::cleanup(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickerController_026ab800);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_valueForKey__0269d128,&cf_m_delegate);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    (*(code *)PTR__objc_release_02578630)();
    if (param_1 == IVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setValue_forKey__0269d300,0,&cf_m_delegate);
    }
    _objc_setAssociatedObject(local_28,DAT_0280e058,0,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPickerController__026ab878);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCompletion__0269fdc8,0);
  _objc_storeStrong(&local_28,0);
  return;
}

