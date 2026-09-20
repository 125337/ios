// FUN_003b202c @ 003b202c

void FUN_003b202c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_150;
  undefined *local_148;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  _memset(auStack_118,0,0x40);
  local_c0 = &cf_m_atUserList;
  local_b8 = &cf_atUserList;
  local_b0 = &cf_m_nsAtUserList;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != (undefined *)0x0) {
    lVar7 = *local_108;
    local_150 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,puVar3);
        }
        local_d8 = *(undefined8 *)(local_110 + (long)local_150 * 8);
        uVar4 = local_d0;
        FUN_003612b8(local_d0,local_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_120 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((uVar4 & 1) == 0) ||
           (uVar6 = local_120,
           (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0), uVar4 = local_120
           , uVar6 == 0)) {
          bVar1 = false;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = uVar4;
          bVar1 = true;
        }
        _objc_storeStrong(&local_120,0);
        bVar2 = true;
        if (bVar1) goto LAB_003b2288;
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_150 = (undefined *)0x0;
    } while (local_148 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_003b2288:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    local_c8 = 0;
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

