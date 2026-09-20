// showRestoreDialog @ 01ca2918

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::showRestoreDialog(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *local_90;
  char *local_78;
  char *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getBackupDirectory_026c2db0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_stringByAppendingPathComponent__026cab30,&cf_com_qimiao_WCRefine_plist);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630,local_30);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showErrorAlert_message__026c2da8,&cf_b_Y1Y_,&cf_lg_b0RYNeN);
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &::cf___;
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_attributesOfItemAtPath_error__0269db08,local_30,0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      _objc_alloc_init();
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setDateFormat__0269d1c8,&::cf_M);
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringFromDate__0269d1d8,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_90 = &::cf___;
      }
      _objc_storeStrong(&local_48,local_90);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_60,0);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__hKm0RMn_eN);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "WCUIAlertView";
    local_68 = puVar1;
    _objc_getClass();
    local_70 = pcVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_fN,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_18,
               PTR_s_performFixedRestore_026c2de0);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_show_0269d280);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

