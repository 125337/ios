// FUN_01502298 @ 01502298

byte FUN_01502298(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_d8;
  int local_cc;
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
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_b9 = 0;
    local_cc = 1;
  }
  else {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsString__0269d0b0,&cf__lt_);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsString__0269d0b0,&cf__gt_),
       (uVar2 & 1) == 0)) {
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsString__0269d0b0,&cf_<);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = &DAT_028e3800;
        local_b8 = 0;
        local_d8 = uVar2;
        _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02586398);
        if (*local_b0 + 1 != 0) {
          _dispatch_once(*local_b0 + 1,local_b0,local_b8);
        }
        _objc_storeStrong(&local_b8,0);
        _memset(auStack_120,0,0x40);
        uVar2 = DAT_028e37f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        if (local_148 != 0) {
          lVar4 = *local_110;
          local_150 = 0;
          do {
            do {
              if (*local_110 - lVar4 != 0) {
                _objc_enumerationMutation(*local_110 - lVar4,uVar2);
              }
              local_e0 = *(undefined8 *)(local_118 + local_150 * 8);
              uVar3 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_containsString__0269d0b0,local_e0);
              if ((uVar3 & 1) != 0) {
                local_b9 = 1;
                local_cc = 1;
                goto LAB_015025d0;
              }
              local_150 = local_150 + 1;
            } while (local_150 < local_148);
            local_148 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                       0x10);
            local_150 = 0;
          } while (local_148 != 0);
        }
        local_cc = 0;
LAB_015025d0:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_cc == 0) {
          local_b9 = 0;
          local_cc = 1;
        }
        _objc_storeStrong(&local_d8,0);
      }
      else {
        local_b9 = 1;
        local_cc = 1;
      }
    }
    else {
      local_b9 = 1;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

