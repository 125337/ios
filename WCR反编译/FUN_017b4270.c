// FUN_017b4270 @ 017b4270

byte FUN_017b4270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_300;
  ulong local_2f8;
  undefined *local_280;
  undefined *local_278;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  int local_188;
  ulong local_178;
  ulong local_170;
  byte local_161;
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [128];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_170 = 0;
  _objc_storeStrong(&local_170,param_1);
  local_178 = 0;
  _objc_storeStrong(&local_178,param_2);
  if ((local_170 == 0) ||
     (uVar3 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    local_161 = 0;
    local_188 = 1;
  }
  else {
    local_60 = &cf_controller;
    local_58 = &cf_m_nsController;
    local_50 = &cf_className;
    local_48 = &cf_m_nsClassName;
    local_40 = &cf_key;
    local_38 = &cf_userMethod;
    local_30 = &cf_method;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar1;
    _memset(auStack_1d8,0,0x40);
    puVar1 = local_190;
    (*(code *)PTR__objc_retain_02578638)();
    local_278 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_e0,0x10);
    if (local_278 != (undefined *)0x0) {
      lVar2 = *local_1c8;
      local_280 = (undefined *)0x0;
      do {
        do {
          if (*local_1c8 - lVar2 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar2,puVar1);
          }
          local_198 = *(undefined8 *)(local_1d0 + (long)local_280 * 8);
          uVar4 = local_170;
          FUN_017b4c90(local_170,local_198);
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
          uVar3 = 0;
          if (uVar4 == 0) {
LAB_017b4540:
            local_188 = 0;
          }
          else {
            uVar4 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_containsObject__0269cbb8,local_1e0);
            uVar3 = uVar4 & 0xffffffff;
            if ((uVar4 & 1) == 0) goto LAB_017b4540;
            uVar3 = 1;
            local_161 = 1;
            local_188 = 1;
          }
          _objc_storeStrong(uVar3,&local_1e0,0);
          if (local_188 != 0) goto LAB_017b45d4;
          local_280 = local_280 + 1;
        } while (local_280 < local_278);
        local_278 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_e0,
                   0x10);
        local_280 = (undefined *)0x0;
      } while (local_278 != (undefined *)0x0);
    }
    local_188 = 0;
LAB_017b45d4:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_188 == 0) {
      uVar3 = local_170;
      FUN_017b51ac();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_170;
      local_1e8 = uVar3;
      FUN_017b53e8(local_170,&cf_userInfo);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      FUN_017b51ac();
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _memset(auStack_238,0,0x40);
      uVar3 = local_178;
      (*(code *)PTR__objc_retain_02578638)();
      local_2f8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_160,0x10)
      ;
      if (local_2f8 != 0) {
        lVar2 = *local_228;
        local_300 = 0;
        do {
          do {
            if (*local_228 - lVar2 != 0) {
              _objc_enumerationMutation(*local_228 - lVar2,uVar3);
            }
            uVar4 = *(ulong *)(local_230 + local_300 * 8);
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1f8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((((uVar4 & 1) != 0) &&
                (uVar4 = local_1f8,
                (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0), uVar4 != 0))
               && ((uVar4 = local_1e8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1e8,PTR_s_containsString__0269d0b0,local_1f8), (uVar4 & 1) != 0
                   || (uVar4 = local_1f0,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1f0,PTR_s_containsString__0269d0b0,local_1f8),
                      (uVar4 & 1) != 0)))) {
              local_161 = 1;
              local_188 = 1;
              goto LAB_017b4934;
            }
            local_300 = local_300 + 1;
          } while (local_300 < local_2f8);
          local_2f8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_160,
                     0x10);
          local_300 = 0;
        } while (local_2f8 != 0);
      }
      local_188 = 0;
LAB_017b4934:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_188 == 0) {
        local_161 = 0;
        local_188 = 1;
      }
      _objc_storeStrong(&local_1f0);
      _objc_storeStrong(&local_1e8,0);
    }
    _objc_storeStrong(&local_190,0);
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_161 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

