// runManualClear @ 01d3c290

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::runManualClear(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_218;
  undefined *local_200;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [8];
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_stringArrayInTask_forKey__026a6cf0,param_1,_kWCRScheduledTaskKeyTargets);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_resolvedTargetsForSending__026a6cf8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQmRntO);
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    _memset(auStack_128,0,0x40);
    puVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1d0 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_1d8 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar1);
          }
          local_e8 = *(undefined **)(local_120 + (long)local_1d8 * 8);
          puVar2 = PTR_WCRefineScheduledTask_026ce850;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineScheduledTask_026ce850,PTR_s_displayNameForTarget__026c44f0,
                     local_e8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_WCRefineScheduledTask_026ce850;
          local_130 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineScheduledTask_026ce850,PTR_s_isChatRoomUsername__026af4a0,local_e8)
          ;
          if (((ulong)puVar3 & 1) == 0) {
            local_200 = local_e0;
          }
          else {
            local_200 = local_d8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = local_200;
          puVar2 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if (puVar2 == (undefined *)0x0) {
            local_218 = local_e8;
          }
          else {
            local_218 = local_130;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,local_218);
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_130,0);
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 < local_1d0);
        local_1d0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1d8 = (undefined *)0x0;
      } while (local_1d0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_d8;
    local_140 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    puVar2 = local_140;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
      puVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_componentsJoinedByString__0269d140,&::cf_0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__J_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    puVar2 = local_140;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      puVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_componentsJoinedByString__0269d140,&::cf_0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_yJ_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_initWeak(auStack_148,local_b0);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar3 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_c8;
    local_188 = PTR___NSConcreteStackBlock_02578660;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_01d3ca60;
    local_170 = &DAT_02579c60;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar2;
    _objc_copyWeak(auStack_160,auStack_148);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf_nxKbRntJ_YU_,puVar3,
               &cf_NndJ_YU_v_OYuOeQSdkd_ONSb_Y0,&cf_nxnt,&cf_Sm,&local_188);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_160);
    _objc_storeStrong(&local_168);
    _objc_destroyWeak(auStack_148);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

