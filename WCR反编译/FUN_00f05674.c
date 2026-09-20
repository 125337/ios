// FUN_00f05674 @ 00f05674

void FUN_00f05674(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_a0;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_3c;
  undefined8 local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_38 = 0;
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_createWCRefineConfigBackupZipAtT_026abb60,&local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,local_38);
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    DAT_028e2b18 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a0 = &cf_SbSMn_1Y_;
    }
    else {
      local_a0 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_finish_success_message__026abb10,uVar4,0,local_a0);
    local_3c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    puVar1 = local_48;
    if (puVar3 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_00f05964;
      local_58 = &DAT_02582318;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_uploadData_completion__026abb68,puVar1,&local_70);
      _objc_storeStrong(&local_50,0);
    }
    else {
      DAT_028e2b18 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
                 *(undefined8 *)(param_1 + 0x20),0,&cf_SYNS1Y_);
    }
    local_3c = (uint)(puVar3 == (undefined *)0x0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

