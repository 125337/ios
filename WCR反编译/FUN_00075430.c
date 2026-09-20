// FUN_00075430 @ 00075430

void FUN_00075430(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *local_278;
  void *local_270;
  ulong local_218;
  ulong local_210;
  long local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  long local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  long local_158;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar2;
  if (local_130 == 1) {
    _memset(auStack_198,0,0x40);
    uVar1 = DAT_028c7d38;
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_210 != 0) {
      lVar5 = *local_188;
      local_218 = 0;
      do {
        do {
          if (*local_188 - lVar5 != 0) {
            _objc_enumerationMutation(*local_188 - lVar5,uVar1);
          }
          lVar6 = *(long *)(local_190 + local_218 * 8);
          local_158 = lVar6;
          FUN_00074b64();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar6);
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_158);
          }
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_218 = 0;
      } while (local_210 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else if (local_130 == 2) {
    pvVar3 = _memset(auStack_1e0,0,0x40);
    FUN_00075a98();
    _objc_retainAutoreleasedReturnValue();
    local_270 = pvVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_270 != (void *)0x0) {
      lVar5 = *local_1d0;
      local_278 = (void *)0x0;
      do {
        do {
          if (*local_1d0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar5,pvVar3);
          }
          lVar6 = *(long *)(local_1d8 + (long)local_278 * 8);
          local_1a0 = lVar6;
          FUN_00074b64();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar6);
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1a0);
          }
          local_278 = (void *)((long)local_278 + 1);
        } while (local_278 < local_270);
        local_270 = pvVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                   0x10);
        local_278 = (void *)0x0;
      } while (local_270 != (void *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pvVar3);
  }
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if ((puVar2 == (undefined *)0x0) &&
     (lVar5 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
     lVar5 != 0)) {
    lVar4 = local_138;
    FUN_00074b64(lVar5);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_138);
    }
    _objc_storeStrong(&local_1e8,0);
  }
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

