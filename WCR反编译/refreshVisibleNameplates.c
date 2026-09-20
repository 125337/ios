// refreshVisibleNameplates @ 010e7384

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateHelper::refreshVisibleNameplates(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_260;
  undefined *local_258;
  undefined *local_220;
  undefined *local_218;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  undefined *local_150;
  undefined4 local_144;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  FUN_010e7744();
  _objc_retainAutoreleasedReturnValue();
  local_140 = param_1;
  if (param_1 == 0) {
    local_144 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar1;
    FUN_010e7c8c(local_140,puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar1;
    _memset(auStack_1a0,0,0x40);
    puVar1 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_218 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_218 != (undefined *)0x0) {
      lVar3 = *local_190;
      local_220 = (undefined *)0x0;
      do {
        do {
          if (*local_190 - lVar3 != 0) {
            _objc_enumerationMutation(*local_190 - lVar3,puVar1);
          }
          local_160 = *(undefined8 *)(local_198 + (long)local_220 * 8);
          puVar2 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_containsObject__0269cbb8,local_160);
          if (((ulong)puVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_160);
          }
          local_220 = local_220 + 1;
        } while (local_220 < local_218);
        local_218 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_220 = (undefined *)0x0;
      } while (local_218 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_1e8,0,0x40);
    puVar1 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,0x10);
    if (local_258 != (undefined *)0x0) {
      lVar3 = *local_1d8;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_1d8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar3,puVar1);
          }
          local_1a8 = *(undefined8 *)(local_1e0 + (long)local_260 * 8);
          FUN_010e802c(local_1a8);
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_150,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

