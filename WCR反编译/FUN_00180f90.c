// FUN_00180f90 @ 00180f90

void FUN_00180f90(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong local_330;
  ulong local_2f0;
  ulong local_2e8;
  byte local_2ac;
  byte local_2a4;
  byte local_294;
  long local_230;
  ulong local_228;
  undefined *local_220;
  byte local_212;
  byte local_211;
  undefined8 local_210;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined *local_190;
  double local_188;
  double local_180;
  long local_178;
  ulong local_170;
  ulong local_168;
  byte local_15a;
  byte local_159;
  long local_158;
  long local_150;
  undefined4 local_148;
  undefined1 auStack_138 [24];
  long local_120;
  ulong local_118;
  byte local_10f;
  byte local_10e;
  double local_108;
  ulong local_100;
  ulong local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_2);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_3);
  local_100 = 0;
  _objc_storeStrong(&local_100,param_4);
  local_108 = param_1;
  if (local_f0 == 0) {
    _memset(auStack_138,0,0x30);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(auStack_138,local_f0,PTR_s_signature_0269fa68);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setContentValid__0269fac8,1);
  uVar2 = 0;
  FUN_00181cdc();
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setRecentContacts__0269fad0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setEarliestContacts__0269fad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setInjectedKeys__0269fae0,0);
    local_148 = 1;
  }
  else {
    lVar7 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_recentTitle_0269fa58);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_f0;
    local_150 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_earliestTitle_0269fa60);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = local_150;
    local_158 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
    local_294 = 0;
    if (lVar7 != 0) {
      uVar4 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsObject__0269cbb8,local_150);
      local_294 = (byte)uVar4 ^ 1;
    }
    local_159 = local_294 & 1;
    lVar7 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
    local_2a4 = 0;
    if (lVar7 != 0) {
      uVar4 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsObject__0269cbb8,local_158);
      local_2a4 = 0;
      if ((uVar4 & 1) == 0) {
        local_2ac = 0;
        if ((local_159 & 1) != 0) {
          lVar7 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_150)
          ;
          local_2ac = (byte)lVar7;
        }
        local_2a4 = local_2ac ^ 1;
      }
    }
    local_15a = local_2a4 & 1;
    uVar4 = local_f8;
    FUN_00181d40(local_f8,local_100);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_sortedArrayUsingComparator__0269fae8,
               &PTR___NSConcreteGlobalBlock_0257a930);
    _objc_retainAutoreleasedReturnValue();
    local_178 = 0;
    local_170 = uVar4;
    if ((local_10f & 1) != 0) {
      local_180 = local_108 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_02578290;
      local_188 = local_180 - (double)local_120 * 86400.0;
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar5;
      _memset(auStack_1d8,0,0x40);
      uVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_reverseObjectEnumerator_0269d220);
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2e8 != 0) {
        lVar7 = *local_1c8;
        local_2f0 = 0;
        do {
          do {
            if (*local_1c8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1c8 - lVar7,uVar4);
            }
            uVar8 = *(ulong *)(local_1d0 + local_2f0 * 8);
            local_198 = uVar8;
            FUN_00182618();
            if ((double)(uVar8 & 0xffffffff) < local_188) {
              local_148 = 2;
              goto LAB_00181598;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_addObject__0269d180,local_198);
            local_2f0 = local_2f0 + 1;
          } while (local_2f0 < local_2e8);
          local_2e8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                     0x10);
          local_2f0 = 0;
        } while (local_2e8 != 0);
      }
      local_148 = 0;
LAB_00181598:
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _objc_storeStrong(&local_178,local_190);
      _objc_storeStrong(&local_190,0);
    }
    local_1e0 = 0;
    if ((local_10e & 1) != 0) {
      local_1f0 = local_118;
      uVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
      local_330 = uVar4;
      if (local_1f0 < uVar4) {
        local_330 = local_1f0;
      }
      local_200 = local_330;
      local_1e8 = local_330;
      local_c0 = 0;
      local_c8 = local_330;
      local_b8 = 0;
      local_b0 = local_330;
      local_210 = 0;
      local_208 = local_330;
      uVar8 = local_170;
      local_1f8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_subarrayWithRange__0269d848,0,local_330)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_1e0;
      local_1e0 = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setRecentContacts__0269fad0,local_178);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setEarliestContacts__0269fad8,local_1e0);
    lVar7 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0);
    local_211 = 0;
    if (lVar7 != 0) {
      local_211 = local_159;
    }
    local_211 = local_211 & 1;
    uVar4 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0);
    local_212 = 0;
    if (uVar4 != 0) {
      local_212 = local_15a;
    }
    local_212 = local_212 & 1;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,2);
    _objc_retainAutoreleasedReturnValue();
    local_220 = puVar5;
    if ((local_211 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180,local_150);
    }
    if ((local_212 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_addObject__0269d180,local_158);
    }
    puVar5 = local_220;
    (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_count_0269cfe0);
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setInjectedKeys__0269fae0,0);
      local_148 = 1;
    }
    else {
      uVar4 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_mutableCopy_0269d8a0);
      local_230 = 0;
      uVar8 = local_100;
      local_228 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_indexOfObject__0269e870,&cf__);
      puVar1 = local_220;
      uVar4 = local_228;
      puVar5 = PTR__OBJC_CLASS___NSIndexSet_026ce378;
      if (uVar8 != 0x7fffffffffffffff) {
        local_230 = uVar8 + 1;
      }
      puVar6 = local_220;
      (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_count_0269cfe0);
      local_e0 = local_230;
      local_d8 = local_230;
      local_e8 = puVar6;
      local_d0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_indexSetWithIndexesInRange__0269faf0,local_230,puVar6);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_insertObjects_atIndexes__0269faf8,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setInjectedKeys__0269fae0,local_228);
      _objc_storeStrong(&local_228,0);
      local_148 = 0;
    }
    _objc_storeStrong(&local_220);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

