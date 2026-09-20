// FUN_004085a0 @ 004085a0

void FUN_004085a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong local_318;
  ulong local_310;
  undefined *local_280;
  undefined *local_278;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  byte local_169;
  ulong local_168;
  int local_15c;
  undefined *local_158 [3];
  undefined *local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_keywordAutoReplyRules_026a35f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_158[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_158[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_count_0269cfe0),
     puVar1 == (undefined *)0x0)) {
    local_130 = 0;
    local_15c = 1;
  }
  else {
    uVar5 = local_138;
    FUN_0040ae9c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_138;
    local_168 = uVar5;
    FUN_0040aa48();
    local_169 = (byte)uVar3;
    _memset(auStack_1b8,0,0x40);
    puVar1 = local_158[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_278 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_278 != (undefined *)0x0) {
      lVar4 = *local_1a8;
      local_280 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar4,puVar1);
          }
          uVar5 = *(ulong *)(local_1b0 + (long)local_280 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_178 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
            if (uVar5 == 0) {
              local_15c = 3;
            }
            else {
              uVar5 = local_178;
              FUN_00411918(local_178,local_140);
              local_1c8 = uVar5;
              FUN_00411bb8(uVar5,local_169 & 1);
              if ((uVar5 & 1) == 0) {
                local_15c = 3;
              }
              else {
                uVar5 = local_1c0;
                FUN_00411c38();
                _objc_retainAutoreleasedReturnValue();
                local_1d0 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
                if (uVar5 == 0) {
                  local_15c = 3;
                }
                else {
                  _memset(auStack_218,0,0x40);
                  uVar5 = local_168;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_310 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,
                             auStack_128,0x10);
                  if (local_310 != 0) {
                    lVar6 = *local_208;
                    local_318 = 0;
                    do {
                      do {
                        if (*local_208 - lVar6 != 0) {
                          _objc_enumerationMutation(*local_208 - lVar6,uVar5);
                        }
                        local_1d8 = *(undefined8 *)(local_210 + local_318 * 8);
                        uVar3 = local_1d0;
                        FUN_00411e08(local_1d0,local_1d8);
                        if ((uVar3 & 1) != 0) {
                          uVar3 = local_178;
                          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_copy_0269d150);
                          local_15c = 1;
                          local_130 = uVar3;
                          goto LAB_00408bb8;
                        }
                        local_318 = local_318 + 1;
                      } while (local_318 < local_310);
                      local_310 = uVar5;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,
                                 auStack_128,0x10);
                      local_318 = 0;
                    } while (local_310 != 0);
                  }
                  local_15c = 0;
LAB_00408bb8:
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  if (local_15c == 0) {
                    local_15c = 0;
                  }
                }
                _objc_storeStrong(&local_1d0,0);
              }
            }
            _objc_storeStrong(&local_1c0,0);
            if ((local_15c != 0) && (local_15c != 3)) goto LAB_00408c90;
          }
          local_280 = local_280 + 1;
        } while (local_280 < local_278);
        local_278 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_280 = (undefined *)0x0;
      } while (local_278 != (undefined *)0x0);
    }
    local_15c = 0;
LAB_00408c90:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_15c == 0) {
      local_130 = 0;
      local_15c = 1;
    }
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(local_158);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

