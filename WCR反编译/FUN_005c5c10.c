// FUN_005c5c10 @ 005c5c10

void FUN_005c5c10(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_1c0;
  undefined *local_1b8;
  long local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  long local_120;
  ulong local_118;
  int local_110;
  undefined *local_100;
  uint local_f4;
  ulong local_f0;
  long local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined1 auStack_c8 [128];
  undefined *local_48 [4];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_1);
  if (local_f0 == 0) {
    local_e8 = 0;
    local_f4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = PTR_s_pathForData_026a4a20;
    local_48[1] = PTR_s_pathForSightData_026a4a28;
    local_48[2] = PTR_s_pathForExistData_026a4a30;
    local_48[3] = PTR_s_pathForHdData_026a4a38;
    local_100 = puVar2;
    for (local_110 = 0; local_110 < 4; local_110 = local_110 + 1) {
      uVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_respondsToSelector__026ca818,local_48[local_110]);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_f0;
        FUN_005b9830(local_f0,local_48[local_110]);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_005a0828();
        _objc_retainAutoreleasedReturnValue();
        local_118 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_118);
        }
        _objc_storeStrong(&local_118,0);
      }
    }
    _memset(auStack_160,0,0x40);
    puVar2 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_c8,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar6 = *local_150;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar6 != 0) {
            _objc_enumerationMutation(*local_150 - lVar6,puVar2);
          }
          lVar7 = *(long *)(local_158 + (long)local_1c0 * 8);
          local_e0 = &cf__mp4;
          local_d8 = &cf__mov;
          local_d0 = &cf__m4v;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_120 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_e0,3);
          _objc_retainAutoreleasedReturnValue();
          FUN_005c6174(lVar7,puVar5,0x19000);
          _objc_retainAutoreleasedReturnValue();
          local_168 = lVar7;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          lVar7 = local_168;
          bVar1 = local_168 != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = lVar7;
          }
          local_f4 = (uint)bVar1;
          _objc_storeStrong(&local_168,0);
          if (local_f4 != 0) goto LAB_005c60b0;
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_c8,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    local_f4 = 0;
LAB_005c60b0:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_f4 == 0) {
      local_e8 = 0;
      local_f4 = 1;
    }
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

