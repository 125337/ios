// FUN_014f6a74 @ 014f6a74

void FUN_014f6a74(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined1 *local_f0;
  ulong local_e8;
  undefined4 local_dc;
  ulong local_d8;
  undefined1 *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    puVar2 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_d0 = puVar2;
  }
  else {
    uVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_keysSortedByValueUsingComparator_026af880,
               &PTR___NSConcreteGlobalBlock_025863d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    _memset(auStack_138,0,0x40);
    uVar1 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar7 = *local_128;
      local_170 = 0;
      do {
        do {
          if (*local_128 - lVar7 != 0) {
            _objc_enumerationMutation(*local_128 - lVar7,uVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + local_170 * 8);
          uVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          puVar2 = local_f0;
          if (1 < uVar5) {
            local_c8 = &cf_word;
            local_b8 = local_f8;
            local_c0 = &cf_count;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,uVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_b0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
            if ((undefined1 *)((long)&MACH_HEADER.filetype + 3) < puVar2) {
              local_dc = 2;
              goto LAB_014f6de4;
            }
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_dc = 0;
LAB_014f6de4:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
    local_dc = 1;
    local_d0 = puVar2;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_d0);
  return;
}

