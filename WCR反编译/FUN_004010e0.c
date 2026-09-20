// FUN_004010e0 @ 004010e0

byte FUN_004010e0(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar1 = &cf_MMContext;
  _NSClassFromString();
  pcVar2 = &cf_WCAccountControlMgr;
  local_20 = pcVar1;
  _NSClassFromString();
  if ((local_20 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
    local_11 = 0;
  }
  else {
    pcVar1 = local_20;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isLogin_026a35b8);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_m_isLogin_026a35c0);
          if (((ulong)pcVar1 & 1) == 0) {
            local_11 = 0;
          }
          else {
            pcVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_m_isLogin_026a35c0);
            local_11 = (byte)pcVar1 & 1;
          }
        }
        else {
          pcVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isLogin_026a35b8);
          local_11 = (byte)pcVar1 & 1;
        }
      }
      local_40 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  return local_11 & 1;
}

