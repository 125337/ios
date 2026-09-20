// duplicateActionTheme @ 01fc24e8

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::duplicateActionTheme(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionThemeName_026ca130);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if ((undefined *)param_1 == (undefined *)0x0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 2;
    local_48 = puVar2;
    while( true ) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((ulong)puVar3 & 1) == 0) break;
      local_50 = local_50 + 1;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    local_58 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_58;
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_copyItemAtPath_toPath_error__026a1758,puVar1,puVar3,&local_60);
    _objc_storeStrong(&local_58,local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar4 & 1) == 0) {
      uVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else {
      puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadThemes_026c9f60);
      puVar1 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Y6R_N0_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

