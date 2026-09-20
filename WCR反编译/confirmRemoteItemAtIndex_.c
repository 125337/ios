// confirmRemoteItemAtIndex: @ 018f23f8

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupSettingsViewController::confirmRemoteItemAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  ID local_a8;
  char *local_68;
  uint local_5c;
  char *local_58;
  byte local_49;
  ID local_48;
  ID local_40;
  byte local_31;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_31 = 0;
  bVar1 = true;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if (-1 < (long)param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_remoteItems_026b8438);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)param_1 <= (long)param_3;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_remoteItems_026b8438);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_path)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingRemotePath__026b8510);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    local_a8 = IVar2;
    if (IVar2 == 0) {
      local_a8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_a8;
    }
    local_49 = IVar2 == 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingRemoteTitle__026b8518,local_a8);
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    bVar1 = pcVar4 != (char *)0x0;
    local_58 = pcVar4;
    if (bVar1) {
      _objc_alloc();
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRemoteTitle_026b8520);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_initWithTitle_message__0269d260,IVar2,&cf_b_YOv_g_gS_MRMn_);
      local_68 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_18,
                 PTR_s_restorePendingRemote_026b8528);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_18,
                 PTR_s_deletePendingRemote_026b8530);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
      _objc_storeStrong(&local_68,0);
    }
    local_5c = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  return;
}

