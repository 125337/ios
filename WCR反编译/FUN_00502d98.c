// FUN_00502d98 @ 00502d98

void FUN_00502d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  ulong local_308;
  ulong local_300;
  undefined *local_2d8;
  cfstringStruct *local_270;
  undefined *local_228;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  bool local_151;
  undefined *local_150;
  undefined *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  byte local_f4;
  byte local_f3;
  byte local_f2;
  byte local_f1;
  undefined1 *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  puVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_b8;
  local_d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_sender)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_b8;
  local_d8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_svrID);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_b8;
  local_e0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
  local_e8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_integerInRule_forKey__026a44f0,local_b0,
             _kWCRMessageSyncRuleKeySendMode);
  puVar5 = PTR_WCRefineMessageSyncRule_026ce708;
  local_f0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_isPlainTextTypeKey__026a4558,local_c8);
  local_f1 = (byte)puVar5;
  local_f2 = local_f0 != (undefined1 *)((long)&MACH_HEADER.magic + 3);
  puVar6 = local_f0;
  FUN_00502cd0(local_f0,local_c8);
  uVar2 = local_c8;
  local_100 = PTR_WCRefineMessageSyncRule_026ce708;
  local_f3 = (byte)puVar6;
  local_f4 = 0;
  if (local_f0 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    local_f4 = local_f1;
  }
  local_f4 = local_f4 & 1;
  puVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_displayContentForTypeKey_rawCont_026a44b8,uVar2,puVar4,local_d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  local_111 = 0;
  local_121 = 0;
  if (puVar4 == (undefined *)0x0) {
    local_228 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_228;
    FUN_00500168();
    _objc_retainAutoreleasedReturnValue();
    local_120 = local_228;
  }
  else {
    local_228 = local_100;
  }
  local_121 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_228;
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = &cf___;
  if ((local_f2 & 1) != 0) {
    puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_matchedKeywordsForRule_matchText_026a4550,
               local_b0,local_108);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = local_b0;
    local_138 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,_kWCRMessageSyncRuleKeyName);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar7;
    FUN_004fe524();
    _objc_retainAutoreleasedReturnValue();
    local_140 = pcVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    pcVar7 = (cfstringStruct *)PTR_WCRefineMessageSyncRule_026ce708;
    pcVar8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,_kWCRMessageSyncRuleKeyFormat);
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    if (pcVar9 == (cfstringStruct *)0x0) {
      local_270 = &cf_W;
    }
    else {
      local_270 = local_140;
    }
    puVar10 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_displayNameForUser_inRoom__0269ecd0,
               local_d8,local_d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_d0;
    puVar4 = local_d8;
    puVar11 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_nickNameForSession__026a4560,local_d0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_remarkForSession__026a4568,local_d0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0050218c((double)(long)puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_titleForTypeKey__026a41e8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_renderFormat_ruleName_senderDisp_026a4570,pcVar8,local_270,puVar10,
               puVar4,puVar5,puVar11,puVar12,puVar14,puVar15,local_100,local_138);
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = local_130;
    local_130 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
  }
  local_151 = false;
  bVar1 = (local_f3 & 1) == 0;
  if (bVar1) {
    local_2d8 = (undefined *)0x0;
  }
  else {
    local_2d8 = local_d0;
    FUN_00503820(local_d0,local_e0,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_150 = local_2d8;
  }
  local_151 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_2d8;
  if ((local_151 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  _memset(auStack_1a0,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_300 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_300 != 0) {
    lVar16 = *local_190;
    local_308 = 0;
    do {
      do {
        if (*local_190 - lVar16 != 0) {
          _objc_enumerationMutation(*local_190 - lVar16,uVar3);
        }
        local_160 = *(undefined8 *)(local_198 + local_308 * 8);
        FUN_0050236c(local_160);
        if (((local_f3 & 1) != 0) && (local_148 != (undefined *)0x0)) {
          FUN_00504390(local_148,local_160);
        }
        if (((local_f2 & 1) != 0) &&
           (pcVar7 = local_130,
           (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
           pcVar7 != (cfstringStruct *)0x0)) {
          FUN_005027d4(pcVar7,local_130,local_160);
        }
        if (((local_f4 & 1) != 0) &&
           (puVar4 = local_108,
           (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
           puVar4 != (undefined *)0x0)) {
          FUN_005027d4(puVar4,local_108,local_160);
        }
        local_308 = local_308 + 1;
      } while (local_308 < local_300);
      local_300 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_308 = 0;
    } while (local_300 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

