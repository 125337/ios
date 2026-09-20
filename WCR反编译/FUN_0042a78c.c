// FUN_0042a78c @ 0042a78c

byte FUN_0042a78c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_2c8;
  ulong local_2c0;
  undefined *local_288;
  undefined *local_280;
  undefined *local_230;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  ulong local_170;
  int local_164;
  undefined *local_160 [3];
  undefined *local_148;
  undefined8 local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoAcceptFriendKeywords_026a37e0);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_230 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160[0] = local_230;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_160[0];
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_160[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_count_0269cfe0),
     puVar1 == (undefined *)0x0)) {
    local_129 = 1;
    local_164 = 1;
  }
  else {
    uVar3 = local_138;
    FUN_0042ba80(local_138,local_140);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar3;
    _memset(auStack_1b8,0,0x40);
    puVar1 = local_160[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_280 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_280 != (undefined *)0x0) {
      lVar5 = *local_1a8;
      local_288 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar5,puVar1);
          }
          local_178 = *(ulong *)(local_1b0 + (long)local_288 * 8);
          _memset(auStack_200,0,0x40);
          uVar3 = local_170;
          (*(code *)PTR__objc_retain_02578638)();
          local_2c0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                     0x10);
          if (local_2c0 != 0) {
            lVar6 = *local_1f0;
            local_2c8 = 0;
            do {
              do {
                if (*local_1f0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1f0 - lVar6,uVar3);
                }
                local_1c0 = *(undefined8 *)(local_1f8 + local_2c8 * 8);
                uVar4 = local_178;
                FUN_00411e08(local_178,local_1c0);
                if ((uVar4 & 1) != 0) {
                  local_129 = 1;
                  local_164 = 1;
                  goto LAB_0042abf4;
                }
                local_2c8 = local_2c8 + 1;
              } while (local_2c8 < local_2c0);
              local_2c0 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_128,0x10);
              local_2c8 = 0;
            } while (local_2c0 != 0);
          }
          local_164 = 0;
LAB_0042abf4:
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if (local_164 != 0) goto LAB_0042ac88;
          local_288 = local_288 + 1;
        } while (local_288 < local_280);
        local_280 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_288 = (undefined *)0x0;
      } while (local_280 != (undefined *)0x0);
    }
    local_164 = 0;
LAB_0042ac88:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_164 == 0) {
      local_129 = 0;
      local_164 = 1;
    }
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(local_160);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

