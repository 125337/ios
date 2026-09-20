// historyDisplayContentForRecord: @ 01b2c6b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyDisplayContentForRecord_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  uint local_208;
  uint local_204;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  int local_cc;
  cfstringStruct *local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_cc = 1;
  }
  else {
    pcVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_resolvedRecord__026beb38,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1a0 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_1a0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_d8;
    FUN_01b234fc();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar6 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar6;
      FUN_01b2a7d8();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_e0;
      local_e0 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
    pcVar6 = local_e0;
    puVar2 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rangeOfString__0269d838,&::cf_newline_s_);
    pcVar3 = local_e0;
    local_f0 = pcVar6;
    local_e8 = puVar2;
    if (pcVar6 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_messageWrapForHistoryRecord__026bee60,local_d8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_e0;
      local_f8 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar3;
        local_cc = 1;
      }
      else {
        pcVar3 = local_d8;
        FUN_01b24660();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_e0;
        local_100 = pcVar3;
        FUN_01b242ac();
        _objc_retainAutoreleasedReturnValue();
        local_108 = pcVar6;
        _memset(auStack_150,0,0x40);
        pcVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_historyCandidateTextsForMessageW_026bee68,local_f8,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1e0 != (cfstringStruct *)0x0) {
          lVar5 = *local_140;
          local_1e8 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_140 - lVar5 != 0) {
                _objc_enumerationMutation(*local_140 - lVar5,pcVar3);
              }
              pcVar6 = *(cfstringStruct **)(local_148 + (long)local_1e8 * 8);
              local_110 = pcVar6;
              FUN_01b2a7d8();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_s_rangeOfString__0269d838;
              local_158 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar6,PTR_s_rangeOfString__0269d838,&::cf_newline_s_);
              puVar1 = (undefined1 *)((long)&pcVar6[-0x400000000000000].field0_0x0 + 1);
              local_168 = pcVar6;
              local_160 = puVar2;
              if (puVar1 == (undefined1 *)0x0) {
                local_cc = 3;
              }
              else {
                pcVar6 = local_158;
                FUN_01b242ac(puVar1);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = local_100;
                local_170 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
                local_204 = 0;
                if (pcVar4 != (cfstringStruct *)0x0) {
                  pcVar6 = local_170;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,PTR_s_isEqualToString__0269ccc8,local_100);
                  local_204 = (uint)pcVar6;
                }
                pcVar6 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
                local_208 = 0;
                if (pcVar6 != (cfstringStruct *)0x0) {
                  pcVar6 = local_170;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,PTR_s_isEqualToString__0269ccc8,local_108);
                  local_208 = (uint)pcVar6;
                }
                pcVar6 = local_158;
                if (((local_204 & 1) == 0) && ((local_208 & 1) == 0)) {
                  local_cc = 0;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar6;
                  local_cc = 1;
                }
                _objc_storeStrong(&local_170,0);
              }
              _objc_storeStrong(&local_158,0);
              if ((local_cc != 0) && (local_cc != 3)) goto LAB_01b2ccb0;
              local_1e8 = (cfstringStruct *)((long)&local_1e8->field0_0x0 + 1);
            } while (local_1e8 < local_1e0);
            local_1e0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8
                       ,0x10);
            local_1e8 = (cfstringStruct *)0x0;
          } while (local_1e0 != (cfstringStruct *)0x0);
        }
        local_cc = 0;
LAB_01b2ccb0:
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_e0;
        if (local_cc == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar3;
          local_cc = 1;
        }
        _objc_storeStrong(&local_108);
        _objc_storeStrong(&local_100,0);
      }
      _objc_storeStrong(&local_f8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar3;
      local_cc = 1;
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

