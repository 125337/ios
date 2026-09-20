// FUN_0015bdc0 @ 0015bdc0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0015bdc0(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint local_2f4;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_268;
  undefined *local_260;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  long local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_1);
  puVar2 = local_138;
  FUN_0015e890();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (uint)local_138;
  local_140 = puVar2;
  FUN_0015aee0();
  puVar2 = local_140;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar2;
    local_150 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1a8,0,0x40);
    puVar2 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_260 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_260 != (undefined *)0x0) {
      lVar5 = *local_198;
      local_268 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar5 != 0) {
            _objc_enumerationMutation(*local_198 - lVar5,puVar2);
          }
          lVar6 = *(long *)(local_1a0 + (long)local_268 * 8);
          local_168 = lVar6;
          FUN_0015ecd4();
          puVar3 = local_160;
          local_1b0 = lVar6;
          if (lVar6 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithUnsignedLongLong__0269d7f8,lVar6);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          if (local_168 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_168);
          }
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_268 = (undefined *)0x0;
      } while (local_260 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_1f8,0,0x40);
    puVar2 = local_138;
    FUN_0015edb4();
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2c8 != (undefined *)0x0) {
      lVar5 = *local_1e8;
      local_2d0 = (undefined *)0x0;
      do {
        do {
          if (*local_1e8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar5,puVar2);
          }
          lVar6 = *(long *)(local_1f0 + (long)local_2d0 * 8);
          local_1b8 = lVar6;
          FUN_0015ecd4();
          puVar3 = local_160;
          local_2f4 = 0;
          if (lVar6 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithUnsignedLongLong__0269d7f8,lVar6);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
            local_2f4 = (uint)puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          puVar3 = local_160;
          if ((local_2f4 & 1) == 0) {
            if (lVar6 != 0) {
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,
                         PTR_s_numberWithUnsignedLongLong__0269d7f8,lVar6);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            if (local_1b8 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1b8);
            }
          }
          local_2d0 = local_2d0 + 1;
        } while (local_2d0 < local_2c8);
        local_2c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                   0x10);
        local_2d0 = (undefined *)0x0;
      } while (local_2c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar2;
    local_150 = 1;
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

