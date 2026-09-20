// FUN_0040f778 @ 0040f778

byte FUN_0040f778(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_180;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8;
  int local_e0;
  ulong local_d0;
  ulong local_c8;
  byte local_b9;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  uVar2 = local_c8;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if ((uVar2 < 4) ||
     (uVar2 = local_d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_hasPrefix__0269d320,&cf_<),
     (uVar2 & 1) == 0)) {
    local_b9 = 0;
    local_e0 = 1;
  }
  else {
    local_b0 = &DAT_028ca780;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_0257d1a8);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    uVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar2;
    if (uVar2 == 0) {
      local_180 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_180;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,&cf_<_xml);
    if ((uVar2 & 1) == 0) {
      _memset(auStack_130,0,0x40);
      uVar2 = DAT_028ca778;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_1b0 != 0) {
        lVar4 = *local_120;
        local_1b8 = 0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,uVar2);
            }
            local_f0 = *(undefined8 *)(local_128 + local_1b8 * 8);
            uVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,local_f0);
            if ((uVar3 & 1) != 0) {
              local_b9 = 1;
              local_e0 = 1;
              goto LAB_0040fb40;
            }
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1b8 = 0;
        } while (local_1b0 != 0);
      }
      local_e0 = 0;
LAB_0040fb40:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_e0 == 0) {
        uVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_rangeOfString__0269d838,&cf_<appmsg);
        bVar1 = true;
        if (uVar2 == 0x7fffffffffffffff) {
          uVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_rangeOfString__0269d838,&cf_<recorditem);
          bVar1 = uVar2 != 0x7fffffffffffffff;
        }
        if (bVar1) {
          local_b9 = 1;
          local_e0 = 1;
        }
        else {
          local_b9 = 0;
          local_e0 = 1;
        }
      }
    }
    else {
      local_b9 = 1;
      local_e0 = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

