// FUN_0003c2b0 @ 0003c2b0

void FUN_0003c2b0(void)

{
  undefined *puVar1;
  bool bVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_30;
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar3 = "MMContext";
  _objc_getClass();
  local_28 = PTR_s_currentUserName_0269d6f8;
  local_20 = (cfstringStruct *)pcVar3;
  if (((cfstringStruct *)pcVar3 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_currentUserName_0269d6f8),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar4 = local_30;
    bVar2 = pcVar5 != (cfstringStruct *)0x0;
    if (bVar2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
    }
    _objc_storeStrong(bVar2,&local_30,0);
    if (bVar2) goto LAB_0003c5cc;
  }
  pcVar3 = "SettingUtil";
  _objc_getClass();
  puVar1 = PTR_s_getLocalUsrName__0269ce98;
  if (((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) ||
     (pcVar4 = (cfstringStruct *)pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98),
     ((ulong)pcVar4 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = (cfstringStruct *)pcVar3;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
LAB_0003c5cc:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

