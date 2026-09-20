// documentPicker:didPickDocumentsAtURLs: @ 01fc4c7c

/* Function Stack Size: 0x20 bytes */

void WCRefineWechatThemeManagerViewController::documentPicker_didPickDocumentsAtURLs_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_importMode_026ca190);
  if (IVar2 == 0) {
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    local_49 = (byte)uVar4;
    local_58 = 0;
    puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_58;
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_importThemeZipAtPath_error__026ba598,uVar4,&local_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_58,local_68);
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
    }
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (puVar3 == (undefined *)0x0) {
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    else {
      puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_69 = (byte)puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineOfficialTheme_026ce620,PTR_s_reloadLocalColorFiles__026ba0f0,0);
      if ((local_69 & 1) != 0) {
        FUN_01fba8c8();
      }
      puVar1 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___eQv_b0_)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_78 = 0;
    puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_78;
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_78,uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (puVar3 == (undefined *)0x0) {
      uVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    else {
      puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineOfficialTheme_026ce620,PTR_s_reloadLocalColorFiles__026ba0f0,0);
      if (((ulong)puVar3 & 1) != 0) {
        FUN_01fba8c8();
      }
      puVar1 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___eQ);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_78,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadThemes_026c9f60);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

