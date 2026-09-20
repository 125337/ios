// FUN_00ecde38 @ 00ecde38

void FUN_00ecde38(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_b8;
  cfstringStruct *local_50 [4];
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    local_30 = (cfstringStruct *)0x0;
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getTextFieldText_0269fb40);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getTextField_0269fb48);
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = pcVar1;
        if (pcVar1 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar2 = local_50[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_30;
            local_30 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
        }
        _objc_storeStrong(local_50,0);
      }
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_30;
        local_30 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    if (local_30 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    else {
      local_b8 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b8;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

