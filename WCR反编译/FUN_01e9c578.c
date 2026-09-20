// FUN_01e9c578 @ 01e9c578

void FUN_01e9c578(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *local_1c0;
  undefined *local_190;
  undefined *local_188;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  cfstringStruct *local_e0;
  uint local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  pcVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar5 = local_d0;
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = &cf___;
    local_d4 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = pcVar5;
    _memset(auStack_128,0,0x40);
    local_c0 = &cf_lrc;
    local_b8 = &cf_tlyric;
    local_b0 = &cf_klyric;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != (undefined *)0x0) {
      lVar6 = *local_118;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,puVar2);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_190 * 8);
          pcVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,local_e8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_130 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)pcVar3 & 1) == 0) {
            local_d4 = 3;
          }
          else {
            pcVar3 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_lyric);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar5 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
            local_141 = ((ulong)pcVar5 & 1) == 0;
            if (local_141) {
              local_1c0 = &cf___;
            }
            else {
              local_1c0 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_lyric);
              _objc_retainAutoreleasedReturnValue();
              local_140 = local_1c0;
            }
            local_141 = !local_141;
            (*(code *)PTR__objc_retain_02578638)();
            local_138 = local_1c0;
            if (local_141) {
              (*(code *)PTR__objc_release_02578630)(local_140);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
            pcVar3 = local_138;
            bVar1 = pcVar5 != (cfstringStruct *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c8 = pcVar3;
            }
            local_d4 = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_138,0);
          }
          _objc_storeStrong(&local_130,0);
          if ((local_d4 != 0) && (local_d4 != 3)) goto LAB_01e9c9d0;
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
LAB_01e9c9d0:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = &cf___;
      local_d4 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

