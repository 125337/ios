// FUN_003d0598 @ 003d0598

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003d0598(undefined8 param_1,long *param_2,long *param_3,long *param_4,ulong *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_268;
  undefined *local_260;
  long local_1f0;
  long local_1e0;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  long local_158;
  undefined1 local_149;
  long local_148;
  byte local_139;
  long local_138;
  undefined *local_130;
  undefined8 local_128;
  ulong local_120;
  byte local_111;
  long local_110;
  long local_108;
  byte local_f9;
  long local_f8;
  byte local_e9;
  long local_e8;
  long local_e0;
  long local_d8;
  ulong *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_1e0 = local_b0;
  local_d0 = param_5;
  local_c8 = param_4;
  local_c0 = param_3;
  local_b8 = param_2;
  FUN_00355cb8();
  _objc_retainAutoreleasedReturnValue();
  local_e9 = 0;
  local_f9 = 0;
  local_d8 = local_1e0;
  if (local_1e0 == 0) {
    local_1e0 = local_b0;
    FUN_003d0e78();
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 1;
    local_f8 = local_1e0;
  }
  else {
    FUN_003d0e78();
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = local_1e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_1e0;
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  local_111 = 0;
  if ((local_d8 == 0) || (local_e0 == 0)) {
    local_1f0 = 0;
  }
  else {
    local_1f0 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_indexPathForCell__0269e208,local_d8);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_1f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_1f0;
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  local_120 = 0;
  local_128 = 0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_e0;
  local_130 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar4 = local_130;
  if (lVar8 != 0) {
    lVar8 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(lVar8);
  }
  lVar8 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_dataSource_0269e800);
  _objc_retainAutoreleasedReturnValue();
  local_139 = 0;
  local_149 = 0;
  bVar3 = false;
  uVar1 = lVar8 != 0;
  if ((bool)uVar1) {
    lVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_dataSource_0269e800);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    lVar6 = local_e0;
    local_138 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = lVar5 != lVar6;
    local_149 = uVar1;
    local_148 = lVar6;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    uVar1 = local_149;
  }
  local_149 = uVar1;
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  (*(code *)PTR__objc_release_02578630)(lVar8);
  puVar4 = local_130;
  if (bVar3) {
    lVar8 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_dataSource_0269e800);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(lVar8);
  }
  lVar8 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_nextResponder_0269d0d8);
  _objc_retainAutoreleasedReturnValue();
  local_158 = lVar8;
  while (local_158 != 0) {
    puVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_containsObject__0269cbb8,local_158);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addObject__0269d180,local_158);
    }
    lVar5 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = local_158;
    local_158 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar8);
  }
  _objc_storeStrong(&local_158,0);
  _memset(auStack_1a0,0,0x40);
  puVar4 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_260 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_260 != (undefined *)0x0) {
    lVar8 = *local_190;
    local_268 = (undefined *)0x0;
    do {
      do {
        if (*local_190 - lVar8 != 0) {
          _objc_enumerationMutation(*local_190 - lVar8,puVar4);
        }
        uVar9 = *(ulong *)(local_198 + (long)local_268 * 8);
        local_160 = uVar9;
        FUN_003adbe4();
        if ((uVar9 & 1) != 0) {
          uVar7 = local_160;
          FUN_003a4820(local_160,local_108);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = local_120;
          local_120 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar9);
          _objc_storeStrong(&local_128,local_160);
          if (local_120 != 0) goto LAB_003d0cd4;
        }
        local_268 = local_268 + 1;
      } while (local_268 < local_260);
      local_260 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10)
      ;
      local_268 = (undefined *)0x0;
    } while (local_260 != (undefined *)0x0);
  }
LAB_003d0cd4:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  lVar8 = local_d8;
  if (local_b8 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_b8 = lVar8;
  }
  lVar8 = local_e0;
  if (local_c0 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_c0 = lVar8;
  }
  lVar8 = local_108;
  if (local_c8 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_c8 = lVar8;
  }
  uVar9 = local_120;
  if (local_d0 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_d0 = uVar9;
  }
  uVar2 = local_128;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,uVar2);
  return;
}

