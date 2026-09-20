// fileNameWithBase:isDark: @ 01108a5c

/* Function Stack Size: 0x1c bytes */

ID WCRefinePluginIconCatalog::fileNameWithBase_isDark_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_d8;
  undefined *local_90;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  byte local_31;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  puVar2 = local_30;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (puVar3 == (undefined *)0x0) {
    local_90 = local_40;
  }
  else {
    local_90 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if (puVar3 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_48;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_substringToIndex__0269d6c0,puVar3 + -6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_substringToIndex__0269d6c0,puVar3 + -5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_48;
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  bVar1 = (local_31 & 1) == 0;
  local_d8 = local_48;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stringByAppendingString__0269d398,&cf__png)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_d8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_stringByAppendingString__0269d398,&cf__dark_png);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_d8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

