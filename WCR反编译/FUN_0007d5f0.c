// FUN_0007d5f0 @ 0007d5f0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0007d5f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_121;
  double local_120;
  long local_118;
  undefined *local_110;
  undefined1 local_101;
  ulong local_100;
  ulong local_f8;
  undefined4 local_f0;
  long local_e0;
  ulong local_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_1;
  uStack_c8 = param_2;
  local_c0 = param_3;
  uStack_b8 = param_4;
  _objc_storeStrong(&local_d8,param_5);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_6);
  if ((local_d8 == 0) ||
     (uVar6 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isViewLoaded_0269cde0),
     (uVar6 & 1) == 0)) {
    local_b0 = 0;
    local_f0 = 1;
  }
  else {
    uVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 0;
    bVar2 = true;
    uVar1 = uVar6 != 0;
    local_f8 = uVar6;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar6 == 0;
      local_101 = uVar1;
      local_100 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar1 = local_101;
    }
    local_101 = uVar1;
    if (bVar2) {
      local_b0 = 0;
      local_f0 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_f8;
      local_110 = puVar4;
      FUN_0007dc30(local_f8,local_f8,puVar4);
      local_121 = (byte)uVar6;
      local_118 = 0;
      local_120 = -1.0;
      uStack_148 = uStack_c8;
      local_150 = local_d0;
      uStack_138 = uStack_b8;
      local_140 = local_c0;
      dVar7 = local_d0;
      FUN_0007e6b8();
      _memset(auStack_198,0,0x40);
      puVar4 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_2b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10)
      ;
      if (local_2b8 != (undefined *)0x0) {
        lVar5 = *local_188;
        local_2c0 = (undefined *)0x0;
        do {
          do {
            dVar8 = dVar7;
            if (*local_188 - lVar5 != 0) {
              _objc_enumerationMutation(*local_188 - lVar5,puVar4);
              dVar8 = dVar7;
            }
            uVar6 = *(ulong *)(local_190 + (long)local_2c0 * 8);
            dVar7 = dVar8;
            local_158 = uVar6;
            if (((uVar6 != 0) && (uVar6 - local_e0 != 0)) &&
               (FUN_0007c508(uVar6 - local_e0), dVar7 = dVar8, (uVar6 & 1) != 0)) {
              uVar6 = local_158;
              FUN_0007c690(local_158,local_f8);
              dVar7 = dVar8;
              FUN_0007e6b8();
              uVar3 = (uint)uVar6;
              if ((((uVar6 & 1) != 0) &&
                  (((local_121 & 1) == 0 || (dVar7 = dVar8, FUN_0007cc50(), (uVar3 & 1) != 0)))) &&
                 ((FUN_0007e914(), dVar7 = dVar8, local_118 == 0 || (local_120 < dVar8)))) {
                _objc_storeStrong(&local_118,local_158);
                local_120 = dVar8;
              }
            }
            local_2c0 = local_2c0 + 1;
          } while (local_2c0 < local_2b8);
          local_2b8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                     0x10);
          local_2c0 = (undefined *)0x0;
        } while (local_2b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar5 = local_118;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = lVar5;
      local_f0 = 1;
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

