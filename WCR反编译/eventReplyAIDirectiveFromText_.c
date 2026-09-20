// eventReplyAIDirectiveFromText: @ 009b7a80

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::eventReplyAIDirectiveFromText_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  uint local_204;
  undefined *local_1d0;
  undefined *local_1c8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  cfstringStruct *local_118;
  byte local_109;
  ulong local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  int local_ec;
  ulong local_e8;
  ulong local_e0;
  SEL local_d8;
  cfstringStruct *local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_e0,param_3);
  uVar1 = local_e0;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_c8 = 0;
    local_ec = 1;
  }
  else {
    pcVar8 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_chatReplyCommand_0269d4f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar8;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    local_108 = 0;
    pcVar8 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    if ((pcVar8 != (cfstringStruct *)0x0) &&
       (uVar1 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,local_100),
       (uVar1 & 1) != 0)) {
      local_109 = 0;
      _memset(auStack_158,0,0x40);
      pcVar8 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_chatPolishCommand_0269d348);
      _objc_retainAutoreleasedReturnValue();
      local_190 = pcVar8;
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_190 = &::cf___;
      }
      local_c0 = local_190;
      pcVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_chatImageCommand_0269d358);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1a0 = &::cf___;
      }
      local_b8 = local_1a0;
      pcVar3 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_chatVideoCommand_0269d368);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1b0 = &::cf___;
      }
      local_b0 = local_1b0;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      local_1c8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10)
      ;
      if (local_1c8 != (undefined *)0x0) {
        lVar7 = *local_148;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_148 - lVar7 != 0) {
              _objc_enumerationMutation(*local_148 - lVar7,puVar4);
            }
            pcVar8 = *(cfstringStruct **)(local_150 + (long)local_1d0 * 8);
            local_118 = pcVar8;
            FUN_009af3fc();
            _objc_retainAutoreleasedReturnValue();
            local_160 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
            if ((pcVar8 == (cfstringStruct *)0x0) ||
               (uVar1 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,local_160),
               (uVar1 & 1) == 0)) {
LAB_009b7eb8:
              local_ec = 0;
            }
            else {
              pcVar8 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
              pcVar2 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
              if ((pcVar8 < pcVar2) ||
                 (pcVar8 = local_160,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_160,PTR_s_isEqualToString__0269ccc8,local_100),
                 ((ulong)pcVar8 & 1) != 0)) goto LAB_009b7eb8;
              local_109 = 1;
              local_ec = 2;
            }
            _objc_storeStrong(&local_160,0);
            if (local_ec != 0) goto LAB_009b7f40;
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      local_ec = 0;
LAB_009b7f40:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar1 = local_e8;
      if ((local_109 & 1) == 0) {
        pcVar8 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,pcVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_108;
        local_108 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
    }
    if ((local_108 == 0) &&
       (uVar1 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_containsString__0269d0b0,&cf__AI),
       (uVar1 & 1) != 0)) {
      uVar5 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__AI,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_108;
      local_108 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      pcVar8 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
      local_204 = 0;
      if (pcVar8 != (cfstringStruct *)0x0) {
        uVar1 = local_108;
        FUN_009af3fc();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_204 = (uint)uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if ((local_204 & 1) != 0) {
        uVar5 = local_108;
        FUN_009af3fc();
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_substringFromIndex__0269d120,pcVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_108;
        local_108 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
    }
    if (local_108 == 0) {
      local_c8 = 0;
    }
    else {
      uVar1 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_108,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__AI,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      FUN_009af3fc();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_ec = 1;
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

