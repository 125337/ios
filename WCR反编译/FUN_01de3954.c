// FUN_01de3954 @ 01de3954

void FUN_01de3954(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_278;
  ulong local_270;
  ulong local_238;
  ulong local_230;
  ulong local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  ulong local_148;
  undefined *local_140;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_138;
  local_140 = puVar1;
  FUN_01dde6c0();
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  puVar1 = local_140;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar1;
    local_14c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_158 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1a8,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_158);
    _objc_retainAutoreleasedReturnValue();
    local_230 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_230 != 0) {
      lVar4 = *local_198;
      local_238 = 0;
      do {
        do {
          if (*local_198 - lVar4 != 0) {
            _objc_enumerationMutation(*local_198 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_1a0 + local_238 * 8);
          local_168 = uVar5;
          FUN_01dde6c0();
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
          if (uVar5 == 0) {
            local_14c = 3;
          }
          else {
            _memset(auStack_1f8,0,0x40);
            uVar5 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_160);
            _objc_retainAutoreleasedReturnValue();
            local_270 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_270 != 0) {
              lVar6 = *local_1e8;
              local_278 = 0;
              do {
                do {
                  if (*local_1e8 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1e8 - lVar6,uVar5);
                  }
                  uVar7 = *(ulong *)(local_1f0 + local_278 * 8);
                  local_1b8 = uVar7;
                  FUN_01dde6c0();
                  _objc_retainAutoreleasedReturnValue();
                  local_200 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
                  if (((uVar7 == 0) ||
                      (uVar7 = local_200,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_200,PTR_s_hasSuffix__0269d018,&cf__chatroom),
                      (uVar7 & 1) != 0)) ||
                     (puVar1 = local_140,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_140,PTR_s_containsObject__0269cbb8,local_200),
                     ((ulong)puVar1 & 1) != 0)) {
                    local_14c = 5;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_140,PTR_s_addObject__0269d180,local_200);
                    local_14c = 0;
                  }
                  _objc_storeStrong(&local_200,0);
                  local_278 = local_278 + 1;
                } while (local_278 < local_270);
                local_270 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                           auStack_128,0x10);
                local_278 = 0;
              } while (local_270 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar5);
            local_14c = 0;
          }
          _objc_storeStrong(&local_1b0,0);
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_238 = 0;
      } while (local_230 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
    local_14c = 1;
    local_130 = puVar1;
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

