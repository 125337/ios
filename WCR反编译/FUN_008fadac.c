// FUN_008fadac @ 008fadac

void FUN_008fadac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_58;
  cfstringStruct *local_50;
  char *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_18 = (char *)0x0;
    local_40 = 1;
  }
  else {
    pcVar2 = "CMessageWrap";
    _objc_getClass();
    pcVar3 = &cf_genFileAppMsgWithFileName_filePath_fileData_;
    local_48 = pcVar2;
    _NSSelectorFromString();
    local_50 = pcVar3;
    if ((local_48 == (char *)0x0) ||
       (pcVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar3),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (char *)0x0;
      local_40 = 1;
    }
    else {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_28,local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = 1;
      local_18 = pcVar2;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

