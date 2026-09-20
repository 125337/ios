// prepareLocalColorOverrideFile: @ 010ee2c0

/* Function Stack Size: 0x18 bytes */

bool WCRefineOfficialTheme::prepareLocalColorOverrideFile_(ID param_1,SEL param_2,ID *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  ID *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_38,1,0,local_30);
    if (((ulong)puVar2 & 1) == 0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,&cf_weui_color_override_xml
                );
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_48;
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fileExistsAtPath__026ca630,puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = &cf_<;
        bVar1 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_<,PTR_s_writeToFile_atomically_encoding__026a33a8,local_50,1,4,local_30);
        local_11 = bVar1 & 1;
        local_3c = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_11 = 1;
        local_3c = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

