// handleSpecialGuestInputSave: @ 01de3588

/* Function Stack Size: 0x18 bytes */

void WCRefineSmallSignalSettingsViewController::handleSpecialGuestInputSave_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_028c69d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_18;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_applySpecialGuestWxidsFromText__026c5888,local_50);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
  pcVar2 = local_18;
  _objc_getAssociatedObject(local_18,DAT_028c69d0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  if ((pcVar2 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420),
     ((ulong)pcVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dismissWithAnimated__0269e420,1);
  }
  _objc_setAssociatedObject(local_18,DAT_028c69d0);
  _objc_setAssociatedObject(local_18,DAT_028c69d8,0,1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

