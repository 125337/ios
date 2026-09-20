// FUN_0001d81c @ 0001d81c

void FUN_0001d81c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong local_1a0;
  ulong local_168;
  ulong local_160;
  ulong local_130;
  int local_124;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0 [3];
  undefined1 *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_d0[0] = puVar3;
  _memset(auStack_118,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar8 = *local_108;
    local_168 = 0;
    do {
      do {
        if (*local_108 - lVar8 != 0) {
          _objc_enumerationMutation(*local_108 - lVar8,uVar1);
        }
        uVar9 = *(ulong *)(local_110 + local_168 * 8);
        pcVar4 = "CMessageWrap";
        local_d8 = uVar9;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,pcVar4);
        if ((uVar9 & 1) == 0) {
          local_1a0 = 0;
        }
        else {
          local_1a0 = local_d8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = local_1a0;
        if ((local_1a0 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_m_uiMessageType_0269d0a8),
           (int)local_1a0 != 1)) {
          local_124 = 3;
        }
        else {
          uVar9 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_m_nsContent_0269d0a0);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar9;
          FUN_0001a2e4();
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar9);
          uVar9 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          puVar7 = local_b8;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if (uVar9 == 0) {
            puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            local_124 = 3;
          }
          else {
            uVar9 = local_120;
            FUN_00020028(local_120,local_d0[0]);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf______)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            puVar6 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
            puVar7 = puVar6 + -3000;
            if (puVar6 < &segment_command_00000ba0.vmaddr) {
              local_124 = 0;
            }
            else {
              puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
              local_124 = 2;
            }
          }
          _objc_storeStrong(puVar7,&local_130,0);
        }
        _objc_storeStrong(&local_120,0);
        if ((local_124 != 0) && (local_124 != 3)) goto LAB_0001dd50;
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  local_124 = 0;
LAB_0001dd50:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar7 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  local_124 = 1;
  _objc_storeStrong(local_d0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar7);
  return;
}

