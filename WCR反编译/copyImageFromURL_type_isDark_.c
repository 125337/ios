// copyImageFromURL:type:isDark: @ 016dc5a0

/* Function Stack Size: 0x24 bytes */

void RepeatEnhanceViewController::copyImageFromURL_type_isDark_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_130;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_49;
  undefined4 local_48;
  byte local_41;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  if (((local_38 == 0) || (local_40 == 0)) ||
     (lVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_48 = 1;
  }
  else {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    local_49 = (byte)lVar2;
    uVar3 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_stringByAppendingPathComponent__026cab30,&cf_YVh);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    local_68 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_130 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_130 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_130;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    uVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_stringByAppendingPathComponent__026cab30,local_70);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_78 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_78,1,0);
    local_88 = &cf_Dark;
    if ((local_41 & 1) == 0) {
      local_88 = &cf_Light;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______png);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_78;
    local_90 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_stringByAppendingPathComponent__026cab30,puVar7);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = (undefined *)0x0;
    puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_98 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
               local_38,1,0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar7;
    if (puVar7 != (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_a0;
      local_a0 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_a9 = 0;
    if (local_a0 != (undefined *)0x0) {
      puVar7 = local_a0;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = puVar7;
      if (puVar7 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_writeToFile_atomically__0269f928,local_98,1);
        local_a9 = (byte)puVar7;
      }
      _objc_storeStrong(&local_b8,0);
    }
    lVar2 = local_38;
    puVar7 = local_80;
    if ((local_a9 & 1) == 0) {
      local_c0 = 0;
      puVar8 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_98);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_copyItemAtURL_toURL_error__026a22c8,lVar2,puVar8,&local_c8);
      _objc_storeStrong(&local_c0,local_c8);
      local_a9 = (byte)puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      if (((local_a9 & 1) == 0) && (local_a0 != (undefined *)0x0)) {
        puVar7 = local_a0;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        local_d0 = puVar7;
        if (puVar7 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_writeToFile_atomically__0269f928,local_98,1);
          local_a9 = (byte)puVar7;
        }
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_c0,0);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
    }
    puVar7 = PTR___dispatch_main_q_02578680;
    if ((local_a9 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_016dcd28;
      local_e0 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = IVar1;
      _dispatch_async(puVar7,&local_f8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

