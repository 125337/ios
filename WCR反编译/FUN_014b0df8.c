// FUN_014b0df8 @ 014b0df8

byte FUN_014b0df8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_150;
  ulong local_148;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
    if (local_148 != 0) {
      lVar3 = *local_f8;
      local_150 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_100 + local_150 * 8);
          local_c8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_menuType_026ad408);
          if (((uVar4 & 1) != 0) &&
             (uVar4 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_menuType_026ad408), uVar4 == 2)) {
            local_a9 = 1;
            local_bc = 1;
            goto LAB_014b10e0;
          }
          uVar4 = local_c8;
          FUN_014b27a4();
          _objc_retainAutoreleasedReturnValue();
          local_110 = uVar4;
          _WCRPluginIconTitleMatches(uVar4,&cf_lp_forward);
          if ((((uVar4 & 1) == 0) &&
              (uVar4 = local_110,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_isEqualToString__0269ccc8,&cf_lS), (uVar4 & 1) == 0)) &&
             (uVar4 = local_110,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_110,PTR_s_rangeOfString_options__0269d118,&cf_Forward,1),
             uVar4 == 0x7fffffffffffffff)) {
            local_bc = 0;
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
            local_a9 = 1;
            local_bc = 1;
          }
          _objc_storeStrong(uVar5,&local_110,0);
          if (local_bc != 0) goto LAB_014b10e0;
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    local_bc = 0;
LAB_014b10e0:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_bc == 0) {
      local_a9 = 0;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

