// queryValueForKey:inURLString: @ 0101ea90

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::queryValueForKey_inURLString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  lVar5 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((lVar5 == 0) ||
     (lVar5 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
     lVar5 == 0)) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    _memset(auStack_128,0,0x40);
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_queryItems_0269d820);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != (undefined *)0x0) {
      lVar5 = *local_118;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,puVar2);
          }
          uVar6 = *(ulong *)(local_120 + (long)local_170 * 8);
          local_e8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = false;
          if ((uVar3 & 1) != 0) {
            uVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_value_0269d830);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = uVar4 != 0;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (bVar1) {
            uVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_value_0269d830);
            _objc_retainAutoreleasedReturnValue();
            local_d4 = 1;
            local_b0 = uVar3;
            goto LAB_0101edc8;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_0101edc8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d4 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b0;
}

