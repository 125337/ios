// FUN_01be3fd8 @ 01be3fd8

void FUN_01be3fd8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *local_168;
  undefined *local_160;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  uint local_dc;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  pcVar3 = local_d8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar4 = local_d8;
  if (((ulong)pcVar3 & 1) == 0) {
    _memset(auStack_128,0,0x40);
    local_c8 = &cf_m_nsUsrName;
    local_c0 = &cf_userName;
    local_b8 = &cf_username;
    local_b0 = &cf_m_nsUserName;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != (undefined *)0x0) {
      lVar5 = *local_118;
      local_168 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,puVar2);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_168 * 8);
          pcVar3 = local_d8;
          FUN_01be3454(local_d8,local_e8);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          FUN_01be33a4();
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          pcVar3 = local_130;
          bVar1 = pcVar4 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = pcVar3;
          }
          local_dc = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_130,0);
          if (local_dc != 0) goto LAB_01be428c;
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_168 = (undefined *)0x0;
      } while (local_160 != (undefined *)0x0);
    }
    local_dc = 0;
LAB_01be428c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_dc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = &cf___;
      local_dc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = pcVar4;
    local_dc = 1;
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

