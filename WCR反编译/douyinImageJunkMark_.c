// douyinImageJunkMark: @ 01033218

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinImageJunkMark_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  cfstringStruct *local_f0;
  ulong local_e8;
  int local_dc;
  ulong local_d8;
  SEL local_d0;
  ID local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  uVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf_empty;
    local_dc = 1;
  }
  else {
    IVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_douyinURLLooksLikeStaticOrPrevie_026add18,local_d8);
    if ((IVar3 & 1) == 0) {
      uVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = &DAT_028e31d0;
      local_b8 = 0;
      local_e8 = uVar2;
      _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_025847d0);
      if (*local_b0 + 1 != 0) {
        _dispatch_once(*local_b0 + 1,local_b0,local_b8);
      }
      _objc_storeStrong(&local_b8,0);
      _memset(auStack_130,0,0x40);
      uVar2 = DAT_028e31c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_160 != 0) {
        lVar5 = *local_120;
        local_168 = 0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,uVar2);
            }
            local_f0 = *(cfstringStruct **)(local_128 + local_168 * 8);
            uVar4 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_containsString__0269d0b0,local_f0);
            pcVar1 = local_f0;
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c0 = pcVar1;
              local_dc = 1;
              goto LAB_010334dc;
            }
            local_168 = local_168 + 1;
          } while (local_168 < local_160);
          local_160 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_168 = 0;
        } while (local_160 != 0);
      }
      local_dc = 0;
LAB_010334dc:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_dc == 0) {
        local_c0 = (cfstringStruct *)0x0;
        local_dc = 1;
      }
      _objc_storeStrong(&local_e8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = &cf_static;
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

