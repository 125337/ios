// writeToDoImageData:extension:variant:error: @ 01ecff18

/* Function Stack Size: 0x30 bytes */

ID WCRefineToDoListSettingsViewController::writeToDoImageData_extension_variant_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID *param_6)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_c8;
  ID local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ID local_70;
  ID local_68;
  undefined4 local_5c;
  ID *local_58;
  ulong local_50;
  cfstringStruct *local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  uVar1 = local_40;
  local_58 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_28 = 0;
    local_5c = 1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCurrentBackgroundFolderPath_026c7ca0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_68 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_48 == (cfstringStruct *)0x0) {
      local_c8 = &::cf___;
    }
    else {
      local_c8 = local_48;
    }
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_normalizedToDoBackgroundMediaExt_026c7c80,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      _objc_storeStrong(&local_70,&cf_png);
    }
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8);
    pcVar4 = &cf_dark;
    if ((uVar1 & 1) == 0) {
      pcVar4 = &cf_light;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isEqualToString__0269ccc8,&cf_dark);
    local_80 = &cf__dark;
    if (((ulong)pcVar4 & 1) == 0) {
      local_80 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_vQ_);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_stringByAppendingPathComponent__026cab30,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_90 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_deleteOldToDoBackgroundMediaInFo_026c7cb0,local_68,local_78,local_88);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_writeToFile_options_error__026a0a68,local_90,1,local_58);
    local_28 = local_90;
    if ((uVar1 & 1) == 0) {
      local_28 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_5c = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

