// wcr_commonItems:limit: @ 01db3040

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::wcr_commonItems_limit_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_248;
  cfstringStruct *local_220;
  ulong local_1f0;
  ulong local_1e8;
  dword *local_1c8;
  bool local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  cfstringStruct *local_148;
  dword *local_140;
  long local_138;
  undefined1 *local_130;
  dword *local_128;
  ulong local_120;
  SEL local_118;
  ID local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = 0;
  local_118 = param_2;
  local_110 = param_1;
  _objc_storeStrong(&local_120,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_128 = (dword *)param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_138 = 0;
  if (local_128 == (dword *)0x0) {
    local_1c8 = &MACH_HEADER.sizeofcmds;
  }
  else {
    local_1c8 = local_128;
  }
  local_140 = local_1c8;
  local_130 = puVar2;
  _memset(auStack_188,0,0x40);
  uVar1 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_1e8 != 0) {
    lVar9 = *local_178;
    local_1f0 = 0;
    do {
      do {
        if (*local_178 - lVar9 != 0) {
          _objc_enumerationMutation(*local_178 - lVar9,uVar1);
        }
        pcVar10 = *(cfstringStruct **)(local_180 + local_1f0 * 8);
        local_148 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_commonGroupCount_026af808);
        puVar8 = local_130;
        if (pcVar10 != (cfstringStruct *)0x0) {
          local_108 = &cf_name;
          pcVar10 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_displayName_026ac378);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_220 = local_148;
          if (pcVar3 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_usr_026af770);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = local_220;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_displayName_026ac378);
            _objc_retainAutoreleasedReturnValue();
            local_190 = local_220;
          }
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_d8 = local_220;
          local_100 = &cf_count;
          pcVar4 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_commonGroupCount_026af808);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_numberWithUnsignedInteger__0269e4d0,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = &cf_color;
          lVar5 = local_138;
          local_d0 = puVar2;
          FUN_01daa088();
          _objc_retainAutoreleasedReturnValue();
          local_f0 = &cf_usr;
          pcVar4 = local_148;
          local_c8 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_usr_026af770);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_248 = &::cf___;
          }
          else {
            local_248 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_usr_026af770);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = local_248;
          }
          local_1b1 = pcVar6 != (cfstringStruct *)0x0;
          local_c0 = local_248;
          local_e8 = &cf_unit;
          local_b8 = &cf__;
          local_e0 = &cf_tap;
          local_b0 = &cf_commonGroups;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_108,6);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          if (local_1b1) {
            (*(code *)PTR__objc_release_02578630)(local_1b0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(lVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (pcVar3 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_1a0);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_190);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar10);
          local_138 = local_138 + 1;
          puVar8 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
          if (local_140 <= puVar8) goto LAB_01db35cc;
        }
        local_1f0 = local_1f0 + 1;
      } while (local_1f0 < local_1e8);
      local_1e8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_1f0 = 0;
    } while (local_1e8 != 0);
  }
LAB_01db35cc:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar8 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar8;
}

