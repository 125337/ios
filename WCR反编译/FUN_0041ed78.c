// FUN_0041ed78 @ 0041ed78

void FUN_0041ed78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_248;
  ulong local_240;
  long local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  long local_1a8;
  long local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  long local_158;
  undefined *local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_130;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_198,0,0x40);
    uVar3 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_240 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_240 != 0) {
      lVar4 = *local_188;
      local_248 = 0;
      do {
        do {
          if (*local_188 - lVar4 != 0) {
            _objc_enumerationMutation(*local_188 - lVar4,uVar3);
          }
          lVar5 = *(long *)(local_190 + local_248 * 8);
          local_158 = lVar5;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1a0);
          }
          _objc_storeStrong(&local_1a0,0);
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_138;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_1e8,0,0x40);
    uVar3 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,0x10);
    if (local_2b0 != 0) {
      lVar4 = *local_1d8;
      local_2b8 = 0;
      do {
        do {
          if (*local_1d8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar4,uVar3);
          }
          lVar5 = *(long *)(local_1e0 + local_2b8 * 8);
          local_1a8 = lVar5;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          puVar1 = local_140;
          if (lVar5 != 0) {
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          _objc_storeStrong(&local_1f0,0);
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

