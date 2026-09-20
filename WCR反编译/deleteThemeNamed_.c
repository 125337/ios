// deleteThemeNamed: @ 01fc3ba0

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::deleteThemeNamed_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_e0;
  cfstringStruct *local_90;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if (local_38 == (cfstringStruct *)0x0) {
    local_90 = &::cf___;
  }
  else {
    local_90 = local_38;
  }
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_stringByAppendingPathComponent__026cab30,local_90);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_48 = 0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_48;
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_48,local_50);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar2 & 1) == 0) {
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_54 = 1;
  }
  else {
    puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_68 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_68;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsObject__0269cbb8,local_38);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObject__0269d678,local_38);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar3 & 1) != 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar3 & 1) != 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineOfficialTheme_026ce620,PTR_s_reloadLocalColorFiles__026ba0f0,0);
      if (((ulong)puVar2 & 1) != 0) {
        FUN_01fba8c8();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rdv_Rbc0R_e_N);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadThemes_026c9f60);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

