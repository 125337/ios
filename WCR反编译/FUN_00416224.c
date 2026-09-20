// FUN_00416224 @ 00416224

void FUN_00416224(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_1f8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_180;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  ulong local_e0;
  uint local_d8;
  long local_c8;
  ulong local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar6 = local_b8;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if ((lVar6 == 0) || (local_c0 == 0)) {
    local_b0 = (cfstringStruct *)0x0;
    local_d8 = 1;
  }
  else {
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_messageRepositoryItems_0269d730);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar2;
    if (uVar2 == 0) {
      local_180 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_180;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _memset(auStack_128,0,0x40);
    uVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1a8 != 0) {
      lVar6 = *local_118;
      local_1b0 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,uVar2);
          }
          pcVar7 = *(cfstringStruct **)(local_120 + local_1b0 * 8);
          local_139 = 0;
          local_e8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar4 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar4 & 1) == 0) {
            local_1f8 = &cf___;
          }
          else {
            local_1f8 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_139 = 1;
            local_138 = local_1f8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = local_1f8;
          if ((local_139 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_d8 = 3;
          }
          else {
            pcVar7 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_isEqualToString__0269ccc8,local_c8);
            pcVar4 = local_e8;
            if (((ulong)pcVar7 & 1) == 0) {
              pcVar7 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
              pcVar4 = local_130;
              if (((ulong)pcVar7 & 1) != 0) {
                uVar5 = _kWCRefineMessageRepositoryIDPrefix;
                (*(code *)PTR__objc_msgSend_02578628)
                          (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_substringFromIndex__0269d120,uVar5);
                _objc_retainAutoreleasedReturnValue();
                local_148 = pcVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_isEqualToString__0269ccc8,local_c8);
                pcVar7 = local_e8;
                bVar1 = ((ulong)pcVar4 & 1) != 0;
                if (bVar1) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar7;
                }
                local_d8 = (uint)bVar1;
                _objc_storeStrong(&local_148,0);
                if (local_d8 != 0) goto LAB_004167a0;
              }
              local_d8 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar4;
              local_d8 = 1;
            }
          }
LAB_004167a0:
          _objc_storeStrong(&local_130,0);
          if ((local_d8 != 0) && (local_d8 != 3)) goto LAB_00416840;
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    local_d8 = 0;
LAB_00416840:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d8 == 0) {
      local_b0 = (cfstringStruct *)0x0;
      local_d8 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

