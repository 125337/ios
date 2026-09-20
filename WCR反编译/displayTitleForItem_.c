// displayTitleForItem: @ 01a087b4

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordMultiReplyEditorViewController::displayTitleForItem_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_228;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_178;
  cfstringStruct *local_158;
  ulong local_150;
  ulong local_148;
  byte local_139;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  int local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar1 = local_c8;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_zzQ_;
    local_d4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_178 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_178;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_128,0,0x40);
    puVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1a0 != (undefined *)0x0) {
      lVar7 = *local_118;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar7 != 0) {
            _objc_enumerationMutation(*local_118 - lVar7,puVar2);
          }
          uVar8 = *(ulong *)(local_120 + (long)local_1a8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_e8 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar4 = local_e8;
          if ((uVar8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar4;
            FUN_01a08fe8();
            _objc_retainAutoreleasedReturnValue();
            local_138 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_isEqualToString__0269ccc8,local_d0);
            local_139 = (byte)uVar4;
            if (((uVar4 & 1) == 0) &&
               (uVar8 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_138,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix),
               uVar4 = local_138, (uVar8 & 1) != 0)) {
              uVar5 = _kWCRefineMessageRepositoryIDPrefix;
              (*(code *)PTR__objc_msgSend_02578628)
                        (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_substringFromIndex__0269d120,uVar5);
              _objc_retainAutoreleasedReturnValue();
              local_148 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,local_d0);
              local_139 = (byte)uVar4;
              _objc_storeStrong(&local_148,0);
            }
            if ((local_139 & 1) == 0) {
              local_d4 = 3;
            }
            else {
              uVar4 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar4;
              FUN_01a08fe8();
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar8;
              (*(code *)PTR__objc_release_02578630)(uVar4);
              uVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
              if (uVar4 == 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = &cf_N_mo_;
              }
              else {
                pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_N_);
                _objc_retainAutoreleasedReturnValue();
                local_b0 = pcVar1;
              }
              local_d4 = 1;
              _objc_storeStrong(&local_150,0);
            }
            _objc_storeStrong(&local_138);
            _objc_storeStrong(&local_130,0);
            if (local_d4 != 3) goto LAB_01a08cf4;
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_01a08cf4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d4 == 0) {
      pcVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_format_s_);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_158 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar6 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_creturn_s_,
                 &::cf_space_s_);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_158;
      local_158 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      while (pcVar1 = local_158,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_containsString__0269d0b0,&::cf_space_s_),
            ((ulong)pcVar1 & 1) != 0) {
        pcVar6 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_space_s_,
                   &::cf_space_s_);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_158;
        local_158 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar6 = local_158;
      FUN_01a08fe8();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_158;
      local_158 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
      if (pcVar1 < (cfstringStruct *)((long)&MACH_HEADER.ncmds + 3)) {
        pcVar1 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_228 = &cf_e_g;
        }
        else {
          local_228 = local_158;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_228;
      }
      else {
        pcVar1 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_substringToIndex__0269d6c0,0x12);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      local_d4 = 1;
      _objc_storeStrong(&local_158,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

