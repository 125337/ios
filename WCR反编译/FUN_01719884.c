// FUN_01719884 @ 01719884

void FUN_01719884(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_160;
  ulong local_158;
  undefined *local_150;
  byte local_141;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  if ((local_c8 == 0) ||
     (uVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_c8;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar1;
    _memset(auStack_138,0,0x40);
    uVar1 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1a8 != 0) {
      lVar6 = *local_128;
      local_1b0 = 0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,uVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + local_1b0 * 8);
          uVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_extractSingleRedeemCodeFromText__026b39f8,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_140 = uVar4;
          if (((uVar4 != 0) &&
              (uVar5 = local_b8,
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isThemeBoxCode__026b3a00,uVar4),
              (uVar5 & 1) != 0)) &&
             (puVar2 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e0,PTR_s_containsObject__0269cbb8,local_140), ((ulong)puVar2 & 1) == 0
             )) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_140);
          }
          _objc_storeStrong(&local_140,0);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_c8;
    puVar3 = PTR_s_rangeOfCharacterFromSet__0269db68;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_rangeOfCharacterFromSet__0269db68,local_e8)
    ;
    local_141 = uVar1 != 0x7fffffffffffffff;
    puVar2 = local_e0;
    local_158 = uVar1;
    local_150 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    if ((puVar2 == (undefined *)0x0) && ((local_141 & 1) == 0)) {
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_extractSingleRedeemCodeFromText__026b39f8,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_160 = uVar1;
      if ((uVar1 != 0) &&
         (uVar4 = local_b8,
         (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isThemeBoxCode__026b3a00,uVar1),
         (uVar4 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_160);
      }
      _objc_storeStrong(&local_160,0);
    }
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_d8 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

