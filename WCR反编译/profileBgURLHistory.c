// profileBgURLHistory @ 020b0c98

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::profileBgURLHistory(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong local_188;
  ulong local_180;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  int local_d4;
  ID local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_c0;
  local_c8 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar3 & 1) == 0) {
    puVar4 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_b0 = puVar4;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar5;
    _memset(auStack_130,0,0x40);
    IVar3 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar7 = *local_120;
      local_188 = 0;
      do {
        do {
          if (*local_120 - lVar7 != 0) {
            _objc_enumerationMutation(*local_120 - lVar7,IVar3);
          }
          lVar8 = *(long *)(local_128 + local_188 * 8);
          local_f0 = lVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_138 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          if ((lVar8 == 0) ||
             (puVar2 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e8,PTR_s_containsObject__0269cbb8,local_138), ((ulong)puVar2 & 1) != 0
             )) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            local_d4 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_138);
            puVar6 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
            puVar4 = puVar6 + -0x1e;
            if (puVar6 < (undefined1 *)((long)&MACH_HEADER.reserved + 2)) {
              local_d4 = 0;
            }
            else {
              puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
              local_d4 = 2;
            }
          }
          _objc_storeStrong(puVar4,&local_138,0);
          if ((local_d4 != 0) && (local_d4 != 3)) goto LAB_020b1044;
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    local_d4 = 0;
LAB_020b1044:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_d4 = 1;
    local_b0 = puVar4;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

