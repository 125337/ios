// FUN_006d382c @ 006d382c

void FUN_006d382c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_300;
  ulong local_2f8;
  ulong local_290;
  ulong local_288;
  ulong local_258;
  ulong local_208;
  ulong local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  ulong local_160;
  uint local_158;
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
    local_158 = 1;
  }
  else {
    uVar3 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_messageRepositoryItems_0269d730);
    _objc_retainAutoreleasedReturnValue();
    local_258 = uVar3;
    if (uVar3 == 0) {
      local_258 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = local_258;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
    if ((uVar3 & 1) == 0) {
      _memset(auStack_1f8,0,0x40);
      uVar3 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_2f8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
      ;
      if (local_2f8 != 0) {
        lVar6 = *local_1e8;
        local_300 = 0;
        do {
          do {
            if (*local_1e8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar6,uVar3);
            }
            uVar7 = *(ulong *)(local_1f0 + local_300 * 8);
            local_1b8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_200 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar7 & 1) == 0) {
              local_158 = 5;
            }
            else {
              uVar4 = local_200;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_200,PTR_s_isEqualToString__0269ccc8,local_148);
              uVar7 = local_1b8;
              if ((uVar4 & 1) == 0) {
                uVar4 = local_200;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_200,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
                uVar7 = local_200;
                if ((uVar4 & 1) != 0) {
                  uVar5 = _kWCRefineMessageRepositoryIDPrefix;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_substringFromIndex__0269d120,uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  local_208 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_isEqualToString__0269ccc8,local_148);
                  uVar4 = local_1b8;
                  bVar1 = (uVar7 & 1) != 0;
                  if (bVar1) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_130 = uVar4;
                  }
                  local_158 = (uint)bVar1;
                  _objc_storeStrong(&local_208,0);
                  if (local_158 != 0) goto LAB_006d4028;
                }
                local_158 = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = uVar7;
                local_158 = 1;
              }
            }
LAB_006d4028:
            _objc_storeStrong(&local_200,0);
            if ((local_158 != 0) && (local_158 != 5)) goto LAB_006d40c8;
            local_300 = local_300 + 1;
          } while (local_300 < local_2f8);
          local_2f8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          local_300 = 0;
        } while (local_2f8 != 0);
      }
      local_158 = 0;
LAB_006d40c8:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_158 == 0) {
        local_130 = 0;
        local_158 = 1;
      }
    }
    else {
      _memset(auStack_1a8,0,0x40);
      uVar3 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_288 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
      if (local_288 != 0) {
        lVar6 = *local_198;
        local_290 = 0;
        do {
          do {
            if (*local_198 - lVar6 != 0) {
              _objc_enumerationMutation(*local_198 - lVar6,uVar3);
            }
            uVar7 = *(ulong *)(local_1a0 + local_290 * 8);
            local_168 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1b0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar7 & 1) == 0) ||
               (uVar4 = local_1b0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1b0,PTR_s_isEqualToString__0269ccc8,local_148), uVar7 = local_168,
               (uVar4 & 1) == 0)) {
              local_158 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = uVar7;
              local_158 = 1;
            }
            _objc_storeStrong(&local_1b0,0);
            if (local_158 != 0) goto LAB_006d3cc8;
            local_290 = local_290 + 1;
          } while (local_290 < local_288);
          local_288 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_290 = 0;
        } while (local_288 != 0);
      }
      local_158 = 0;
LAB_006d3cc8:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_158 == 0) {
        local_130 = 0;
        local_158 = 1;
      }
    }
    _objc_storeStrong(&local_160,0);
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

