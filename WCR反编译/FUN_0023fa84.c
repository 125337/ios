// FUN_0023fa84 @ 0023fa84

void FUN_0023fa84(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  cfstringStruct *local_f0 [3];
  undefined4 local_d4;
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
  pcVar2 = local_d0;
  if (local_d0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = &cf___;
    local_d4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    pcVar3 = local_d0;
    if (((ulong)pcVar2 & 1) == 0) {
      local_f0[0] = (cfstringStruct *)0x0;
      _memset(auStack_138,0,0x40);
      local_c0 = &cf_m_nsUsrName;
      local_b8 = &cf_m_nsUserName;
      local_b0 = &cf_username;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1a0 != (undefined *)0x0) {
        lVar5 = *local_128;
        local_1a8 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar5 != 0) {
              _objc_enumerationMutation(*local_128 - lVar5,puVar1);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_1a8 * 8);
            pcVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,local_f8);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_f0[0];
            local_f0[0] = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_f0[0];
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
            uVar6 = (ulong)pcVar2 & 0xffffffff;
            if (((ulong)pcVar2 & 1) != 0) {
              pcVar2 = local_f0[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0);
              uVar6 = 0;
              if (pcVar2 != (cfstringStruct *)0x0) {
                local_d4 = 2;
                goto LAB_0023ff0c;
              }
            }
            _objc_storeStrong(uVar6,local_f0,0);
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 < local_1a0);
          local_1a0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1a8 = (undefined *)0x0;
        } while (local_1a0 != (undefined *)0x0);
      }
      local_d4 = 0;
LAB_0023ff0c:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar2 = local_f0[0];
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_c8 = local_f0[0];
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = &cf___;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      local_d4 = 1;
      _objc_storeStrong(local_f0,0);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c8);
  return;
}

