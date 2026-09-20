// setProfileBgURLHistory: @ 020b110c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setProfileBgURLHistory_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  SEL SVar6;
  long lVar7;
  long lVar8;
  ulong local_160;
  ulong local_158;
  ulong local_140;
  int local_12c;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined *local_d8;
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
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  _memset(auStack_120,0,0x40);
  if (local_c0 == 0) {
    local_140 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_140 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar7 = *local_110;
    local_160 = 0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,local_140);
        }
        lVar8 = *(long *)(local_118 + local_160 * 8);
        local_e0 = lVar8;
        FUN_01fd868c();
        _objc_retainAutoreleasedReturnValue();
        local_128 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
        if ((lVar8 == 0) ||
           (puVar2 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_128),
           ((ulong)puVar2 & 1) != 0)) {
          puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
          local_12c = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_128);
          puVar4 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
          puVar5 = puVar4 + -0x1e;
          if (puVar4 < (undefined1 *)((long)&MACH_HEADER.reserved + 2)) {
            local_12c = 0;
          }
          else {
            puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            local_12c = 2;
          }
        }
        _objc_storeStrong(puVar5,&local_128,0);
        if ((local_12c != 0) && (local_12c != 3)) goto LAB_020b1424;
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                 0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
LAB_020b1424:
  (*(code *)PTR__objc_release_02578630)(local_140);
  IVar1 = local_c8;
  puVar5 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
  SVar6 = local_b8;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,puVar5);
  (*(code *)PTR__objc_release_02578630)(SVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

