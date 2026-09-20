// FUN_0108e290 @ 0108e290

void FUN_0108e290(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined *local_78;
  bool local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  byte local_49;
  long local_48;
  long local_40;
  byte local_31;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 0;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_20,&local_31);
    if ((((ulong)puVar2 & 1) == 0) || ((local_31 & 1) == 0)) {
      local_18 = (undefined *)0x0;
      local_24 = 1;
    }
    else {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_stringByAppendingPathComponent__026cab30,&cf_metadata_json);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_20;
      local_40 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_stringByAppendingPathComponent__026cab30,&cf_emoticons);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 0;
      puVar2 = local_30;
      local_48 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsAtPath__026ca630,local_40);
      if (((((ulong)puVar2 & 1) == 0) ||
          (puVar2 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_48,&local_49),
          ((ulong)puVar2 & 1) == 0)) || ((local_49 & 1) == 0)) {
        local_18 = (undefined *)0x0;
        local_24 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0
                   ,local_40,1,0);
        _objc_retainAutoreleasedReturnValue();
        local_58 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
        local_69 = false;
        if (puVar2 == (undefined *)0x0) {
          local_88 = (undefined *)0x0;
        }
        else {
          local_88 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                     PTR_s_JSONObjectWithData_options_error_026ca480,local_58,0,0);
          _objc_retainAutoreleasedReturnValue();
          local_68 = local_88;
        }
        local_69 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_88;
        if ((local_69 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
        puVar2 = local_60;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)puVar2 & 1) == 0) {
          local_18 = (undefined *)0x0;
          local_24 = 1;
        }
        else {
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKey__0269e048,&cf_categoryName);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_78 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((((ulong)puVar2 & 1) == 0) ||
             (puVar2 = local_78,
             (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
             local_18 = local_60, puVar2 == (undefined *)0x0)) {
            local_18 = (undefined *)0x0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
          }
          local_24 = 1;
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

