// FUN_016ab488 @ 016ab488

byte FUN_016ab488(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    pcVar1 = &cf_IsRecordMsg;
    _NSSelectorFromString();
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1),
       ((ulong)pcVar2 & 1) == 0)) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
      if ((int)pcVar1 == 0x31) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_80 = &cf___;
        }
        FUN_016ad17c();
        local_11 = local_80 == (cfstringStruct *)0x13;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

