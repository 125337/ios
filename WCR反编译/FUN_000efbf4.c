// FUN_000efbf4 @ 000efbf4

void FUN_000efbf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  ulong local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar2;
  _memset(auStack_138,0,0x40);
  puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
             PTR_s_configuredEntriesForListKind__0269ea68,1);
  _objc_retainAutoreleasedReturnValue();
  local_170 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_170 != (undefined *)0x0) {
    lVar7 = *local_128;
    local_178 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar7 != 0) {
          _objc_enumerationMutation(*local_128 - lVar7,puVar2);
        }
        uVar8 = *(ulong *)(local_130 + (long)local_178 * 8);
        local_f8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar8);
        puVar1 = local_f0;
        if ((uVar3 & 1) == 0) {
          local_e8 = &cf_title;
          uVar3 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_e0 = &cf_action;
          uVar8 = local_f8;
          local_d8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_d0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(uVar8);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        else {
          local_c8 = &cf_title;
          uVar3 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = &cf_kind;
          local_b0 = &cf_groupPicker;
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_178 = (undefined *)0x0;
    } while (local_170 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

