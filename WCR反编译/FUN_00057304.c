// FUN_00057304 @ 00057304

void FUN_00057304(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong local_218;
  ulong local_210;
  ulong local_1c8;
  ulong local_188;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  byte local_101;
  ulong local_100;
  ulong local_f8;
  undefined *local_f0;
  long local_e8;
  ulong local_e0;
  byte local_d1;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_b0 == 0) || (FUN_0004bf04(), (uVar1 & 1) == 0)) {
    local_c0 = 1;
  }
  else {
    uVar3 = local_b0;
    FUN_00057b64(local_b0,&cf_m_recordMsg);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 0;
    local_188 = uVar3;
    if (uVar3 == 0) {
      local_188 = local_b0;
      FUN_00057b64(local_b0,&cf_historyMsgWrap);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_188;
    }
    local_d1 = uVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_188;
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = 0;
    FUN_00052874(0,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar3;
    FUN_000512a0();
    if ((uVar3 & 1) == 0) {
      local_c0 = 1;
    }
    else {
      local_e8 = 0;
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_b0;
      local_f0 = puVar4;
      FUN_00057b64(local_b0,&cf_dataWrapList);
      _objc_retainAutoreleasedReturnValue();
      local_101 = 0;
      local_1c8 = uVar3;
      if (uVar3 == 0) {
        local_1c8 = local_b0;
        FUN_00057b64(local_b0,&cf__dataWrapList);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_1c8;
      }
      local_101 = uVar3 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_1c8;
      if ((local_101 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_f8;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) != 0) {
        _memset(auStack_150,0,0x40);
        uVar3 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_allValues_0269dae8);
        _objc_retainAutoreleasedReturnValue();
        local_210 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_210 != 0) {
          lVar8 = *local_140;
          local_218 = 0;
          do {
            do {
              if (*local_140 - lVar8 != 0) {
                _objc_enumerationMutation(*local_140 - lVar8,uVar3);
              }
              local_110 = *(long *)(local_148 + local_218 * 8);
              if ((local_110 != 0) &&
                 (puVar4 = local_f0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_f0,PTR_s_containsObject__0269cbb8,local_110),
                 ((ulong)puVar4 & 1) == 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_110);
                FUN_00057ce8(local_110);
                local_e8 = local_e8 + 1;
              }
              local_218 = local_218 + 1;
            } while (local_218 < local_210);
            local_210 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                       0x10);
            local_218 = 0;
          } while (local_210 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar5 = local_b0;
      FUN_00057b64(local_b0,&cf_m_dataList);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_158 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar3 = uVar5 & 0xffffffff;
      if ((uVar5 & 1) != 0) {
        local_160 = 0;
        while( true ) {
          uVar5 = local_160;
          uVar6 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
          uVar7 = local_b0;
          uVar3 = uVar5 - uVar6;
          if (uVar6 <= uVar5) break;
          uVar3 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectAtIndexedSubscript__0269cc78,local_160);
          _objc_retainAutoreleasedReturnValue();
          FUN_000580b0(uVar7,uVar3,local_158,local_160);
          _objc_retainAutoreleasedReturnValue();
          local_168 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if (local_168 != 0) {
            FUN_00057ce8(local_168);
            local_e8 = local_e8 + 1;
          }
          _objc_storeStrong(&local_168,0);
          local_160 = local_160 + 1;
        }
      }
      _objc_storeStrong(uVar3,&local_158);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      local_c0 = 0;
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

