// FUN_019d1db0 @ 019d1db0

void FUN_019d1db0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_188;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  undefined4 local_cc;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_c8, FUN_019cc694(pcVar1), pcVar1 = local_c8, ((ulong)pcVar2 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = &cf___;
    local_d9 = 1;
    _memset(auStack_128,0,0x40);
    if (local_b8 == (cfstringStruct *)0x0) {
      local_188 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    else {
      local_188 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
              );
    if (local_1a0 != (cfstringStruct *)0x0) {
      lVar6 = *local_118;
      local_1a8 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,local_188);
          }
          lVar7 = *(long *)(local_120 + (long)local_1a8 * 8);
          local_e8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_familyName);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          FUN_019e0bec();
          _objc_retainAutoreleasedReturnValue();
          local_130 = lVar5;
          (*(code *)PTR__objc_release_02578630)(lVar7);
          lVar5 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            local_cc = 3;
          }
          else {
            pcVar1 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
            if (pcVar1 == (cfstringStruct *)0x0) {
              _objc_storeStrong(&local_d8,local_130);
            }
            else {
              pcVar1 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_isEqualToString__0269ccc8,local_130);
              if (((ulong)pcVar1 & 1) == 0) {
                local_d9 = 0;
              }
            }
            local_cc = 0;
          }
          _objc_storeStrong(&local_130,0);
          local_1a8 = (cfstringStruct *)((long)&local_1a8->field0_0x0 + 1);
        } while (local_1a8 < local_1a0);
        local_1a0 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1a8 = (cfstringStruct *)0x0;
      } while (local_1a0 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(local_188);
    if (((local_d9 & 1) == 0) ||
       (pcVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
       pcVar1 = local_d8, pcVar2 == (cfstringStruct *)0x0)) {
      pcVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_138 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_019e0bec();
      _objc_retainAutoreleasedReturnValue();
      local_140 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_1e0 = &cf__g_TTW_SO;
      }
      else {
        local_1e0 = local_140;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1e0;
      local_cc = 1;
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_138,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar1;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar1;
    local_cc = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

