// FUN_006919bc @ 006919bc

void FUN_006919bc(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_18;
  
  pcVar1 = "SettingUtil";
  _objc_getClass();
  if (((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar2 = (cfstringStruct *)pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = (cfstringStruct *)pcVar1;
    FUN_0067d980();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

