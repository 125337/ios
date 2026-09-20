// FUN_0201b120 @ 0201b120

void FUN_0201b120(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_188;
  undefined *local_180;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  uint local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  pcVar2 = local_c8;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf__;
    local_d4 = 1;
  }
  else {
    local_38 = &cf_YVh_;
    local_30 = &cf_RepeatEnhance_;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    puVar3 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b8,0x10);
    if (local_180 != (undefined *)0x0) {
      lVar6 = *local_118;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,puVar3);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_188 * 8);
          pcVar2 = local_d0;
          puVar5 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_rangeOfString__0269d838,local_e8);
          local_138 = pcVar2;
          local_130 = puVar5;
          if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
            pcVar4 = local_d0;
            local_140 = (cfstringStruct *)(puVar5 + (long)&pcVar2->field0_0x0);
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
            if ((cfstringStruct *)(puVar5 + (long)&pcVar2->field0_0x0) < pcVar4) {
              pcVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_substringFromIndex__0269d120,local_140);
              _objc_retainAutoreleasedReturnValue();
              local_148 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              local_150 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
              pcVar2 = local_150;
              bVar1 = pcVar4 != (cfstringStruct *)0x0;
              if (bVar1) {
                (*(code *)PTR__objc_retain_02578638)();
                local_c0 = pcVar2;
              }
              local_d4 = (uint)bVar1;
              _objc_storeStrong(bVar1,&local_150);
              _objc_storeStrong(&local_148,0);
              if (local_d4 != 0) goto LAB_0201b48c;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = &cf__;
            local_d4 = 1;
            goto LAB_0201b48c;
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_0201b48c:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_d4 == 0) {
      pcVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_hasPrefix__0269d320,&cf__);
      pcVar2 = local_d0;
      if (((ulong)pcVar4 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = pcVar2;
        local_d4 = 1;
      }
      else {
        pcVar4 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_158 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
        pcVar2 = local_158;
        if (pcVar4 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = &cf__;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = pcVar2;
        }
        local_d4 = 1;
        _objc_storeStrong(&local_158,0);
      }
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

