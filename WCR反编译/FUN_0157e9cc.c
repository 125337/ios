// FUN_0157e9cc @ 0157e9cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_0157e9cc(double param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined *local_1c0;
  undefined *local_1b8;
  double local_198;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  long local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  lVar3 = local_b8;
  local_c0 = param_3;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_d8;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
       puVar1 == (undefined *)0x0)) {
      local_b0 = 0;
    }
    else {
      if (local_c0 != (undefined1 *)0x0) {
        *local_c0 = 1;
      }
      puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_f0 = 0;
      local_f8 = param_1 - 259200.0;
      local_198 = local_f8;
      if (local_f8 <= 0.0) {
        local_198 = 0.0;
      }
      local_100 = local_198;
      local_e8 = local_198;
      local_108 = 0;
      local_e0 = param_1;
      _memset(auStack_150,0,0x40);
      puVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      if (local_1b8 != (undefined *)0x0) {
        lVar3 = *local_140;
        local_1c0 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar3 != 0) {
              _objc_enumerationMutation(*local_140 - lVar3,puVar1);
            }
            uVar4 = *(ulong *)(local_148 + (long)local_1c0 * 8);
            local_110 = uVar4;
            FUN_0157ee40();
            if (((int)uVar4 != 0) &&
               (dVar5 = (double)NEON_ucvtf(uVar4 & 0xffffffff), local_e8 <= dVar5)) {
              local_108 = local_108 + 1;
            }
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1c0 = (undefined *)0x0;
        } while (local_1b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_b0 = local_108;
    }
    local_cc = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

