// FUN_0083d1a0 @ 0083d1a0

void FUN_0083d1a0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_1b0;
  ulong local_1a8;
  long local_140;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = 1;
    local_b0 = puVar1;
  }
  else {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_e0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    _memset(auStack_130,0,0x40);
    uVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_1a8 != 0) {
      lVar4 = *local_120;
      local_1b0 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar2);
          }
          lVar5 = *(long *)(local_128 + local_1b0 * 8);
          local_f0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_138 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            local_c8 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_138);
            lVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_stringByDeletingPathExtension_0269fd18);
            _objc_retainAutoreleasedReturnValue();
            local_140 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_140);
            }
            _objc_storeStrong(&local_140,0);
            local_c8 = 0;
          }
          _objc_storeStrong(&local_138,0);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_c8 = 1;
    local_b0 = puVar1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

