// FUN_005bbc08 @ 005bbc08

byte FUN_005bbc08(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_220;
  undefined *local_218;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  undefined *local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar2;
  _memset(auStack_180,0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_218 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_218 != (undefined *)0x0) {
    lVar5 = *local_170;
    local_220 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,puVar3);
        }
        uVar6 = *(ulong *)(local_178 + (long)local_220 * 8);
        puVar2 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_140 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        puVar2 = local_138;
        if ((uVar6 & 1) != 0) {
          uVar6 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_220 = (undefined *)0x0;
    } while (local_218 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
  puVar2 = local_138;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _memset(auStack_1d8,0,0x40);
  puVar2 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  local_2c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2c0 != (undefined *)0x0) {
    lVar5 = *local_1c8;
    local_2c8 = (undefined *)0x0;
    do {
      do {
        if (*local_1c8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar5,puVar2);
        }
        uVar6 = *(ulong *)(local_1d0 + (long)local_2c8 * 8);
        local_198 = uVar6;
        FUN_005bc2dc();
        if ((uVar6 & 1) != 0) {
          local_129 = 1;
          bVar1 = true;
          goto LAB_005bc23c;
        }
        local_2c8 = local_2c8 + 1;
      } while (local_2c8 < local_2c0);
      local_2c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10
                );
      local_2c8 = (undefined *)0x0;
    } while (local_2c0 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_005bc23c:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    local_129 = 0;
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

