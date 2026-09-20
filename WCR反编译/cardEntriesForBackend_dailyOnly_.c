// cardEntriesForBackend:dailyOnly: @ 01f1839c

/* Function Stack Size: 0x1c bytes */

ID WCRefineToDoStore::cardEntriesForBackend_dailyOnly_
             (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  uint local_19c;
  ulong local_180;
  ulong local_178;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ID local_138;
  byte local_129;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  ID local_d0;
  byte local_c1;
  long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c1 = (byte)param_4;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_entriesForBackend__026c7760,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  IVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar3 = *local_110;
    local_180 = 0;
    do {
      do {
        if (*local_110 - lVar3 != 0) {
          _objc_enumerationMutation(*local_110 - lVar3,IVar1);
        }
        uVar4 = *(ulong *)(local_118 + local_180 * 8);
        local_e0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_done_026a1598);
        local_129 = 0;
        local_19c = 0;
        if ((uVar4 & 1) != 0) {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_129 = 1;
          local_128 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_19c = (uint)puVar2;
        }
        if ((local_129 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        if ((local_19c & 1) == 0) {
          if ((local_c1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          else {
            uVar4 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_matchesDailyCard_026c82b8);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
            }
          }
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_158 = PTR___NSConcreteGlobalBlock_02578658;
  local_150 = 0xd0800000;
  local_14c = 0;
  local_148 = FUN_01f18744;
  local_140 = &DAT_0258cb80;
  local_138 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_sortUsingComparator__0269d168,&local_158);
  puVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

