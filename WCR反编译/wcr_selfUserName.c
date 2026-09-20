// wcr_selfUserName @ 00ee0638

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomMuteHelper::wcr_selfUserName(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *local_38;
  char *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "SettingUtil";
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getLocalUsrName__0269ce98,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_20;
      local_38 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
      _objc_storeStrong(&local_38,0);
      goto LAB_00ee0720;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &::cf___;
LAB_00ee0720:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

