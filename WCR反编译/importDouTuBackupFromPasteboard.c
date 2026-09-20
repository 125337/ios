// importDouTuBackupFromPasteboard @ 01b70328

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::importDouTuBackupFromPasteboard
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_queue_t pdVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  long local_178;
  ID local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  ID local_150;
  undefined *local_148;
  undefined4 local_13c;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_beginImportBatch_026bfa90);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_packForDouTuImport_026bfac0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = IVar1;
  _objc_storeStrong(local_b0 + (long)_pendingDouTuPackRel,IVar1);
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_c8;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_dataForPasteboardType__026bfac8,&cf_public_utf8_plain_text);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_dataForPasteboardType__026bfac8,&cf_public_plain_text);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_d8;
    local_d8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_dataForPasteboardType__026bfac8,&cf_public_text);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_d8;
    local_d8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_1a0 = (undefined *)0x0;
  }
  else {
    local_1a0 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lengthOfBytesUsingEncoding__026bfad0,4);
  }
  local_e0 = local_1a0;
  puVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  lVar5 = (long)puVar2 - (long)local_e0;
  if (puVar2 < local_e0 || lVar5 == 0) {
    _objc_storeStrong(lVar5,&local_d8,0);
  }
  else {
    _objc_storeStrong(lVar5,&local_d0,0);
  }
  local_e8 = 0;
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if ((puVar2 == (undefined *)0x0) &&
     (puVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isFileURL_026a7088);
    if (((ulong)puVar2 & 1) == 0) {
      _memset(auStack_138,0,0x40);
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_URLs_026bfad8);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1c0 != (undefined *)0x0) {
        lVar5 = *local_128;
        local_1c8 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar5 != 0) {
              _objc_enumerationMutation(*local_128 - lVar5,puVar2);
            }
            uVar6 = *(ulong *)(local_130 + (long)local_1c8 * 8);
            local_f8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isFileURL_026a7088);
            if ((uVar6 & 1) != 0) {
              _objc_storeStrong(&local_e8,local_f8);
              local_13c = 2;
              goto LAB_01b70784;
            }
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1c8 = (undefined *)0x0;
        } while (local_1c0 != (undefined *)0x0);
      }
      local_13c = 0;
LAB_01b70784:
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      _objc_storeStrong(&local_e8,local_f0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (((puVar2 == (undefined *)0x0) &&
      (puVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
      puVar2 == (undefined *)0x0)) && (local_e8 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_endImportBatchAndReload_026bfaa8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4_g_fzzvHQY6R0eVh__)
    ;
    local_13c = 1;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
               &cf_ck_WN_4_g_eQeVYN_);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar2;
    pdVar4 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_e8;
    local_198 = PTR___NSConcreteStackBlock_02578660;
    local_190 = 0xc2000000;
    local_18c = 0;
    local_188 = FUN_01b70ab0;
    local_180 = &DAT_025867d0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_c0;
    local_178 = lVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_d8;
    local_170 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_d0;
    local_168 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_148;
    local_160 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_b0;
    local_158 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = IVar1;
    _dispatch_async(pdVar4,&local_198);
    (*(code *)PTR__objc_release_02578630)(pdVar4);
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_148,0);
    local_13c = 0;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

