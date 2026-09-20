// presentRemoteHistoryAlert @ 018f1d94

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::presentRemoteHistoryAlert(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_e0;
  ID local_c0;
  ID local_98;
  ID local_88;
  ID local_78;
  ID local_70;
  long local_68;
  ID local_60;
  undefined4 local_54;
  ID local_50;
  ID local_48;
  char *local_40;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar1 = "WCUIAlertView";
  local_30 = param_2;
  local_28 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_38 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,0);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_remoteItems_026b8438);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_54 = 9;
    local_c0 = IVar3;
    if (8 < (long)IVar3) {
      local_c0 = 9;
    }
    local_60 = local_c0;
    local_48 = local_c0;
    local_50 = IVar3;
    for (local_68 = 0; local_68 < (long)local_48; local_68 = local_68 + 1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_remoteItems_026b8438);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = IVar4;
      if (IVar4 == 0) {
        local_78 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_remoteItems_026b8438);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_98;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_e0;
      if (IVar4 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
        (*(code *)PTR__objc_release_02578630)(local_88);
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_pickRemoteBackup_ld);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,local_70,local_28,puVar6);
      _objc_storeStrong(&local_70,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

