// messageRepositoryItemForReplyCode: @ 01d23620

/* Function Stack Size: 0x18 bytes */

ID WCRefineRedEnvelopViewController::messageRepositoryItemForReplyCode_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_190;
  undefined *local_188;
  undefined *local_160;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  uint local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar6 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar6;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_160 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_160;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_128,0,0x40);
    puVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_188 != (undefined *)0x0) {
      lVar6 = *local_118;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,puVar2);
          }
          uVar7 = *(ulong *)(local_120 + (long)local_190 * 8);
          local_e8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_130 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) == 0) ||
             (uVar7 = local_130,
             (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0), uVar7 == 0)) {
            local_d4 = 3;
          }
          else {
            uVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_isEqualToString__0269ccc8,local_d0);
            uVar7 = local_e8;
            if ((uVar4 & 1) == 0) {
              uVar4 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
              uVar7 = local_130;
              if ((uVar4 & 1) != 0) {
                uVar5 = _kWCRefineMessageRepositoryIDPrefix;
                (*(code *)PTR__objc_msgSend_02578628)
                          (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_substringFromIndex__0269d120,uVar5);
                _objc_retainAutoreleasedReturnValue();
                local_138 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_isEqualToString__0269ccc8,local_d0);
                uVar4 = local_e8;
                bVar1 = (uVar7 & 1) != 0;
                if (bVar1) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = uVar4;
                }
                local_d4 = (uint)bVar1;
                _objc_storeStrong(&local_138,0);
                if (local_d4 != 0) goto LAB_01d23a40;
              }
              local_d4 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar7;
              local_d4 = 1;
            }
          }
LAB_01d23a40:
          _objc_storeStrong(&local_130,0);
          if ((local_d4 != 0) && (local_d4 != 3)) goto LAB_01d23ad4;
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_01d23ad4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d4 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

