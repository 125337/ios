// FUN_0012b13c @ 0012b13c

void FUN_0012b13c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *local_1a0;
  undefined *local_198;
  cfstringStruct *local_150 [2];
  cfstringStruct *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
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
  if (local_d8 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = &cf___;
    local_dc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      _memset(auStack_138,0,0x40);
      local_c8 = &cf_m_nsUsrName;
      local_c0 = &cf_m_nsUserName;
      local_b8 = &cf_username;
      local_b0 = &cf_userName;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_198 != (undefined *)0x0) {
        lVar5 = *local_128;
        local_1a0 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar5 != 0) {
              _objc_enumerationMutation(*local_128 - lVar5,puVar2);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_1a0 * 8);
            local_140 = (cfstringStruct *)0x0;
            pcVar4 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_valueForKey__0269d128,local_f8);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_140;
            local_140 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar4 = local_140;
            FUN_0012b638();
            _objc_retainAutoreleasedReturnValue();
            local_150[0] = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
            pcVar3 = local_150[0];
            bVar1 = pcVar4 != (cfstringStruct *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = pcVar3;
            }
            local_dc = (uint)bVar1;
            _objc_storeStrong(bVar1,local_150);
            _objc_storeStrong(&local_140,0);
            if (local_dc != 0) goto LAB_0012b568;
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1a0 = (undefined *)0x0;
        } while (local_198 != (undefined *)0x0);
      }
      local_dc = 0;
LAB_0012b568:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_dc == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = &cf___;
        local_dc = 1;
      }
    }
    else {
      pcVar3 = local_d8;
      FUN_0012b638();
      _objc_retainAutoreleasedReturnValue();
      local_dc = 1;
      local_d0 = pcVar3;
    }
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

