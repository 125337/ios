// FUN_006b8070 @ 006b8070

void FUN_006b8070(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *local_248;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined8 local_140;
  byte local_131;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_006b8834();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_c8 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_c8 = 1;
    }
    else {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
      local_d8 = pcVar4;
      FUN_006b89fc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      _memset(auStack_128,0,0x40);
      puVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_1c0 != (undefined *)0x0) {
        lVar9 = *local_118;
        local_1c8 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar9 != 0) {
              _objc_enumerationMutation(*local_118 - lVar9,puVar2);
            }
            local_e8 = *(undefined8 *)(local_120 + (long)local_1c8 * 8);
            lVar5 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
            _objc_retainAutoreleasedReturnValue();
            local_131 = 0;
            puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            local_130 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = 1;
            if (((ulong)puVar6 & 1) != 0) {
              bVar1 = local_131;
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if ((bVar1 & 1) == 0) {
              uVar7 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_140 = uVar8;
              (*(code *)PTR__objc_release_02578630)(uVar7);
              puVar3 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_containsObject__0269cbb8,local_140);
              if (((ulong)puVar3 & 1) == 0) {
                local_c8 = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
                local_c8 = 0;
              }
              _objc_storeStrong(&local_140,0);
            }
            else {
              local_c8 = 3;
            }
            _objc_storeStrong(&local_130,0);
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1c8 = (undefined *)0x0;
        } while (local_1c0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_sortUsingSelector__0269e0a0,PTR_s_localizedStandardCompare__0269e098
                );
      pcVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_248 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_248 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_248;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      local_c8 = 1;
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

