// FUN_005b9b48 @ 005b9b48

void FUN_005b9b48(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_230;
  undefined *local_228;
  long local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  long local_1a0;
  undefined *local_198 [3];
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  undefined *local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar3;
  _memset(auStack_180,0,0x40);
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_228 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_228 != (undefined *)0x0) {
    lVar6 = *local_170;
    local_230 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar6 != 0) {
          _objc_enumerationMutation(*local_170 - lVar6,puVar4);
        }
        uVar8 = *(ulong *)(local_178 + (long)local_230 * 8);
        puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_140 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        puVar3 = local_138;
        if ((uVar8 & 1) != 0) {
          uVar8 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(uVar8);
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_230 = (undefined *)0x0;
    } while (local_228 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)();
  FUN_005ba6bc();
  _objc_retainAutoreleasedReturnValue();
  local_198[0] = puVar4;
  if (puVar4 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_removeObject__0269d678,puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_198[0]);
  }
  _memset(auStack_1e0,0,0x40);
  puVar3 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  local_2a8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2a8 != (undefined *)0x0) {
    lVar6 = *local_1d0;
    local_2b0 = (undefined *)0x0;
    do {
      do {
        if (*local_1d0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar6,puVar3);
        }
        lVar7 = *(long *)(local_1d8 + (long)local_2b0 * 8);
        local_1a0 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_rootViewController_026ca820);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar7;
        FUN_005bacac();
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar7);
        lVar5 = local_1e8;
        bVar1 = local_1e8 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = lVar5;
        }
        _objc_storeStrong(&local_1e8,0);
        bVar2 = true;
        if (bVar1) goto LAB_005ba160;
        local_2b0 = local_2b0 + 1;
      } while (local_2b0 < local_2a8);
      local_2a8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10
                );
      local_2b0 = (undefined *)0x0;
    } while (local_2a8 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_005ba160:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    local_130 = 0;
  }
  _objc_storeStrong(local_198);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

