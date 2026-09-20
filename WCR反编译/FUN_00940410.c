// FUN_00940410 @ 00940410

byte FUN_00940410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long local_a8;
  cfstringStruct *local_78;
  byte local_69;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  local_39 = 0;
  bVar1 = true;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (((ulong)puVar3 & 1) != 0) {
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      bVar1 = lVar2 == 0;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar1) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_20);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_CMessageWrap;
    local_48 = puVar3;
    _NSClassFromString();
    pcVar5 = &cf_genFileAppMsgWithFileName_filePath_fileData_;
    local_50 = pcVar4;
    _NSSelectorFromString();
    puVar3 = local_48;
    local_58 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (((puVar3 == (undefined *)0x0) || (local_50 == (cfstringStruct *)0x0)) ||
       (pcVar4 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_58),
       ((ulong)pcVar4 & 1) == 0)) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      local_69 = 0;
      if (lVar2 == 0) {
        local_a8 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_a8;
      }
      else {
        local_a8 = local_28;
      }
      local_69 = lVar2 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_a8;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,local_60,local_20,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar4;
      FUN_00940cd0(pcVar4,local_30);
      local_11 = (byte)pcVar4 & 1;
      local_40 = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

