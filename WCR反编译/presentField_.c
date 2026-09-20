// presentField: @ 018f058c

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupSettingsViewController::presentField_
               (ID param_1,SEL param_2,long_long param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  char *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  char *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingField__026b8498,local_28);
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineCloudBackupService_026cf140;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineCloudBackupService_026cf140,PTR_s_normalizedProvider_026aba30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf_gRhV0W_W;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf_h;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cloudBackupURL_026aba40);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_60 = 300;
    if (local_28 == 1) {
      _objc_storeStrong(0,&local_48,&cf__u7bT);
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,_WCRefineCloudBackupProviderOpenList);
      pcVar2 = &cf_O;
      if (((ulong)puVar3 & 1) == 0) {
        pcVar2 = &::cf_W;
      }
      _objc_storeStrong(&local_50,pcVar2);
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cloudBackupUsername_026abad8);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_a0 = &::cf___;
      }
      _objc_storeStrong(&local_58,local_a0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_60 = 0x78;
    }
    else if (local_28 == 2) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,_WCRefineCloudBackupProviderHTTP);
      pcVar2 = &cf_Token;
      if (((ulong)puVar3 & 1) == 0) {
        pcVar2 = &cf__x;
      }
      _objc_storeStrong(&local_48,pcVar2);
      _objc_storeStrong(&local_50,&cf_NO_WLubfeU__y0Svc_40);
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cloudBackupSecret_026aba98);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      _objc_storeStrong(&local_58,local_b0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_60 = 400;
    }
    else if (local_28 == 3) {
      _objc_storeStrong(0,&local_48,&cf_z_);
      _objc_storeStrong(&local_50,&cf_OY);
      pcVar4 = (cfstringStruct *)PTR_WCRefineCloudBackupService_026cf140;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineCloudBackupService_026cf140,PTR_s_normalizedRemotePath_026abb08);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_60 = 200;
    }
    else if (local_28 == 4) {
      _objc_storeStrong(0,&local_48,&cf_OYuNpe);
      _objc_storeStrong(&local_50,&cf_1);
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineCloudBackupService_026cf140,PTR_s_retainCount_026aba90);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf__ld);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_58;
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      local_60 = 2;
    }
    else {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,_WCRefineCloudBackupProviderHTTP);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,_WCRefineCloudBackupProviderOpenList);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_storeStrong(&local_48,&cf_zp0W_W);
          _objc_storeStrong(&local_50,&cf_OY);
        }
      }
      else {
        _objc_storeStrong(&local_48,&cf_eN0W_W);
        _objc_storeStrong(&local_50,&cf__teeN);
      }
    }
    pcVar1 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextFieldDefaultText__0269fd98,local_58)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelField_026b84a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_saveField_026b84a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFieldAlert__026b84b0,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

