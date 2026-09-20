// FUN_014fd3a8 @ 014fd3a8

void FUN_014fd3a8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  long *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  local_d0 = &DAT_028e3780;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,&PTR___NSConcreteGlobalBlock_025862b8);
  if (*local_d0 + 1 != 0) {
    _dispatch_once(*local_d0 + 1,local_d0,local_d8);
  }
  _objc_storeStrong(&local_d8,0);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  _memset(auStack_130,0,0x40);
  uVar1 = DAT_028e3778;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar8 = *local_120;
    local_160 = 0;
    do {
      do {
        if (*local_120 - lVar8 != 0) {
          _objc_enumerationMutation(*local_120 - lVar8,uVar1);
        }
        local_f0 = *(ulong *)(local_128 + local_160 * 8);
        lVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,local_f0);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if ((lVar4 != 0) ||
           (uVar5 = local_f0,
           (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isEqualToString__0269ccc8,&cf__gw),
           (uVar5 & 1) != 0)) {
          puVar2 = local_e8;
          local_c8 = &cf_name;
          local_b8 = local_f0;
          local_c0 = &cf_count;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     lVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

