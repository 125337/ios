// FUN_0100c79c @ 0100c79c

void FUN_0100c79c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_2b8;
  ulong local_2b0;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined8 local_260;
  uint local_254;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  code *local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  byte local_1c9;
  long local_1c8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined *local_128;
  long local_120;
  ulong local_118;
  long local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined **local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined **local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = 0;
  local_110 = param_1;
  _objc_storeStrong(&local_118);
  local_120 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_dismissProgressToast_026adae0);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_128 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_autoParseLinkSendVideoEnabled_026adad8);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_170,0,0x40);
    uVar3 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
    if (local_2b0 != 0) {
      lVar7 = *local_160;
      local_2b8 = 0;
      do {
        do {
          if (*local_160 - lVar7 != 0) {
            _objc_enumerationMutation(*local_160 - lVar7,uVar3);
          }
          uVar8 = *(undefined8 *)(local_168 + local_2b8 * 8);
          local_130 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_displayTitle_026adae8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_128;
          local_c8 = &cf_title;
          local_c0 = &cf_handler;
          ppuVar5 = &local_1c0;
          local_1c0 = PTR___NSConcreteStackBlock_02578660;
          local_1b8 = 0xc2000000;
          local_1b4 = 0;
          local_1b0 = FUN_0100d190;
          local_1a8 = &DAT_02581fc0;
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          local_178 = uVar8;
          local_b8 = uVar8;
          (*(code *)PTR__objc_retain_02578638)();
          uVar8 = local_130;
          local_1a0 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_198 = uVar8;
          local_180 = *(undefined8 *)(param_1 + 0x40);
          uVar8 = *(undefined8 *)(param_1 + 0x30);
          (*(code *)PTR__objc_retain_02578638)();
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          local_190 = uVar8;
          (*(code *)PTR__objc_retain_02578638)();
          local_188 = uVar4;
          _objc_retainBlock();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = ppuVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(ppuVar5);
          _objc_storeStrong(&local_188);
          _objc_storeStrong(&local_190,0);
          _objc_storeStrong(&local_198,0);
          _objc_storeStrong(&local_1a0,0);
          _objc_storeStrong(&local_178,0);
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10
                  );
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
    local_1c9 = 0;
    bVar1 = false;
    if (uVar3 == 0) {
      lVar7 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      local_1c9 = 1;
      local_1c8 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar7 != 0;
    }
    if ((local_1c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c8);
    }
    puVar2 = local_128;
    if (bVar1) {
      local_e8 = &cf_title;
      local_d8 = &cf_S;
      local_e0 = &cf_handler;
      ppuVar5 = &local_210;
      local_210 = PTR___NSConcreteStackBlock_02578660;
      local_208 = 0xc2000000;
      local_204 = 0;
      local_200 = FUN_0100d29c;
      local_1f8 = &DAT_0257a710;
      local_1d8 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      local_1f0 = uVar8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      local_1e8 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e0 = uVar8;
      _objc_retainBlock();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_d0 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      _objc_storeStrong(&local_1e0);
      _objc_storeStrong(&local_1e8,0);
      _objc_storeStrong(&local_1f0,0);
    }
  }
  puVar2 = local_128;
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    local_108 = &cf_title;
    local_f8 = &cf_SbcaSGr;
    local_100 = &cf_handler;
    ppuVar5 = &local_250;
    local_250 = PTR___NSConcreteStackBlock_02578660;
    local_248 = 0xc2000000;
    local_244 = 0;
    local_240 = FUN_0100d384;
    local_238 = &DAT_0257a710;
    local_218 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    local_230 = uVar8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    local_228 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = uVar8;
    _objc_retainBlock();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_f0 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_108,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    _objc_storeStrong(&local_220);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_230,0);
  }
  puVar6 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
  puVar2 = local_128;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    local_280 = PTR___NSConcreteStackBlock_02578660;
    local_278 = 0xc2000000;
    local_274 = 0;
    local_270 = FUN_0100d46c;
    local_268 = &DAT_025814c8;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_260 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_presentNativeSheetTitle_buttons__026adaf8,&cf_bS_u_,puVar2,&cf_Sm,
               &local_280);
    _objc_storeStrong(&local_260,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_startProgressToast_026ad9d8);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_performSendParseResult_toUsr_pre_026adac0,uVar9,uVar10,uVar8,0,
               *(undefined8 *)(param_1 + 0x38));
    (*(code *)PTR__objc_release_02578630)(uVar8);
  }
  local_254 = (uint)(puVar6 == (undefined *)0x0);
  _objc_storeStrong(&local_128,0);
  if (local_254 == 0) {
    local_254 = 0;
  }
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

