// _WCRefineProfileBgHTMLLayoutFromCompanionJSONAtPath @ 01cf0038

void _WCRefineProfileBgHTMLLayoutFromCompanionJSONAtPath(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *local_78;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  undefined *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  undefined *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = 0;
    pcVar1 = local_20;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_78;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_json);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (puVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsAtPath__026ca630,local_20),
       ((ulong)puVar2 & 1) == 0)) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_stringByDeletingPathExtension_0269fd18);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsAtPath__026ca630,local_48);
      if (((ulong)puVar2 & 1) != 0) {
        _objc_storeStrong(&local_38,local_48);
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      _objc_storeStrong(&local_38,local_20);
    }
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
      (*(code *)PTR__objc_retain_02578638)();
      local_24 = 1;
      local_18 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
        (*(code *)PTR__objc_retain_02578638)();
        local_24 = 1;
        local_18 = puVar2;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_JSONObjectWithData_options_error_026ca480,local_50,0,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_58 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = puVar2;
        }
        else {
          puVar2 = local_58;
          FUN_01cf0474();
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar2;
        }
        local_24 = 1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

