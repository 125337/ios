// importDouTuSqliteUnderPath:intoPack:unresolved: @ 0109225c

/* Function Stack Size: 0x28 bytes */

long_long WCRefineLocalEmoticonStore::importDouTuSqliteUnderPath_intoPack_unresolved_
                    (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined *local_190;
  undefined *local_188;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_b0 = 0;
    local_dc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar2 & 1) != 0) {
      if ((local_e9 & 1) == 0) {
        uVar1 = local_c8;
        FUN_01092c58();
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_c8);
        }
      }
      else {
        FUN_01092608(local_c8,local_e8,0);
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    _memset(auStack_140,0,0x40);
    puVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_188 != (undefined *)0x0) {
      lVar5 = *local_130;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,puVar2);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_190 * 8);
          FUN_01092e14(local_100,local_f8);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_importDouTuRecords_intoPack_unre_026ae3f0,local_f8,local_d0,local_d8);
    local_dc = 1;
    local_b0 = IVar4;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

