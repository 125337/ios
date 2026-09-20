// pickSenderUsers @ 01bbc820

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::pickSenderUsers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  undefined *local_130 [3];
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined **local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = IVar4;
  if (IVar4 == 0) {
    local_c4 = 1;
  }
  else {
    puVar5 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,IVar4,
               _kWCRMessageSyncRuleKeySourceGroups);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
    if (puVar5 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbegn_J);
      local_c4 = 1;
    }
    else {
      puVar5 = PTR_WCRefineMessageSyncRule_026ce708;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,
                 local_c0,_kWCRMessageSyncRuleKeySenderUsers);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar5;
      _objc_initWeak(auStack_e0,local_b0);
      ppuVar6 = &local_118;
      local_118 = PTR___NSConcreteStackBlock_02578660;
      local_110 = 0xc2000000;
      local_10c = 0;
      local_108 = FUN_01bbce8c;
      local_100 = &DAT_0257c948;
      _objc_copyWeak(auStack_f0,auStack_e0);
      puVar5 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = puVar5;
      _objc_retainBlock();
      puVar7 = local_d0;
      local_e8 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      ppuVar6 = local_e8;
      if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar7 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar6[2])();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        local_c4 = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_130[0] = puVar5;
        _memset(auStack_178,0,0x40);
        puVar7 = local_d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_220 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                   0x10);
        if (local_220 != (undefined1 *)0x0) {
          lVar8 = *local_168;
          local_228 = (undefined1 *)0x0;
          do {
            do {
              if (*local_168 - lVar8 != 0) {
                _objc_enumerationMutation(*local_168 - lVar8,puVar7);
              }
              local_138 = *(undefined8 *)(local_170 + (long)local_228 * 8);
              puVar5 = PTR_WCRefineMessageSyncRule_026ce708;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_displayNameForSession__026a4518,
                         local_138);
              _objc_retainAutoreleasedReturnValue();
              local_180 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
              if (puVar5 == (undefined *)0x0) {
                _objc_storeStrong(&local_180,local_138);
              }
              ppuVar6 = local_e8;
              puVar3 = local_130[0];
              puVar1 = local_180;
              puVar5 = PTR_WCRMessageSyncSheetAction_026cf408;
              local_1b0 = PTR___NSConcreteStackBlock_02578660;
              local_1a8 = 0xc2000000;
              local_1a4 = 0;
              local_1a0 = FUN_01bbe400;
              local_198 = &DAT_0257ca68;
              (*(code *)PTR__objc_retain_02578638)();
              uVar2 = local_138;
              local_188 = ppuVar6;
              (*(code *)PTR__objc_retain_02578638)();
              local_190 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_actionWithTitle_handler__026b9738,puVar1,&local_1b0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              _objc_storeStrong(&local_190);
              _objc_storeStrong(&local_188,0);
              _objc_storeStrong(&local_180,0);
              local_228 = local_228 + 1;
            } while (local_228 < local_220);
            local_220 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8
                       ,0x10);
            local_228 = (undefined1 *)0x0;
          } while (local_220 != (undefined1 *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar7);
        FUN_01bbc318(local_b0,&cf_NT_N_b_S,&cf_wcrMessageSyncPickRoom,local_130[0]);
        _objc_storeStrong(local_130,0);
        local_c4 = 0;
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_f8,0);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_e0);
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

