// FUN_001e3460 @ 001e3460

double FUN_001e3460(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_4);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0.0;
  _memset(auStack_108,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar2 = *local_f8;
    local_170 = 0;
    do {
      do {
        dVar3 = param_2;
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
          dVar3 = param_2;
        }
        param_2 = param_3;
        local_c8 = *(undefined8 *)(local_100 + local_170 * 8);
        FUN_001e25f4(local_c8,local_b8);
        local_c0 = local_c0 + param_2;
        local_170 = local_170 + 1;
        param_3 = dVar3;
      } while (local_170 < local_168);
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_170 = 0;
      param_3 = dVar3;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  dVar3 = local_c0;
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return dVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

