// importFrameWithPNG:darkPng:cfg:name: @ 01d6c730

/* Function Stack Size: 0x30 bytes */

bool WCRefineScreenshotFrameLibraryViewController::importFrameWithPNG_darkPng_cfg_name_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_128;
  undefined1 local_119;
  undefined8 local_118;
  byte local_109;
  undefined8 local_108;
  byte local_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b1;
  long local_b0;
  long local_a8;
  byte local_99;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = (undefined *)0x0;
  _objc_storeStrong(&local_58,param_6);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_50);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar4;
  if (puVar4 != (undefined *)0x0) {
    local_70 = 0;
    local_80 = 0;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,puVar4,0,&local_80);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_70,local_80);
    local_89 = 0;
    local_99 = 0;
    bVar1 = false;
    local_78 = puVar3;
    if (local_70 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      bVar1 = false;
      local_88 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar3 != (undefined *)0x0;
      }
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (bVar1) {
      puVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_58;
      local_58 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  lVar5 = *(long *)(local_30 + (long)_framesDirectory);
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar5,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_60;
  local_a8 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_fileExistsAtPath__026ca630,lVar5);
  if (((ulong)puVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_removeItemAtPath_error__0269f910,local_a8,0);
  }
  local_b0 = 0;
  local_c0 = 0;
  puVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_a8,1,0,&local_c0);
  _objc_storeStrong(&local_b0,local_c0);
  lVar5 = local_a8;
  local_b1 = SUB81(puVar3,0);
  if ((((ulong)puVar3 & 1) == 0) || (local_b0 != 0)) {
    local_21 = 0;
    local_c4 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = lVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar5 = local_a8;
    local_d8 = 0;
    if (local_48 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf____dark_png);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_d8;
      local_d8 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    lVar5 = local_a8;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = lVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_108 = 0;
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_copyItemAtPath_toPath_error__026a1758,local_40,local_d0,&local_108);
    _objc_storeStrong(&local_e8,local_108);
    local_f9 = (byte)puVar3;
    local_109 = 1;
    if ((local_48 != 0) && (local_d8 != 0)) {
      local_118 = local_f0;
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_copyItemAtPath_toPath_error__026a1758,local_48,local_d8,&local_118);
      _objc_storeStrong(&local_f0,local_118);
      local_109 = (byte)puVar3;
    }
    local_128 = local_f8;
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_copyItemAtPath_toPath_error__026a1758,local_50,local_e0,&local_128);
    _objc_storeStrong(&local_f8,local_128);
    local_119 = SUB81(puVar3,0);
    if ((((local_f9 & 1) == 0) || ((local_109 & 1) == 0)) || (((ulong)puVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_removeItemAtPath_error__0269f910,local_a8,0);
      local_21 = 0;
    }
    else {
      local_21 = 1;
    }
    local_c4 = 1;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

