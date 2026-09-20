// FUN_0028174c @ 0028174c

void FUN_0028174c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_100;
  cfstringStruct *local_e0;
  uint local_bc;
  undefined8 local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_51 = 0;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_bc = 1;
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_bc = (uint)puVar3 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_bc & 1) == 0) {
    local_69 = 0;
    local_79 = 0;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_100 = &cf_bin;
      }
      else {
        local_100 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_100;
      }
      local_e0 = local_100;
    }
    else {
      local_e0 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_finder_export__lld___);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    (*(code *)PTR__objc_release_02578630)();
    FUN_0027215c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_98 = 0;
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_98;
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_98,uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_28 = local_90;
    if (((ulong)puVar4 & 1) == 0) {
      local_28 = (undefined *)0x0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_58 = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_28 = (undefined *)0x0;
    local_58 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

