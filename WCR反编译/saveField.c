// saveField @ 018f0c34

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::saveField(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *local_98;
  cfstringStruct *local_70;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fieldAlert_026b84b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_70 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_18;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingField_026b84c0);
  if (IVar5 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCloudBackupURL__026abc10,local_28);
  }
  else if (IVar5 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCloudBackupUsername__026abc18,local_28);
  }
  else if (IVar5 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCloudBackupSecret__026abc20,local_28);
  }
  else if (IVar5 == 3) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_98 = (cfstringStruct *)PTR_WCRefineCloudBackupService_026cf140;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineCloudBackupService_026cf140,PTR_s_defaultRemotePath_026b8450);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_98;
    }
    else {
      local_98 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setCloudBackupRemotePath__026abc28,local_98);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
  }
  else if (IVar5 == 4) {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
    if ((long)local_48 < 1) {
      local_48 = (cfstringStruct *)((long)&MACH_HEADER.magic + 3);
    }
    if (9 < (long)local_48) {
      local_48 = (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setCloudBackupRetainCount__026abc30,local_48);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFieldAlert__026b84b0,0);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingField_026b84c0);
  if ((IVar5 == 0) ||
     (IVar5 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingField_026b84c0),
     IVar5 == 3)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetRemoteList_026b8458);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingField_026b84c0);
  if (((IVar5 == 0) ||
      (IVar5 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingField_026b84c0)
      , IVar5 == 3)) &&
     (puVar4 = PTR_WCRefineCloudBackupService_026cf140,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineCloudBackupService_026cf140,PTR_s_supportsVersionHistory_026aba88),
     ((ulong)puVar4 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshRemoteList_026b83a8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

