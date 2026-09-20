// FUN_008b526c @ 008b526c

byte FUN_008b526c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_168;
  ulong local_160;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  uint local_c8;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_a9 = 0;
    local_c8 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar4 = *local_100;
      local_168 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_108 + local_168 * 8);
          local_d0 = uVar5;
          FUN_008b5f40();
          _objc_retainAutoreleasedReturnValue();
          local_118 = uVar5;
          _WCRPluginIconTitleMatches(uVar5,&cf_lp_forward);
          bVar1 = true;
          if ((uVar5 & 1) == 0) {
            uVar5 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_isEqualToString__0269ccc8,&cf_lS);
            bVar1 = true;
            if ((uVar5 & 1) == 0) {
              uVar5 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_rangeOfString_options__0269d118,&cf_Forward,1);
              bVar1 = uVar5 != 0x7fffffffffffffff;
            }
          }
          if (bVar1) {
            local_a9 = 1;
          }
          local_c8 = (uint)bVar1;
          _objc_storeStrong(&local_118,0);
          if (local_c8 != 0) goto LAB_008b55b0;
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    local_c8 = 0;
LAB_008b55b0:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_c8 == 0) {
      local_a9 = 0;
      local_c8 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

