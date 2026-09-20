// FUN_0042dfa8 @ 0042dfa8

void FUN_0042dfa8(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  undefined *local_1e8;
  undefined *local_1e0;
  cfstringStruct *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  cfstringStruct *local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  uVar4 = local_e0;
  pcVar3 = &cf_toContact;
  _NSSelectorFromString();
  FUN_00422cd4(uVar4,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar4;
  _memset(auStack_140,0,0x40);
  uVar4 = local_e0;
  FUN_00422aac(local_e0,&cf_m_nsEncodeUserName);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_e8;
  local_d0 = uVar4;
  FUN_00422aac(local_e8,&cf_m_nsEncodeUserName);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_e0;
  local_c8 = uVar5;
  FUN_00422aac(local_e0,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = local_e8;
  local_c0 = uVar6;
  FUN_00422aac(local_e8,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_e0;
  local_b8 = uVar7;
  FUN_00422aac(local_e0,&cf_m_nsSource);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b0 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_1e0 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_1e0 != (undefined *)0x0) {
    lVar10 = *local_130;
    local_1e8 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar10 != 0) {
          _objc_enumerationMutation(*local_130 - lVar10,puVar9);
        }
        pcVar11 = *(cfstringStruct **)(local_138 + (long)local_1e8 * 8);
        local_100 = pcVar11;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        local_148 = pcVar11;
        FUN_00422fbc();
        pcVar3 = local_148;
        bVar1 = ((ulong)pcVar11 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_d8 = pcVar3;
        }
        _objc_storeStrong(&local_148,0);
        bVar2 = true;
        if (bVar1) goto LAB_0042e444;
        local_1e8 = local_1e8 + 1;
      } while (local_1e8 < local_1e0);
      local_1e0 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      local_1e8 = (undefined *)0x0;
    } while (local_1e0 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_0042e444:
  (*(code *)PTR__objc_release_02578630)(puVar9);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = &cf___;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

