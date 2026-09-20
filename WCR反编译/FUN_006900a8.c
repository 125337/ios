// FUN_006900a8 @ 006900a8

void FUN_006900a8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  undefined *local_280;
  undefined *local_278;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  cfstringStruct *local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  uint local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [128];
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_168,param_1);
  pcVar3 = local_168;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = &cf___;
    local_178 = 1;
  }
  else {
    _memset(auStack_1c0,0,0x40);
    local_d8 = &cf_number;
    local_d0 = &cf_link_number;
    local_c8 = &cf_qrcode_index;
    local_c0 = &cf_link_index;
    local_b8 = &cf_seq;
    local_b0 = &cf_index;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_278 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_278 != (undefined *)0x0) {
      lVar7 = *local_1b0;
      local_280 = (undefined *)0x0;
      do {
        do {
          if (*local_1b0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar7,puVar2);
          }
          local_180 = *(undefined8 *)(local_1b8 + (long)local_280 * 8);
          pcVar3 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,local_180);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          FUN_0068b784();
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar4;
          FUN_0067d82c();
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_decimalDigitCharacterSet_026a5190);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          pcVar3 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
          bVar1 = false;
          if (pcVar3 != (cfstringStruct *)0x0) {
            pcVar3 = local_1c8;
            puVar5 = PTR_s_rangeOfCharacterFromSet__0269db68;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_rangeOfCharacterFromSet__0269db68,local_1d0);
            bVar1 = pcVar3 == (cfstringStruct *)0x7fffffffffffffff;
            local_1e0 = pcVar3;
            local_1d8 = puVar5;
          }
          pcVar3 = local_1c8;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = pcVar3;
          }
          local_178 = (uint)bVar1;
          _objc_storeStrong(&local_1d0);
          _objc_storeStrong(&local_1c8,0);
          if (local_178 != 0) goto LAB_006905ac;
          local_280 = local_280 + 1;
        } while (local_280 < local_278);
        local_278 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                   0x10);
        local_280 = (undefined *)0x0;
      } while (local_278 != (undefined *)0x0);
    }
    local_178 = 0;
LAB_006905ac:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_178 == 0) {
      _memset(auStack_228,0,0x40);
      pcVar3 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      local_330 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_330 != (cfstringStruct *)0x0) {
        lVar7 = *local_218;
        local_338 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_218 - lVar7 != 0) {
              _objc_enumerationMutation(*local_218 - lVar7,pcVar3);
            }
            pcVar8 = *(cfstringStruct **)(local_220 + (long)local_338 * 8);
            local_1e8 = pcVar8;
            FUN_0068b784();
            _objc_retainAutoreleasedReturnValue();
            local_230 = pcVar8;
            FUN_0067e29c();
            _objc_retainAutoreleasedReturnValue();
            local_238 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
            pcVar4 = local_238;
            bVar1 = pcVar8 != (cfstringStruct *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_160 = pcVar4;
            }
            local_178 = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_238);
            _objc_storeStrong(&local_230,0);
            if (local_178 != 0) goto LAB_00690844;
            local_338 = (cfstringStruct *)((long)&local_338->field0_0x0 + 1);
          } while (local_338 < local_330);
          local_330 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_158,
                     0x10);
          local_338 = (cfstringStruct *)0x0;
        } while (local_330 != (cfstringStruct *)0x0);
      }
      local_178 = 0;
LAB_00690844:
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (local_178 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = &cf___;
        local_178 = 1;
      }
    }
  }
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

