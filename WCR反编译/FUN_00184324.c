// FUN_00184324 @ 00184324

void FUN_00184324(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = "WCRefineHelper";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showModernToast__0269ce78);
    if (((ulong)pcVar2 & 1) != 0) {
      if (local_18 == (cfstringStruct *)0x0) {
        local_60 = &cf___;
      }
      else {
        local_60 = local_18;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showModernToast__0269ce78,local_60);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

