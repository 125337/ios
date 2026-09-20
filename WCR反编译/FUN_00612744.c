// FUN_00612744 @ 00612744

void FUN_00612744(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined4 local_c8;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = lVar6;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar6 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = 1;
    local_b0 = puVar2;
  }
  else {
    lVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_d0 = lVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = 1;
      local_b0 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      _memset(auStack_128,0,0x40);
      puVar2 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_1a8 != (undefined *)0x0) {
        lVar6 = *local_118;
        local_1b0 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,puVar2);
            }
            uVar7 = *(ulong *)(local_120 + (long)local_1b0 * 8);
            local_e8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar7;
            FUN_00612e00();
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if ((uVar4 & 1) != 0) {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_W)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_130 = puVar3;
              FUN_00611950();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if (puVar5 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
              }
              _objc_storeStrong(&local_130,0);
            }
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < local_1a8);
          local_1a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1b0 = (undefined *)0x0;
        } while (local_1a8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_sortUsingSelector__0269e0a0,PTR_s_localizedStandardCompare__0269e098
                );
      puVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_c8 = 1;
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

