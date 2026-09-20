// protectionSecondsFromInput: @ 016f20fc

/* Function Stack Size: 0x18 bytes */

long_long SpecificPageLockViewController::protectionSecondsFromInput_
                    (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_60 = &::cf___;
  }
  else {
    local_60 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  if ((long)pcVar2 < 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    local_18 = pcVar2;
    if (600 < (long)pcVar2) {
      local_18 = (cfstringStruct *)0x258;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

