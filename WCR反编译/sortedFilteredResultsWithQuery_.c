// sortedFilteredResultsWithQuery: @ 00fe4e90

/* Function Stack Size: 0x18 bytes */

ID WCRefineIconNameCaptureSupport::sortedFilteredResultsWithQuery_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_260;
  uint local_240;
  uint local_234;
  ulong local_218;
  ulong local_210;
  cfstringStruct *local_1d0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined1 local_198;
  undefined1 local_195;
  int local_194;
  cfstringStruct *local_190;
  undefined *local_188;
  byte local_179;
  cfstringStruct *local_178;
  byte local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined *local_158;
  cfstringStruct *local_150;
  byte local_141;
  cfstringStruct *local_140;
  byte local_131;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined1 *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar7 = local_c0;
  local_c8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (pcVar7 == (cfstringStruct *)0x0) {
    local_1d0 = &::cf___;
  }
  else {
    local_1d0 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_1d0;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar7;
  (*(code *)PTR__objc_release_02578630)(local_1d0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  _memset(auStack_128,0,0x40);
  uVar1 = DAT_028e3058;
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_210 != 0) {
    lVar6 = *local_118;
    local_218 = 0;
    do {
      do {
        if (*local_118 - lVar6 != 0) {
          _objc_enumerationMutation(*local_118 - lVar6,uVar1);
        }
        pcVar7 = *(cfstringStruct **)(local_120 + local_218 * 8);
        local_131 = 0;
        local_234 = 0;
        local_e8 = pcVar7;
        if (local_c8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_kind_026a27e8);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_234 = (uint)pcVar7 ^ 1;
        }
        if ((local_131 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        if ((local_234 & 1) == 0) {
          local_141 = 0;
          local_240 = 0;
          if (local_c8 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            pcVar7 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_kind_026a27e8);
            _objc_retainAutoreleasedReturnValue();
            local_141 = 1;
            local_140 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_240 = (uint)pcVar7 ^ 1;
          }
          if ((local_141 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if ((local_240 & 1) == 0) {
            pcVar7 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
            if (pcVar7 != (cfstringStruct *)0x0) {
              pcVar7 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_exportFileName_026ad1e0);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_260 = pcVar5;
              if (pcVar5 == (cfstringStruct *)0x0) {
                local_260 = &::cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = local_260;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              pcVar7 = local_150;
              puVar3 = PTR_s_rangeOfString__0269d838;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_rangeOfString__0269d838,local_d8);
              local_169 = 0;
              local_179 = 0;
              bVar2 = false;
              local_160 = pcVar7;
              local_158 = puVar3;
              if (pcVar7 == (cfstringStruct *)0x7fffffffffffffff) {
                pcVar7 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_name_0269d828);
                _objc_retainAutoreleasedReturnValue();
                local_169 = 1;
                local_168 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_179 = 1;
                puVar3 = PTR_s_rangeOfString__0269d838;
                local_178 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar2 = pcVar7 == (cfstringStruct *)0x7fffffffffffffff;
                local_190 = pcVar7;
                local_188 = puVar3;
              }
              if ((local_179 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_178);
              }
              if ((local_169 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_168);
              }
              if (bVar2) {
                local_194 = 3;
              }
              else {
                local_194 = 0;
              }
              _objc_storeStrong(&local_150,0);
              if (local_194 != 0) goto LAB_00fe5510;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
        }
LAB_00fe5510:
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_1b8 = PTR___NSConcreteGlobalBlock_02578658;
  local_1b0 = 0xd0800000;
  local_1ac = 0;
  local_1a8 = FUN_00fe56d0;
  local_1a0 = &DAT_02583ea8;
  local_198 = bVar2;
  local_195 = bVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_sortUsingComparator__0269d168,&local_1b8);
  puVar3 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_194 = 1;
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

