// FUN_00f23bf0 @ 00f23bf0

void FUN_00f23bf0(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "SettingUtil";
  _objc_getClass();
  local_20 = (cfstringStruct *)pcVar1;
  if (((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

