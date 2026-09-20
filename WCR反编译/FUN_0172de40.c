// FUN_0172de40 @ 0172de40

void FUN_0172de40(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_170;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  int local_d4;
  long local_d0;
  byte *local_c8;
  long local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar3 = local_c0;
  local_c8 = param_3;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  if (local_c8 != (byte *)0x0) {
    *local_c8 = 0;
  }
  local_d0 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  pcVar2 = local_b8;
  if (lVar3 == 0) {
    if (local_b8 == (cfstringStruct *)0x0) {
      local_170 = &cf___;
    }
    else {
      local_170 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_170;
    local_d4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar4 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
       pcVar2 = local_b8, pcVar4 == (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_d4 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 0;
      local_e8 = pcVar2;
      _memset(auStack_138,0,0x40);
      pcVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      if (local_1b8 != (cfstringStruct *)0x0) {
        lVar3 = *local_128;
        local_1c0 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_128 - lVar3 != 0) {
              _objc_enumerationMutation(*local_128 - lVar3,pcVar2);
            }
            pcVar4 = *(cfstringStruct **)(local_130 + (long)local_1c0 * 8);
            local_f8 = pcVar4;
            FUN_01725ed0();
            _objc_retainAutoreleasedReturnValue();
            local_140 = pcVar4;
            if ((((local_e9 & 1) == 0) &&
                ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0),
                pcVar4 != (cfstringStruct *)0x0)) &&
               (pcVar4 = local_140,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_140,PTR_s_isEqualToString__0269ccc8,local_d0),
               ((ulong)pcVar4 & 1) != 0)) {
              local_e9 = 1;
              local_d4 = 3;
            }
            else {
              if (local_f8 == (cfstringStruct *)0x0) {
                local_1f0 = &cf___;
              }
              else {
                local_1f0 = local_f8;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_1f0);
              local_d4 = 0;
            }
            _objc_storeStrong(&local_140,0);
            local_1c0 = (cfstringStruct *)((long)&local_1c0->field0_0x0 + 1);
          } while (local_1c0 < local_1b8);
          local_1b8 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1c0 = (cfstringStruct *)0x0;
        } while (local_1b8 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      do {
        pcVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
        if (pcVar2 == (cfstringStruct *)0x0) break;
        pcVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        local_148 = pcVar2;
        FUN_01725ed0();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (pcVar4 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeLastObject_0269e830);
          local_d4 = 0;
        }
        else {
          local_d4 = 5;
        }
        _objc_storeStrong(&local_148,0);
      } while (local_d4 == 0);
      if (local_c8 != (byte *)0x0) {
        *local_c8 = local_e9 & 1;
      }
      pcVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      local_d4 = 1;
      local_b0 = pcVar2;
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

