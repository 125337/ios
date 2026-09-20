// setAutoAcceptFriendKeywords: @ 01fd9bb4

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAutoAcceptFriendKeywords_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  SEL SVar2;
  ID IVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong local_150;
  ulong local_148;
  int local_124;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined1 *local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_c8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar4;
  _memset(auStack_118,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar7 = *local_108;
    local_150 = 0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,uVar1);
        }
        lVar8 = *(long *)(local_110 + local_150 * 8);
        local_d8 = lVar8;
        FUN_01fd868c();
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
        if (lVar8 == 0) {
          puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
          local_124 = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
          puVar5 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
          puVar6 = puVar5 + -100;
          if (puVar5 < &segment_command_00000020.flags) {
            local_124 = 0;
          }
          else {
            puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            local_124 = 2;
          }
        }
        _objc_storeStrong(puVar6,&local_120,0);
        if ((local_124 != 0) && (local_124 != 3)) goto LAB_01fd9e34;
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
LAB_01fd9e34:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  SVar2 = local_b8;
  IVar3 = local_c8;
  if (puVar6 == (undefined1 *)0x0) {
    FUN_01fd95c0(0,local_c8,local_b8,0);
  }
  else {
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    FUN_01fd95c0(IVar3,SVar2);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

