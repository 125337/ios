// FUN_014e3aa4 @ 014e3aa4

void FUN_014e3aa4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *local_1d8;
  ulong local_198;
  ulong local_190;
  undefined *local_150;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined1 *local_f8;
  ulong local_f0;
  undefined *local_e8;
  ulong local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  local_e8 = (undefined *)0x0;
  _objc_storeStrong(&local_e8,param_2);
  uVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_keysSortedByValueUsingComparator_026af880,
             &PTR___NSConcreteGlobalBlock_02586218);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_f0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar2;
  _memset(auStack_140,0,0x40);
  uVar1 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar7 = *local_130;
    local_198 = 0;
    do {
      do {
        if (*local_130 - lVar7 != 0) {
          _objc_enumerationMutation(*local_130 - lVar7,uVar1);
        }
        local_100 = *(undefined8 *)(local_138 + local_198 * 8);
        puVar3 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
        puVar6 = local_f8;
        if ((undefined1 *)((long)&MACH_HEADER.cpusubtype + 3) < puVar3) goto LAB_014e3e4c;
        local_d8 = &cf_name;
        local_c0 = local_100;
        local_d0 = &cf_count;
        uVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,local_100);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = &cf_bucket;
        puVar2 = local_e8;
        local_b8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,local_100);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_150 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = local_150;
        }
        local_b0 = local_1d8;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_150);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
LAB_014e3e4c:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar6 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

