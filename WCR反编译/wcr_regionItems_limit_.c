// wcr_regionItems:limit: @ 01daea00

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::wcr_regionItems_limit_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_228;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  ulong local_1d8;
  ulong local_1d0;
  cfstringStruct *local_198;
  undefined *local_190;
  byte local_181;
  cfstringStruct *local_180;
  byte local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined4 local_154;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_f8 = (cfstringStruct *)param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_108 = (cfstringStruct *)0x0;
  local_100 = puVar2;
  _memset(auStack_150,0,0x40);
  uVar1 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
  if (local_1d0 != 0) {
    lVar4 = *local_140;
    local_1d8 = 0;
    do {
      do {
        if (*local_140 - lVar4 != 0) {
          _objc_enumerationMutation(*local_140 - lVar4,uVar1);
        }
        pcVar5 = *(cfstringStruct **)(local_148 + local_1d8 * 8);
        local_110 = pcVar5;
        if (local_f8 <= local_108) {
          local_154 = 2;
          goto LAB_01daef1c;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_200 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_200 = &cf__gw;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = local_200;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        local_210 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEqualToString__0269ccc8,&cf__gw);
        local_171 = 0;
        local_181 = 0;
        if (((ulong)local_210 & 1) == 0) {
          local_210 = local_108;
          FUN_01dad9f8();
          _objc_retainAutoreleasedReturnValue();
          local_181 = 1;
          local_180 = local_210;
        }
        else {
          FUN_01d91918();
          _objc_retainAutoreleasedReturnValue();
          local_171 = 1;
          local_170 = local_210;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_168 = local_210;
        if ((local_181 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_180);
        }
        if ((local_171 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_170);
        }
        local_d8 = &cf_name;
        local_c0 = local_160;
        local_d0 = &cf_count;
        pcVar5 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_228 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_198 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_228 = local_198;
        }
        local_b8 = local_228;
        local_c8 = &cf_color;
        local_b0 = local_168;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_190 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (pcVar5 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_198);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_190);
        local_108 = (cfstringStruct *)((long)&local_108->field0_0x0 + 1);
        _objc_storeStrong(&local_190);
        _objc_storeStrong(&local_168,0);
        _objc_storeStrong(&local_160,0);
        local_1d8 = local_1d8 + 1;
      } while (local_1d8 < local_1d0);
      local_1d0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      local_1d8 = 0;
    } while (local_1d0 != 0);
  }
  local_154 = 0;
LAB_01daef1c:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_100;
  (*(code *)PTR__objc_retain_02578638)();
  local_154 = 1;
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

