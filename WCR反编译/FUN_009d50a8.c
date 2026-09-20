// FUN_009d50a8 @ 009d50a8

void FUN_009d50a8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_268;
  ulong local_260;
  uint local_22c;
  uint local_21c;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  uint local_170;
  byte local_169;
  ulong local_168;
  byte local_159;
  ulong local_158;
  byte local_149;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar3 = local_138;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_138;
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,&cf_https___);
    local_149 = 0;
    local_159 = 0;
    local_169 = 0;
    local_21c = 0;
    if ((uVar4 & 1) != 0) {
      uVar3 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_22c = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_159 = 1;
        local_158 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_22c = 1;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_169 = 1;
          local_168 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_22c = (uint)uVar3;
        }
      }
      local_21c = local_22c;
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    uVar3 = local_140;
    bVar1 = (local_21c & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = uVar3;
    }
    local_170 = (uint)bVar1;
    _objc_storeStrong(&local_140,0);
    if (local_170 != 0) goto LAB_009d57bc;
  }
  uVar3 = local_138;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_1b8,0,0x40);
    uVar3 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_260 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_260 != 0) {
      lVar5 = *local_1a8;
      local_268 = 0;
      do {
        do {
          if (*local_1a8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_1b0 + local_268 * 8);
          local_178 = uVar6;
          FUN_009d50a8();
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
          uVar4 = local_1c0;
          if (uVar6 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar4;
          }
          local_170 = (uint)(uVar6 != 0);
          _objc_storeStrong(&local_1c0,0);
          if (local_170 != 0) goto LAB_009d5570;
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10
                  );
        local_268 = 0;
      } while (local_260 != 0);
    }
    local_170 = 0;
LAB_009d5570:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_170 != 0) goto LAB_009d57bc;
  }
  uVar3 = local_138;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_208,0,0x40);
    uVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_allValues_0269dae8);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2b0 != 0) {
      lVar5 = *local_1f8;
      local_2b8 = 0;
      do {
        do {
          if (*local_1f8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_200 + local_2b8 * 8);
          local_1c8 = uVar6;
          FUN_009d50a8();
          _objc_retainAutoreleasedReturnValue();
          local_210 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
          uVar4 = local_210;
          if (uVar6 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar4;
          }
          local_170 = (uint)(uVar6 != 0);
          _objc_storeStrong(&local_210,0);
          if (local_170 != 0) goto LAB_009d5788;
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    local_170 = 0;
LAB_009d5788:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_170 != 0) goto LAB_009d57bc;
  }
  local_130 = 0;
  local_170 = 1;
LAB_009d57bc:
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

