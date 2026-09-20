// FUN_00f88b54 @ 00f88b54

void FUN_00f88b54(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_240;
  undefined *local_238;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  uVar1 = local_130;
  _objc_getAssociatedObject(local_130,&DAT_028e2eb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSHashTable_026ce238;
  local_138 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSHashTable_026ce238,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    _memset(auStack_180,0,0x40);
    uVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f8 != 0) {
      lVar3 = *local_170;
      local_200 = 0;
      do {
        do {
          if (*local_170 - lVar3 != 0) {
            _objc_enumerationMutation(*local_170 - lVar3,uVar1);
          }
          local_140 = *(undefined8 *)(local_178 + local_200 * 8);
          FUN_00f80600(local_140);
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10
                  );
        local_200 = 0;
      } while (local_1f8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar2;
  FUN_00f88f14(local_130,puVar2);
  _memset(auStack_1d0,0,0x40);
  puVar2 = local_188;
  (*(code *)PTR__objc_retain_02578638)();
  local_238 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10);
  if (local_238 != (undefined *)0x0) {
    lVar3 = *local_1c0;
    local_240 = (undefined *)0x0;
    do {
      do {
        if (*local_1c0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar3,puVar2);
        }
        local_190 = *(undefined8 *)(local_1c8 + (long)local_240 * 8);
        FUN_00f80600(local_190);
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10
                );
      local_240 = (undefined *)0x0;
    } while (local_238 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_setAssociatedObject(local_130,&DAT_028e2eb8,0,1);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

