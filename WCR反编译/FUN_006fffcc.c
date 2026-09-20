// FUN_006fffcc @ 006fffcc

void FUN_006fffcc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_2c0;
  undefined *local_2b8;
  ulong local_258;
  ulong local_250;
  int local_20c;
  ulong local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160 [3];
  undefined8 local_148;
  byte local_139;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_139 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_138 = param_1;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_processedMetadataIdentifier_026a7350);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_160[0] = puVar2;
  _memset(auStack_1a8,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_availableMetadataFormats_026a7368);
  _objc_retainAutoreleasedReturnValue();
  local_250 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_250 != 0) {
    lVar6 = *local_198;
    local_258 = 0;
    do {
      do {
        if (*local_198 - lVar6 != 0) {
          _objc_enumerationMutation(*local_198 - lVar6,uVar3);
        }
        local_168 = *(undefined8 *)(local_1a0 + local_258 * 8);
        lVar4 = *(long *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_metadataForFormat__026a7370,local_168);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160[0],PTR_s_addObjectsFromArray__0269d540,local_1b0);
        }
        _objc_storeStrong(&local_1b0,0);
        local_258 = local_258 + 1;
      } while (local_258 < local_250);
      local_250 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
      local_258 = 0;
    } while (local_250 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = PTR__OBJC_CLASS___AVMetadataItem_026ce8b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVMetadataItem_026ce8b8,
             PTR_s_metadataItemsFromArray_filteredB_026a7378,local_160[0],local_148);
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    _memset(auStack_200,0,0x40);
    puVar2 = local_160[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,0x10);
    if (local_2b8 != (undefined *)0x0) {
      lVar6 = *local_1f0;
      local_2c0 = (undefined *)0x0;
      do {
        do {
          if (*local_1f0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1f0 - lVar6,puVar2);
          }
          uVar3 = *(ulong *)(local_1f8 + (long)local_2c0 * 8);
          local_1c0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_key_026a7380);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_208 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((uVar3 & 1) == 0) ||
             (uVar3 = local_208,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_208,PTR_s_isEqualToString__0269ccc8,&cf_com_qimao_wcrefine_processed),
             (uVar3 & 1) == 0)) {
            local_20c = 0;
          }
          else {
            local_139 = 1;
            local_20c = 5;
          }
          _objc_storeStrong(&local_208,0);
          if (local_20c != 0) goto LAB_007005b0;
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                   0x10);
        local_2c0 = (undefined *)0x0;
      } while (local_2b8 != (undefined *)0x0);
    }
LAB_007005b0:
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    local_139 = 1;
  }
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(local_160,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_139 & 1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

