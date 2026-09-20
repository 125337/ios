// FUN_0015c624 @ 0015c624

void FUN_0015c624(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_198;
  ulong local_190;
  ulong local_130;
  cfstringStruct *local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  cfstringStruct *local_d0;
  undefined4 local_c8;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
     pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088, uVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_c8 = 1;
  }
  else {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar3;
    _memset(auStack_118,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar4 = *local_108;
      local_198 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_110 + local_198 * 8);
          local_d8 = uVar5;
          FUN_0015ecd4();
          local_120 = uVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = &cf___;
          uVar5 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_msgSummary_0269f6d0);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_msgSummary_0269f6d0);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_130 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar5 & 1) != 0) {
              _objc_storeStrong(&local_128,local_130);
            }
            _objc_storeStrong(&local_130,0);
          }
          pcVar3 = local_d0;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf__llu___);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_128,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = 1;
    local_b0 = pcVar3;
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

