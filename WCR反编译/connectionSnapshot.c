// connectionSnapshot @ 00f086dc

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::connectionSnapshot(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *pcVar12;
  cfstringStruct *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  cfstringStruct *local_140;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  SEL local_f0;
  ID local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_f0 = param_2;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d8 = &cf_enabled;
  local_f8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_cloudBackupEnabled_026aba50);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithBool__0269ce60,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d0 = &cf_syncOnLocal;
  pcVar1 = local_f8;
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupSyncOnLocalBackup_026aba60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = &cf_provider;
  pcVar1 = local_f8;
  local_78 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupProvider_026aba20);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_190 = &::cf___;
  }
  else {
    local_190 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupProvider_026aba20);
    _objc_retainAutoreleasedReturnValue();
    local_100 = local_190;
  }
  local_70 = local_190;
  local_c0 = &cf_url;
  pcVar5 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupURL_026aba40);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_1a0 = &::cf___;
  }
  else {
    local_1a0 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupURL_026aba40);
    _objc_retainAutoreleasedReturnValue();
    local_110 = local_1a0;
  }
  local_68 = local_1a0;
  local_b8 = &cf_username;
  pcVar7 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupUsername_026abad8);
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar8 == (cfstringStruct *)0x0) {
    local_1b0 = &::cf___;
  }
  else {
    local_1b0 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupUsername_026abad8);
    _objc_retainAutoreleasedReturnValue();
    local_120 = local_1b0;
  }
  local_60 = local_1b0;
  local_b0 = &cf_secret;
  pcVar9 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupSecret_026aba98);
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = pcVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_1c0 = &::cf___;
  }
  else {
    local_1c0 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupSecret_026aba98);
    _objc_retainAutoreleasedReturnValue();
    local_130 = local_1c0;
  }
  local_58 = local_1c0;
  local_a8 = &cf_remotePath;
  pcVar11 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupRemotePath_026aba38);
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = pcVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar12 == (cfstringStruct *)0x0) {
    local_1d0 = &::cf___;
  }
  else {
    local_1d0 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupRemotePath_026aba38);
    _objc_retainAutoreleasedReturnValue();
    local_140 = local_1d0;
  }
  puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_50 = local_1d0;
  local_a0 = &cf_retain;
  pcVar13 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupRetainCount_026aba70);
  (*(code *)PTR__objc_msgSend_02578628)(puVar14,PTR_s_numberWithInteger__0269e080,pcVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_98 = &cf_autoUpload;
  pcVar13 = local_f8;
  local_48 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupAutoUploadEnabled_026abbe8);
  (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_numberWithBool__0269ce60,pcVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_90 = &cf_interval;
  pcVar13 = local_f8;
  local_40 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupAutoUploadIntervalHou_026aba78);
  (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_numberWithInteger__0269e080,pcVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_88 = &cf_lastUnix;
  pcVar13 = local_f8;
  local_38 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_cloudBackupLastUploadUnix_026abbf0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar17,PTR_s_numberWithInteger__0269e080,pcVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar17;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_80,&local_d8,0xb);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar18;
  (*(code *)PTR__objc_release_02578630)(puVar17);
  (*(code *)PTR__objc_release_02578630)(puVar16);
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  if (pcVar12 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar11);
  if (pcVar10 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  if (pcVar8 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  if (pcVar6 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  if (pcVar4 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_e0;
}

