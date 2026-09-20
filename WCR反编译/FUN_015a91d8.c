// FUN_015a91d8 @ 015a91d8

void FUN_015a91d8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_1b0;
  undefined *local_180;
  undefined *local_178;
  undefined *local_150;
  cfstringStruct *local_138;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined *local_d0;
  uint local_c4;
  long local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  lVar6 = local_b8;
  FUN_015acf8c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_b0 = (cfstringStruct *)0x0;
    local_c4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_150 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_150;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_118,0,0x40);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_178 != (undefined *)0x0) {
      lVar6 = *local_108;
      local_180 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar6 != 0) {
            _objc_enumerationMutation(*local_108 - lVar6,puVar2);
          }
          pcVar7 = *(cfstringStruct **)(local_110 + (long)local_180 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_d8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar7 & 1) != 0) {
            pcVar7 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar4 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_129 = false;
            bVar1 = ((ulong)pcVar4 & 1) == 0;
            if (bVar1) {
              local_1b0 = &cf___;
            }
            else {
              local_1b0 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_128 = local_1b0;
            }
            local_129 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_120 = local_1b0;
            if ((local_129 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_128);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            pcVar7 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_c4 = 3;
            }
            else {
              pcVar4 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120,PTR_s_isEqualToString__0269ccc8,local_c0);
              pcVar7 = local_d8;
              if (((ulong)pcVar4 & 1) == 0) {
                pcVar4 = local_120;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
                pcVar7 = local_120;
                if (((ulong)pcVar4 & 1) != 0) {
                  uVar5 = _kWCRefineMessageRepositoryIDPrefix;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar7,PTR_s_substringFromIndex__0269d120,uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  local_138 = pcVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar7,PTR_s_isEqualToString__0269ccc8,local_c0);
                  pcVar4 = local_d8;
                  bVar1 = ((ulong)pcVar7 & 1) != 0;
                  if (bVar1) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_b0 = pcVar4;
                  }
                  local_c4 = (uint)bVar1;
                  _objc_storeStrong(&local_138,0);
                  if (local_c4 != 0) goto LAB_015a968c;
                }
                local_c4 = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = pcVar7;
                local_c4 = 1;
              }
            }
LAB_015a968c:
            _objc_storeStrong(&local_120,0);
            if ((local_c4 != 0) && (local_c4 != 3)) goto LAB_015a9720;
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_180 = (undefined *)0x0;
      } while (local_178 != (undefined *)0x0);
    }
    local_c4 = 0;
LAB_015a9720:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_c4 == 0) {
      local_b0 = (cfstringStruct *)0x0;
      local_c4 = 1;
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

