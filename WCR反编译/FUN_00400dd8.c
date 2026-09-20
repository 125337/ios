// FUN_00400dd8 @ 00400dd8

void FUN_00400dd8(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_MMContext;
  _NSClassFromString();
  pcVar2 = &cf_WCAccountLoginDataReportMgr;
  local_18 = pcVar1;
  _NSClassFromString();
  if ((local_18 != (cfstringStruct *)0x0) && (pcVar2 != (cfstringStruct *)0x0)) {
    pcVar1 = local_18;
    local_20 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_38 = 1;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      if ((pcVar1 != (cfstringStruct *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_updateLoginSessionId__026a35a0)
         , ((ulong)pcVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_updateLoginSessionId__026a35a0,1);
      }
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

