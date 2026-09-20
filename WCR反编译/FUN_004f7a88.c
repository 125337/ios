// FUN_004f7a88 @ 004f7a88

void FUN_004f7a88(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_1c0;
  undefined *local_1b8;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  ulong local_e0;
  int local_d8;
  ulong local_c8;
  ulong local_c0;
  undefined1 auStack_b8 [128];
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  uVar8 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar8 == 0) {
    local_c0 = 0;
    local_d8 = 1;
  }
  else {
    FUN_004f8a9c();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar8;
    if (uVar8 == 0) {
      local_c0 = 0;
      local_d8 = 1;
    }
    else {
      pcVar1 = &cf_getStringKeyInNSCacheByValue_;
      _NSSelectorFromString();
      uVar2 = local_e0;
      local_e8 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar1);
      uVar8 = local_c8;
      if ((uVar2 & 1) == 0) {
        local_c0 = 0;
        local_d8 = 1;
      }
      else {
        local_38 = local_c8;
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar4;
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _memset(auStack_138,0,0x40);
        puVar3 = local_f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_b8,
                   0x10);
        if (local_1b8 != (undefined *)0x0) {
          lVar6 = *local_128;
          local_1c0 = (undefined *)0x0;
          do {
            do {
              if (*local_128 - lVar6 != 0) {
                _objc_enumerationMutation(*local_128 - lVar6,puVar3);
              }
              lVar7 = *(long *)(local_130 + (long)local_1c0 * 8);
              local_f8 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
              if (lVar7 != 0) {
                uVar2 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_performSelector_withObject__026ca7c0,local_e8,local_f8);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_140 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
                uVar8 = uVar2 & 0xffffffff;
                if ((uVar2 & 1) == 0) {
LAB_004f7efc:
                  local_d8 = 0;
                }
                else {
                  uVar5 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
                  uVar2 = local_140;
                  uVar8 = 0;
                  if (uVar5 == 0) goto LAB_004f7efc;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_c0 = uVar2;
                  uVar8 = 1;
                  local_d8 = 1;
                }
                _objc_storeStrong(uVar8,&local_140,0);
                if (local_d8 != 0) goto LAB_004f7f94;
              }
              local_1c0 = local_1c0 + 1;
            } while (local_1c0 < local_1b8);
            local_1b8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_b8
                       ,0x10);
            local_1c0 = (undefined *)0x0;
          } while (local_1b8 != (undefined *)0x0);
        }
        local_d8 = 0;
LAB_004f7f94:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_d8 == 0) {
          local_c0 = 0;
          local_d8 = 1;
        }
        _objc_storeStrong(&local_f0,0);
      }
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

