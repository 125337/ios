// pickAutoClearGroupsForChatRooms: @ 01d39718

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCRefineScheduledTaskViewController::pickAutoClearGroupsForChatRooms_
               (ID param_1,SEL param_2,bool param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  uint local_234;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined1 auStack_168 [8];
  byte local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined4 local_148;
  byte local_141;
  undefined *local_140;
  byte local_132;
  byte local_131;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_d0;
  undefined1 auStack_c8 [15];
  byte local_b9;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b9 = (byte)param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_initWeak(auStack_c8,param_1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar4;
  _memset(auStack_128,0,0x40);
  puVar4 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_homeGroupIDs_026c4608);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1c8 != (undefined *)0x0) {
    lVar9 = *local_118;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar9 != 0) {
          _objc_enumerationMutation(*local_118 - lVar9,puVar4);
        }
        local_e8 = *(undefined8 *)(local_120 + (long)local_1d0 * 8);
        puVar5 = PTR_WCRefineGroupManager_026ce2b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_130 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if ((local_b9 & 1) == 0) {
          puVar5 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_scope_0269ea90);
          uVar1 = (ulong)puVar5 & 1;
        }
        else {
          puVar5 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_scope_0269ea90);
          uVar1 = (ulong)puVar5 & 2;
        }
        local_131 = uVar1 != 0;
        local_141 = 0;
        puVar5 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_234 = 1;
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          local_141 = 1;
          local_140 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_234 = (uint)puVar6;
        }
        if ((local_141 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_132 = (byte)local_234 & 1;
        if (((local_130 == (undefined *)0x0) || ((local_131 & 1) == 0)) ||
           (((local_b9 & 1) != 0 && ((local_234 & 1) != 0)))) {
          local_148 = 3;
        }
        else {
          uVar7 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
          puVar8 = PTR_WCRefineScheduledTask_026ce850;
          local_150 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineScheduledTask_026ce850,PTR_s_displayNameForHomeGroupID__026af4d0,
                     uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_d0;
          puVar5 = PTR_WCRScheduledTaskSheetAction_026cf598;
          local_190 = PTR___NSConcreteStackBlock_02578660;
          local_188 = 0xc2000000;
          local_184 = 0;
          local_180 = FUN_01d39eb8;
          local_178 = &DAT_02589d08;
          local_158 = puVar8;
          _objc_copyWeak(auStack_168,auStack_c8);
          uVar7 = local_150;
          (*(code *)PTR__objc_retain_02578638)();
          local_170 = uVar7;
          local_160 = local_b9 & 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_actionWithTitle_handler__026b9738,puVar8,&local_190);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_170);
          _objc_destroyWeak(auStack_168);
          _objc_storeStrong(&local_158,0);
          _objc_storeStrong(&local_150,0);
          local_148 = 0;
        }
        _objc_storeStrong(&local_130,0);
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    pcVar2 = &cf_fe_JR_;
    if ((local_b9 & 1) == 0) {
      pcVar2 = &cf_feyJR_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
    local_148 = 1;
  }
  else {
    pcVar2 = &cf_N_JR_mR;
    if ((local_b9 & 1) == 0) {
      pcVar2 = &cf_NyJR_mR;
    }
    pcVar3 = &cf_wcrSTClearRoomGroup;
    if ((local_b9 & 1) == 0) {
      pcVar3 = &cf_wcrSTClearFriendGroup;
    }
    FUN_01d38174(local_b0,pcVar2,pcVar3,local_d0);
    local_148 = 0;
  }
  _objc_storeStrong(&local_d0,0);
  _objc_destroyWeak(auStack_c8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

