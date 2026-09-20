// wcr_ageSlices: @ 01daefb8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsBoardView::wcr_ageSlices_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_210;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e0;
  ulong local_1b8;
  ulong local_1b0;
  cfstringStruct *local_180;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  ulong local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_100 = (cfstringStruct *)0x0;
  local_f8 = puVar3;
  _memset(auStack_148,0,0x40);
  uVar2 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_1b0 != 0) {
    lVar5 = *local_138;
    local_1b8 = 0;
    do {
      do {
        if (*local_138 - lVar5 != 0) {
          _objc_enumerationMutation(*local_138 - lVar5,uVar2);
        }
        pcVar6 = *(cfstringStruct **)(local_140 + local_1b8 * 8);
        local_108 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1e0 = &cf__gw;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = local_1e0;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        local_1f0 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_isEqualToString__0269ccc8,&cf__gw);
        bVar1 = ((ulong)local_1f0 & 1) == 0;
        if (bVar1) {
          local_1f0 = local_100;
          FUN_01dad9f8();
          _objc_retainAutoreleasedReturnValue();
          local_170 = local_1f0;
        }
        else {
          FUN_01d91918();
          _objc_retainAutoreleasedReturnValue();
          local_160 = local_1f0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_158 = local_1f0;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_170);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_160);
        }
        puVar3 = local_f8;
        local_d8 = &cf_name;
        local_c0 = local_150;
        local_d0 = &cf_count;
        pcVar6 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_210 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_180 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_210 = local_180;
        }
        local_b8 = local_210;
        local_c8 = &cf_color;
        local_b0 = local_158;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (pcVar6 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_180);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        local_100 = (cfstringStruct *)((long)&local_100->field0_0x0 + 1);
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_150,0);
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
      local_1b0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      local_1b8 = 0;
    } while (local_1b0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar3;
}

