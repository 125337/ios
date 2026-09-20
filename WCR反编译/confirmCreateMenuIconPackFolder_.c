// confirmCreateMenuIconPackFolder: @ 01e268dc

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::confirmCreateMenuIconPackFolder_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_a0;
  cfstringStruct *local_50 [3];
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
  _objc_getAssociatedObject(local_18,PTR_s_createMenuIconPackFolder_026c61e8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  _objc_setAssociatedObject(local_18,PTR_s_createMenuIconPackFolder_026c61e8,0,1);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &::cf___;
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_a0 = &::cf___;
      }
      _objc_storeStrong(&local_38,local_a0);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(local_50,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_applyCreateMenuIconPackFolder__026c61f8,local_38);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

