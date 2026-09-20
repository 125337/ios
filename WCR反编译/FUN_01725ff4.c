// FUN_01725ff4 @ 01725ff4

void FUN_01725ff4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_260;
  ulong local_258;
  ulong local_230;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  ulong local_158;
  uint local_14c;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  uVar3 = local_138;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar3 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if ((uVar3 == 0) || (local_140 == 0)) {
    local_130 = 0;
    local_14c = 1;
  }
  else {
    uVar3 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_messageRepositoryItems_0269d730);
    _objc_retainAutoreleasedReturnValue();
    local_230 = uVar3;
    if (uVar3 == 0) {
      local_230 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_230;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
    if ((uVar3 & 1) == 0) {
      _memset(auStack_1f0,0,0x40);
      uVar3 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10)
      ;
      if (local_2a8 != 0) {
        lVar6 = *local_1e0;
        local_2b0 = 0;
        do {
          do {
            if (*local_1e0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar6,uVar3);
            }
            uVar7 = *(ulong *)(local_1e8 + local_2b0 * 8);
            local_1b0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1f8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar7 & 1) == 0) {
              local_14c = 5;
            }
            else {
              uVar4 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_isEqualToString__0269ccc8,local_148);
              uVar7 = local_1b0;
              if ((uVar4 & 1) == 0) {
                uVar4 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
                uVar7 = local_1f8;
                if ((uVar4 & 1) != 0) {
                  uVar5 = _kWCRefineMessageRepositoryIDPrefix;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_substringFromIndex__0269d120,uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  local_200 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_isEqualToString__0269ccc8,local_148);
                  uVar4 = local_1b0;
                  bVar1 = (uVar7 & 1) != 0;
                  if (bVar1) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_130 = uVar4;
                  }
                  local_14c = (uint)bVar1;
                  _objc_storeStrong(&local_200,0);
                  if (local_14c != 0) goto LAB_0172663c;
                }
                local_14c = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = uVar7;
                local_14c = 1;
              }
            }
LAB_0172663c:
            _objc_storeStrong(&local_1f8,0);
            if ((local_14c != 0) && (local_14c != 5)) goto LAB_017266d0;
            local_2b0 = local_2b0 + 1;
          } while (local_2b0 < local_2a8);
          local_2a8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          local_2b0 = 0;
        } while (local_2a8 != 0);
      }
      local_14c = 0;
LAB_017266d0:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_14c == 0) {
        local_130 = 0;
        local_14c = 1;
      }
    }
    else {
      _memset(auStack_1a0,0,0x40);
      uVar3 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_258 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      if (local_258 != 0) {
        lVar6 = *local_190;
        local_260 = 0;
        do {
          do {
            if (*local_190 - lVar6 != 0) {
              _objc_enumerationMutation(*local_190 - lVar6,uVar3);
            }
            uVar7 = *(ulong *)(local_198 + local_260 * 8);
            local_160 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1a8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar7 & 1) == 0) ||
               (uVar4 = local_1a8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1a8,PTR_s_isEqualToString__0269ccc8,local_148), uVar7 = local_160,
               (uVar4 & 1) == 0)) {
              local_14c = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = uVar7;
              local_14c = 1;
            }
            _objc_storeStrong(&local_1a8,0);
            if (local_14c != 0) goto LAB_01726390;
            local_260 = local_260 + 1;
          } while (local_260 < local_258);
          local_258 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_260 = 0;
        } while (local_258 != 0);
      }
      local_14c = 0;
LAB_01726390:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_14c == 0) {
        local_130 = 0;
        local_14c = 1;
      }
    }
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

